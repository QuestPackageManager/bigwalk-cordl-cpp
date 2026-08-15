#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioManager)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioBasicReverb;
}
namespace GlobalNamespace {
class AudioClock;
}
namespace GlobalNamespace {
class AudioConfig;
}
namespace GlobalNamespace {
class AudioDynamicReverb;
}
namespace GlobalNamespace {
class AudioGUI3DDebugText;
}
namespace GlobalNamespace {
class AudioGUI;
}
namespace GlobalNamespace {
class AudioListenerController;
}
namespace GlobalNamespace {
class AudioLogger;
}
namespace GlobalNamespace {
class AudioOcclusionManager;
}
namespace GlobalNamespace {
class AudioPool;
}
namespace GlobalNamespace {
class AudioRTPCXProvider;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioReferenceManager;
}
namespace GlobalNamespace {
struct AudioSettingsGroupType;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
struct AudioUpdateType;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
template<typename T,typename U,typename V>
class FuncOneOut_3;
}
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace GlobalNamespace {
class IAudioVolume;
}
namespace GlobalNamespace {
template<typename T>
class ReadOnlyHashSet_1;
}
namespace GlobalNamespace {
class SoundBank;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace GlobalNamespace {
struct VoiceLimitBehaviorType;
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
namespace System {
class Action;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct AudioSpeakerMode;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
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
class AudioManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioManager*, "", "AudioManager");
// Dependencies System.Collections.Generic.HashSet`1::Enumerator<T>, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioManager
class CORDL_TYPE AudioManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ActiveCamera, put=set_ActiveCamera)) ::UnityW<::UnityEngine::Camera>  ActiveCamera;

 __declspec(property(get=get_AudioBasicReverb, put=set_AudioBasicReverb)) ::UnityW<::GlobalNamespace::AudioBasicReverb>  AudioBasicReverb;

 __declspec(property(get=get_AudioClock, put=set_AudioClock)) ::GlobalNamespace::AudioClock*  AudioClock;

 __declspec(property(get=get_AudioConfig, put=set_AudioConfig)) ::UnityW<::GlobalNamespace::AudioConfig>  AudioConfig;

 __declspec(property(get=get_AudioDynamicReverb, put=set_AudioDynamicReverb)) ::UnityW<::GlobalNamespace::AudioDynamicReverb>  AudioDynamicReverb;

 __declspec(property(get=get_AudioGUI, put=set_AudioGUI)) ::UnityW<::GlobalNamespace::AudioGUI>  AudioGUI;

 __declspec(property(get=get_AudioGUI3DDebugText, put=set_AudioGUI3DDebugText)) ::GlobalNamespace::AudioGUI3DDebugText*  AudioGUI3DDebugText;

 __declspec(property(get=get_AudioLogger, put=set_AudioLogger)) ::GlobalNamespace::AudioLogger*  AudioLogger;

 __declspec(property(get=get_AudioOcclusionManager, put=set_AudioOcclusionManager)) ::UnityW<::GlobalNamespace::AudioOcclusionManager>  AudioOcclusionManager;

 __declspec(property(get=get_AudioPool, put=set_AudioPool)) ::UnityW<::GlobalNamespace::AudioPool>  AudioPool;

 __declspec(property(get=get_AudioReferenceManager, put=set_AudioReferenceManager)) ::GlobalNamespace::AudioReferenceManager*  AudioReferenceManager;

 __declspec(property(get=get_CameraCenterRayFloorIntersect)) ::UnityEngine::Vector3  CameraCenterRayFloorIntersect;

 __declspec(property(get=get_DSPTimeMoved)) bool  DSPTimeMoved;

 __declspec(property(get=get_DefaultRTPCXProvider, put=set_DefaultRTPCXProvider)) ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  DefaultRTPCXProvider;

 __declspec(property(get=get_EnvironmentVolume, put=set_EnvironmentVolume)) ::GlobalNamespace::AudioVolume*  EnvironmentVolume;

 __declspec(property(get=get_FixedUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  FixedUpdateSet;

 __declspec(property(get=get_FoleyVolume, put=set_FoleyVolume)) ::GlobalNamespace::AudioVolume*  FoleyVolume;

 __declspec(property(get=get_GloablSoundBank, put=set_GloablSoundBank)) ::UnityW<::GlobalNamespace::SoundBank>  GloablSoundBank;

 __declspec(property(get=get_GlobalMuteVolume, put=set_GlobalMuteVolume)) ::GlobalNamespace::AudioVolume*  GlobalMuteVolume;

 __declspec(property(get=get_LateUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  LateUpdateSet;

 __declspec(property(get=get_ListenerController, put=set_ListenerController)) ::UnityW<::GlobalNamespace::AudioListenerController>  ListenerController;

 __declspec(property(get=get_MasterVolume, put=set_MasterVolume)) ::GlobalNamespace::AudioVolume*  MasterVolume;

 __declspec(property(get=get_MusicVolume, put=set_MusicVolume)) ::GlobalNamespace::AudioVolume*  MusicVolume;

/// @brief Field OnAudioManagerInitialized, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnAudioManagerInitialized, put=setStaticF_OnAudioManagerInitialized)) ::System::Action*  OnAudioManagerInitialized;

/// @brief Field OnCameraChanged, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCameraChanged, put=__cordl_internal_set_OnCameraChanged)) ::System::Action_1<::UnityW<::UnityEngine::Camera>>*  OnCameraChanged;

 __declspec(property(get=get_PlayerTransform, put=set_PlayerTransform)) ::UnityW<::UnityEngine::Transform>  PlayerTransform;

 __declspec(property(get=get_SFXVolume, put=set_SFXVolume)) ::GlobalNamespace::AudioVolume*  SFXVolume;

 __declspec(property(get=get_SlowUpdateChunks)) int32_t  SlowUpdateChunks;

 __declspec(property(get=get_SlowUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  SlowUpdateSet;

 __declspec(property(get=get_SlowUpdateTimer)) float_t  SlowUpdateTimer;

 __declspec(property(get=get_ToAddFixedUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ToAddFixedUpdateSet;

 __declspec(property(get=get_ToAddLateUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ToAddLateUpdateSet;

 __declspec(property(get=get_ToAddSlowUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ToAddSlowUpdateSet;

 __declspec(property(get=get_ToAddUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ToAddUpdateSet;

 __declspec(property(get=get_ToRemoveFixedUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ToRemoveFixedUpdateSet;

 __declspec(property(get=get_ToRemoveLateUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ToRemoveLateUpdateSet;

 __declspec(property(get=get_ToRemoveSlowUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ToRemoveSlowUpdateSet;

 __declspec(property(get=get_ToRemoveUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ToRemoveUpdateSet;

 __declspec(property(get=get_UIVolume, put=set_UIVolume)) ::GlobalNamespace::AudioVolume*  UIVolume;

 __declspec(property(get=get_UpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  UpdateSet;

 __declspec(property(get=get_VOVolume, put=set_VOVolume)) ::GlobalNamespace::AudioVolume*  VOVolume;

/// @brief Field <AudioBasicReverb>k__BackingField, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioBasicReverb_k__BackingField, put=__cordl_internal_set__AudioBasicReverb_k__BackingField)) ::UnityW<::GlobalNamespace::AudioBasicReverb>  _AudioBasicReverb_k__BackingField;

/// @brief Field <AudioClock>k__BackingField, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioClock_k__BackingField, put=__cordl_internal_set__AudioClock_k__BackingField)) ::GlobalNamespace::AudioClock*  _AudioClock_k__BackingField;

/// @brief Field <AudioConfig>k__BackingField, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioConfig_k__BackingField, put=__cordl_internal_set__AudioConfig_k__BackingField)) ::UnityW<::GlobalNamespace::AudioConfig>  _AudioConfig_k__BackingField;

/// @brief Field <AudioDynamicReverb>k__BackingField, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioDynamicReverb_k__BackingField, put=__cordl_internal_set__AudioDynamicReverb_k__BackingField)) ::UnityW<::GlobalNamespace::AudioDynamicReverb>  _AudioDynamicReverb_k__BackingField;

/// @brief Field <AudioGUI3DDebugText>k__BackingField, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioGUI3DDebugText_k__BackingField, put=__cordl_internal_set__AudioGUI3DDebugText_k__BackingField)) ::GlobalNamespace::AudioGUI3DDebugText*  _AudioGUI3DDebugText_k__BackingField;

/// @brief Field <AudioGUI>k__BackingField, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioGUI_k__BackingField, put=__cordl_internal_set__AudioGUI_k__BackingField)) ::UnityW<::GlobalNamespace::AudioGUI>  _AudioGUI_k__BackingField;

/// @brief Field <AudioLogger>k__BackingField, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioLogger_k__BackingField, put=__cordl_internal_set__AudioLogger_k__BackingField)) ::GlobalNamespace::AudioLogger*  _AudioLogger_k__BackingField;

/// @brief Field <AudioOcclusionManager>k__BackingField, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioOcclusionManager_k__BackingField, put=__cordl_internal_set__AudioOcclusionManager_k__BackingField)) ::UnityW<::GlobalNamespace::AudioOcclusionManager>  _AudioOcclusionManager_k__BackingField;

/// @brief Field <AudioPool>k__BackingField, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioPool_k__BackingField, put=__cordl_internal_set__AudioPool_k__BackingField)) ::UnityW<::GlobalNamespace::AudioPool>  _AudioPool_k__BackingField;

/// @brief Field <AudioReferenceManager>k__BackingField, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__AudioReferenceManager_k__BackingField, put=__cordl_internal_set__AudioReferenceManager_k__BackingField)) ::GlobalNamespace::AudioReferenceManager*  _AudioReferenceManager_k__BackingField;

/// @brief Field <DefaultRTPCXProvider>k__BackingField, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultRTPCXProvider_k__BackingField, put=__cordl_internal_set__DefaultRTPCXProvider_k__BackingField)) ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  _DefaultRTPCXProvider_k__BackingField;

/// @brief Field <EnvironmentVolume>k__BackingField, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__EnvironmentVolume_k__BackingField, put=__cordl_internal_set__EnvironmentVolume_k__BackingField)) ::GlobalNamespace::AudioVolume*  _EnvironmentVolume_k__BackingField;

/// @brief Field <FoleyVolume>k__BackingField, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__FoleyVolume_k__BackingField, put=__cordl_internal_set__FoleyVolume_k__BackingField)) ::GlobalNamespace::AudioVolume*  _FoleyVolume_k__BackingField;

/// @brief Field <GloablSoundBank>k__BackingField, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__GloablSoundBank_k__BackingField, put=__cordl_internal_set__GloablSoundBank_k__BackingField)) ::UnityW<::GlobalNamespace::SoundBank>  _GloablSoundBank_k__BackingField;

/// @brief Field <GlobalMuteVolume>k__BackingField, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__GlobalMuteVolume_k__BackingField, put=__cordl_internal_set__GlobalMuteVolume_k__BackingField)) ::GlobalNamespace::AudioVolume*  _GlobalMuteVolume_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::AudioManager>  _Instance_k__BackingField;

/// @brief Field <ListenerController>k__BackingField, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__ListenerController_k__BackingField, put=__cordl_internal_set__ListenerController_k__BackingField)) ::UnityW<::GlobalNamespace::AudioListenerController>  _ListenerController_k__BackingField;

/// @brief Field <MasterVolume>k__BackingField, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__MasterVolume_k__BackingField, put=__cordl_internal_set__MasterVolume_k__BackingField)) ::GlobalNamespace::AudioVolume*  _MasterVolume_k__BackingField;

/// @brief Field <MusicVolume>k__BackingField, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__MusicVolume_k__BackingField, put=__cordl_internal_set__MusicVolume_k__BackingField)) ::GlobalNamespace::AudioVolume*  _MusicVolume_k__BackingField;

/// @brief Field <PlayerTransform>k__BackingField, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayerTransform_k__BackingField, put=__cordl_internal_set__PlayerTransform_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _PlayerTransform_k__BackingField;

/// @brief Field <SFXVolume>k__BackingField, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__SFXVolume_k__BackingField, put=__cordl_internal_set__SFXVolume_k__BackingField)) ::GlobalNamespace::AudioVolume*  _SFXVolume_k__BackingField;

/// @brief Field <TempVolumeList>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__TempVolumeList_k__BackingField, put=setStaticF__TempVolumeList_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  _TempVolumeList_k__BackingField;

/// @brief Field <UIVolume>k__BackingField, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__UIVolume_k__BackingField, put=__cordl_internal_set__UIVolume_k__BackingField)) ::GlobalNamespace::AudioVolume*  _UIVolume_k__BackingField;

/// @brief Field <VOVolume>k__BackingField, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__VOVolume_k__BackingField, put=__cordl_internal_set__VOVolume_k__BackingField)) ::GlobalNamespace::AudioVolume*  _VOVolume_k__BackingField;

/// @brief Field _activeCamera, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeCamera, put=__cordl_internal_set__activeCamera)) ::UnityW<::UnityEngine::Camera>  _activeCamera;

/// @brief Field _cachedListenerPos, offset 0x1c0, size 0xc 
 __declspec(property(get=__cordl_internal_get__cachedListenerPos, put=__cordl_internal_set__cachedListenerPos)) ::UnityEngine::Vector3  _cachedListenerPos;

/// @brief Field _cameraCenterRayFloorIntersect, offset 0x1e0, size 0xc 
 __declspec(property(get=__cordl_internal_get__cameraCenterRayFloorIntersect, put=__cordl_internal_set__cameraCenterRayFloorIntersect)) ::UnityEngine::Vector3  _cameraCenterRayFloorIntersect;

/// @brief Field _fixedUpdateSet, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__fixedUpdateSet, put=__cordl_internal_set__fixedUpdateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _fixedUpdateSet;

/// @brief Field _lastDSPTime, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastDSPTime, put=__cordl_internal_set__lastDSPTime)) double_t  _lastDSPTime;

/// @brief Field _lastDSPTimeCacheRealTime, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastDSPTimeCacheRealTime, put=__cordl_internal_set__lastDSPTimeCacheRealTime)) float_t  _lastDSPTimeCacheRealTime;

/// @brief Field _lateUpdateSet, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__lateUpdateSet, put=__cordl_internal_set__lateUpdateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _lateUpdateSet;

/// @brief Field _outOfFocusPausedASCs, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__outOfFocusPausedASCs, put=__cordl_internal_set__outOfFocusPausedASCs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _outOfFocusPausedASCs;

/// @brief Field _prevSlowUpdateTime, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevSlowUpdateTime, put=__cordl_internal_set__prevSlowUpdateTime)) float_t  _prevSlowUpdateTime;

/// @brief Field _readonlyFixedUpdateSet, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyFixedUpdateSet, put=__cordl_internal_set__readonlyFixedUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlyFixedUpdateSet;

/// @brief Field _readonlyLateUpdateSet, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyLateUpdateSet, put=__cordl_internal_set__readonlyLateUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlyLateUpdateSet;

/// @brief Field _readonlySlowUpdateSet, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlySlowUpdateSet, put=__cordl_internal_set__readonlySlowUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlySlowUpdateSet;

/// @brief Field _readonlyToAddFixedUpdateSet, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyToAddFixedUpdateSet, put=__cordl_internal_set__readonlyToAddFixedUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlyToAddFixedUpdateSet;

/// @brief Field _readonlyToAddLateUpdateSet, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyToAddLateUpdateSet, put=__cordl_internal_set__readonlyToAddLateUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlyToAddLateUpdateSet;

/// @brief Field _readonlyToAddSlowUpdateSet, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyToAddSlowUpdateSet, put=__cordl_internal_set__readonlyToAddSlowUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlyToAddSlowUpdateSet;

/// @brief Field _readonlyToAddUpdateSet, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyToAddUpdateSet, put=__cordl_internal_set__readonlyToAddUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlyToAddUpdateSet;

/// @brief Field _readonlyToRemoveFixedUpdateSet, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyToRemoveFixedUpdateSet, put=__cordl_internal_set__readonlyToRemoveFixedUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlyToRemoveFixedUpdateSet;

/// @brief Field _readonlyToRemoveLateUpdateSet, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyToRemoveLateUpdateSet, put=__cordl_internal_set__readonlyToRemoveLateUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlyToRemoveLateUpdateSet;

/// @brief Field _readonlyToRemoveSlowUpdateSet, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyToRemoveSlowUpdateSet, put=__cordl_internal_set__readonlyToRemoveSlowUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlyToRemoveSlowUpdateSet;

/// @brief Field _readonlyToRemoveUpdateSet, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyToRemoveUpdateSet, put=__cordl_internal_set__readonlyToRemoveUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlyToRemoveUpdateSet;

/// @brief Field _readonlyUpdateSet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyUpdateSet, put=__cordl_internal_set__readonlyUpdateSet)) ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _readonlyUpdateSet;

/// @brief Field _slowUpdateChuncks, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get__slowUpdateChuncks, put=__cordl_internal_set__slowUpdateChuncks)) int32_t  _slowUpdateChuncks;

/// @brief Field _slowUpdateDelta, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get__slowUpdateDelta, put=__cordl_internal_set__slowUpdateDelta)) float_t  _slowUpdateDelta;

/// @brief Field _slowUpdateEnumerator, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get__slowUpdateEnumerator, put=__cordl_internal_set__slowUpdateEnumerator)) ::System::Collections::Generic::HashSet_1_Enumerator<::GlobalNamespace::IAudioBehaviour*>  _slowUpdateEnumerator;

/// @brief Field _slowUpdateIterations, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__slowUpdateIterations, put=__cordl_internal_set__slowUpdateIterations)) int32_t  _slowUpdateIterations;

/// @brief Field _slowUpdateSet, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__slowUpdateSet, put=__cordl_internal_set__slowUpdateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _slowUpdateSet;

/// @brief Field _slowUpdateTimer, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get__slowUpdateTimer, put=__cordl_internal_set__slowUpdateTimer)) float_t  _slowUpdateTimer;

/// @brief Field _toAddFixedUpdateSet, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__toAddFixedUpdateSet, put=__cordl_internal_set__toAddFixedUpdateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _toAddFixedUpdateSet;

/// @brief Field _toAddLateUpdateSet, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__toAddLateUpdateSet, put=__cordl_internal_set__toAddLateUpdateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _toAddLateUpdateSet;

/// @brief Field _toAddSlowUpdateSet, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__toAddSlowUpdateSet, put=__cordl_internal_set__toAddSlowUpdateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _toAddSlowUpdateSet;

/// @brief Field _toAddUpdateSet, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__toAddUpdateSet, put=__cordl_internal_set__toAddUpdateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _toAddUpdateSet;

/// @brief Field _toRemoveFixedUpdateSet, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__toRemoveFixedUpdateSet, put=__cordl_internal_set__toRemoveFixedUpdateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _toRemoveFixedUpdateSet;

/// @brief Field _toRemoveLateUpdateSet, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__toRemoveLateUpdateSet, put=__cordl_internal_set__toRemoveLateUpdateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _toRemoveLateUpdateSet;

/// @brief Field _toRemoveSlowUpdateSet, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__toRemoveSlowUpdateSet, put=__cordl_internal_set__toRemoveSlowUpdateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _toRemoveSlowUpdateSet;

/// @brief Field _toRemoveUpdateSet, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__toRemoveUpdateSet, put=__cordl_internal_set__toRemoveUpdateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _toRemoveUpdateSet;

/// @brief Field _updateSet, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__updateSet, put=__cordl_internal_set__updateSet)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  _updateSet;

/// @brief Method ChangeAudioSettingsVolume, addr 0x18047ce10, size 0x210, virtual false, abstract: false, final false
static inline void ChangeAudioSettingsVolume(::GlobalNamespace::AudioSettingsGroupType  type, float_t  vol) ;

/// @brief Method ChangeSpeakerMode, addr 0x18047d020, size 0xa0, virtual false, abstract: false, final false
inline void ChangeSpeakerMode(::UnityEngine::AudioSpeakerMode  speakerMode) ;

/// @brief Method ClearAllSets, addr 0x18047d0c0, size 0x100, virtual false, abstract: false, final false
inline void ClearAllSets() ;

/// @brief Method DeregisterBehaviour, addr 0x18047d1c0, size 0x3c0, virtual false, abstract: false, final false
static inline void DeregisterBehaviour(::GlobalNamespace::AudioUpdateType  type, ::GlobalNamespace::IAudioBehaviour*  behaviour) ;

/// @brief Method FixedUpdate, addr 0x18047d580, size 0x2f0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetAudioSettingsVolume, addr 0x18047d870, size 0x1a0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AudioVolume* GetAudioSettingsVolume(::GlobalNamespace::AudioSettingsGroupType  type) ;

/// @brief Method Initialize, addr 0x18047da10, size 0x1250, virtual false, abstract: false, final false
static inline void Initialize(::GlobalNamespace::AudioConfig*  config) ;

/// @brief Method KillAllSounds, addr 0x18047ec60, size 0x280, virtual false, abstract: false, final false
inline void KillAllSounds() ;

/// @brief Method LateUpdate, addr 0x18047eee0, size 0x6b0, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method Log, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void Log(::StringW  text, ::GlobalNamespace::AudioAsset*  asset, ::UnityEngine::Object*  obj, bool  stackTrace, ::UnityEngine::Color  background) ;

static inline ::GlobalNamespace::AudioManager* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x18047f590, size 0x60, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OnAudioDeviceChange, addr 0x18047f5f0, size 0x300, virtual false, abstract: false, final false
static inline void OnAudioDeviceChange(bool  changed) ;

/// @brief Method OnDestroy, addr 0x18047f8f0, size 0x170, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEditorApplicationFocus, addr 0x18047fa60, size 0x50, virtual false, abstract: false, final false
inline void OnEditorApplicationFocus(bool  focus) ;

/// @brief Method OnFocusChange, addr 0x18047fab0, size 0x2c0, virtual false, abstract: false, final false
inline void OnFocusChange(bool  focus) ;

/// @brief Method OnMovingTooFast, addr 0x18047fd70, size 0x80, virtual false, abstract: false, final false
inline void OnMovingTooFast(::UnityEngine::Vector3  newPos) ;

/// @brief Method Play, addr 0x18047fdf0, size 0xa80, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::AudioSourceController> Play(::GlobalNamespace::SoundCue*  cue, ::UnityEngine::Vector3  worldPos, ::UnityEngine::Object*  owner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, bool  rtpc, ::UnityEngine::Transform*  followTransform, double_t  delayOverride, float_t  fadeInOverride, ::UnityEngine::AudioClip*  clipOverride, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  volumes, ::GlobalNamespace::VoiceLimitBehaviorType  voiceLimitBehavior) ;

/// @brief Method RegisterBehaviour, addr 0x180480870, size 0x3c0, virtual false, abstract: false, final false
static inline void RegisterBehaviour(::GlobalNamespace::AudioUpdateType  type, ::GlobalNamespace::IAudioBehaviour*  behaviour) ;

/// @brief Method SlowUpdate, addr 0x180480c30, size 0x350, virtual false, abstract: false, final false
inline void SlowUpdate(int32_t  iterationOverride) ;

/// @brief Method Update, addr 0x180480f80, size 0x380, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Camera>>* const& __cordl_internal_get_OnCameraChanged() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Camera>>*& __cordl_internal_get_OnCameraChanged() ;

constexpr ::UnityW<::GlobalNamespace::AudioBasicReverb> const& __cordl_internal_get__AudioBasicReverb_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioBasicReverb>& __cordl_internal_get__AudioBasicReverb_k__BackingField() ;

constexpr ::GlobalNamespace::AudioClock* const& __cordl_internal_get__AudioClock_k__BackingField() const;

constexpr ::GlobalNamespace::AudioClock*& __cordl_internal_get__AudioClock_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioConfig> const& __cordl_internal_get__AudioConfig_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioConfig>& __cordl_internal_get__AudioConfig_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb> const& __cordl_internal_get__AudioDynamicReverb_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb>& __cordl_internal_get__AudioDynamicReverb_k__BackingField() ;

constexpr ::GlobalNamespace::AudioGUI3DDebugText* const& __cordl_internal_get__AudioGUI3DDebugText_k__BackingField() const;

constexpr ::GlobalNamespace::AudioGUI3DDebugText*& __cordl_internal_get__AudioGUI3DDebugText_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioGUI> const& __cordl_internal_get__AudioGUI_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioGUI>& __cordl_internal_get__AudioGUI_k__BackingField() ;

constexpr ::GlobalNamespace::AudioLogger* const& __cordl_internal_get__AudioLogger_k__BackingField() const;

constexpr ::GlobalNamespace::AudioLogger*& __cordl_internal_get__AudioLogger_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionManager> const& __cordl_internal_get__AudioOcclusionManager_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionManager>& __cordl_internal_get__AudioOcclusionManager_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioPool> const& __cordl_internal_get__AudioPool_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioPool>& __cordl_internal_get__AudioPool_k__BackingField() ;

constexpr ::GlobalNamespace::AudioReferenceManager* const& __cordl_internal_get__AudioReferenceManager_k__BackingField() const;

constexpr ::GlobalNamespace::AudioReferenceManager*& __cordl_internal_get__AudioReferenceManager_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& __cordl_internal_get__DefaultRTPCXProvider_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& __cordl_internal_get__DefaultRTPCXProvider_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__EnvironmentVolume_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__EnvironmentVolume_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__FoleyVolume_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__FoleyVolume_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::SoundBank> const& __cordl_internal_get__GloablSoundBank_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::SoundBank>& __cordl_internal_get__GloablSoundBank_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__GlobalMuteVolume_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__GlobalMuteVolume_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioListenerController> const& __cordl_internal_get__ListenerController_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::AudioListenerController>& __cordl_internal_get__ListenerController_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__MasterVolume_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__MasterVolume_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__MusicVolume_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__MusicVolume_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__PlayerTransform_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__PlayerTransform_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__SFXVolume_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__SFXVolume_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__UIVolume_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__UIVolume_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__VOVolume_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__VOVolume_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__activeCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__activeCamera() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cachedListenerPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__cachedListenerPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cameraCenterRayFloorIntersect() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__cameraCenterRayFloorIntersect() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__fixedUpdateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__fixedUpdateSet() ;

constexpr double_t const& __cordl_internal_get__lastDSPTime() const;

constexpr double_t& __cordl_internal_get__lastDSPTime() ;

constexpr float_t const& __cordl_internal_get__lastDSPTimeCacheRealTime() const;

constexpr float_t& __cordl_internal_get__lastDSPTimeCacheRealTime() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__lateUpdateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__lateUpdateSet() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__outOfFocusPausedASCs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__outOfFocusPausedASCs() ;

constexpr float_t const& __cordl_internal_get__prevSlowUpdateTime() const;

constexpr float_t& __cordl_internal_get__prevSlowUpdateTime() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlyFixedUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlyFixedUpdateSet() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlyLateUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlyLateUpdateSet() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlySlowUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlySlowUpdateSet() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlyToAddFixedUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlyToAddFixedUpdateSet() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlyToAddLateUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlyToAddLateUpdateSet() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlyToAddSlowUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlyToAddSlowUpdateSet() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlyToAddUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlyToAddUpdateSet() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlyToRemoveFixedUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlyToRemoveFixedUpdateSet() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlyToRemoveLateUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlyToRemoveLateUpdateSet() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlyToRemoveSlowUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlyToRemoveSlowUpdateSet() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlyToRemoveUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlyToRemoveUpdateSet() ;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__readonlyUpdateSet() const;

constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__readonlyUpdateSet() ;

constexpr int32_t const& __cordl_internal_get__slowUpdateChuncks() const;

constexpr int32_t& __cordl_internal_get__slowUpdateChuncks() ;

constexpr float_t const& __cordl_internal_get__slowUpdateDelta() const;

constexpr float_t& __cordl_internal_get__slowUpdateDelta() ;

constexpr ::System::Collections::Generic::HashSet_1_Enumerator<::GlobalNamespace::IAudioBehaviour*> const& __cordl_internal_get__slowUpdateEnumerator() const;

constexpr ::System::Collections::Generic::HashSet_1_Enumerator<::GlobalNamespace::IAudioBehaviour*>& __cordl_internal_get__slowUpdateEnumerator() ;

constexpr int32_t const& __cordl_internal_get__slowUpdateIterations() const;

constexpr int32_t& __cordl_internal_get__slowUpdateIterations() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__slowUpdateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__slowUpdateSet() ;

constexpr float_t const& __cordl_internal_get__slowUpdateTimer() const;

constexpr float_t& __cordl_internal_get__slowUpdateTimer() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__toAddFixedUpdateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__toAddFixedUpdateSet() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__toAddLateUpdateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__toAddLateUpdateSet() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__toAddSlowUpdateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__toAddSlowUpdateSet() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__toAddUpdateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__toAddUpdateSet() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__toRemoveFixedUpdateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__toRemoveFixedUpdateSet() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__toRemoveLateUpdateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__toRemoveLateUpdateSet() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__toRemoveSlowUpdateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__toRemoveSlowUpdateSet() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__toRemoveUpdateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__toRemoveUpdateSet() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& __cordl_internal_get__updateSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& __cordl_internal_get__updateSet() ;

constexpr void __cordl_internal_set_OnCameraChanged(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value) ;

constexpr void __cordl_internal_set__AudioBasicReverb_k__BackingField(::UnityW<::GlobalNamespace::AudioBasicReverb>  value) ;

constexpr void __cordl_internal_set__AudioClock_k__BackingField(::GlobalNamespace::AudioClock*  value) ;

constexpr void __cordl_internal_set__AudioConfig_k__BackingField(::UnityW<::GlobalNamespace::AudioConfig>  value) ;

constexpr void __cordl_internal_set__AudioDynamicReverb_k__BackingField(::UnityW<::GlobalNamespace::AudioDynamicReverb>  value) ;

constexpr void __cordl_internal_set__AudioGUI3DDebugText_k__BackingField(::GlobalNamespace::AudioGUI3DDebugText*  value) ;

constexpr void __cordl_internal_set__AudioGUI_k__BackingField(::UnityW<::GlobalNamespace::AudioGUI>  value) ;

constexpr void __cordl_internal_set__AudioLogger_k__BackingField(::GlobalNamespace::AudioLogger*  value) ;

constexpr void __cordl_internal_set__AudioOcclusionManager_k__BackingField(::UnityW<::GlobalNamespace::AudioOcclusionManager>  value) ;

constexpr void __cordl_internal_set__AudioPool_k__BackingField(::UnityW<::GlobalNamespace::AudioPool>  value) ;

constexpr void __cordl_internal_set__AudioReferenceManager_k__BackingField(::GlobalNamespace::AudioReferenceManager*  value) ;

constexpr void __cordl_internal_set__DefaultRTPCXProvider_k__BackingField(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value) ;

constexpr void __cordl_internal_set__EnvironmentVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__FoleyVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__GloablSoundBank_k__BackingField(::UnityW<::GlobalNamespace::SoundBank>  value) ;

constexpr void __cordl_internal_set__GlobalMuteVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__ListenerController_k__BackingField(::UnityW<::GlobalNamespace::AudioListenerController>  value) ;

constexpr void __cordl_internal_set__MasterVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__MusicVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__PlayerTransform_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__SFXVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__UIVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__VOVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__activeCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__cachedListenerPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__cameraCenterRayFloorIntersect(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__fixedUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__lastDSPTime(double_t  value) ;

constexpr void __cordl_internal_set__lastDSPTimeCacheRealTime(float_t  value) ;

constexpr void __cordl_internal_set__lateUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__outOfFocusPausedASCs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__prevSlowUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set__readonlyFixedUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__readonlyLateUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__readonlySlowUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__readonlyToAddFixedUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__readonlyToAddLateUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__readonlyToAddSlowUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__readonlyToAddUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__readonlyToRemoveFixedUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__readonlyToRemoveLateUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__readonlyToRemoveSlowUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__readonlyToRemoveUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__readonlyUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__slowUpdateChuncks(int32_t  value) ;

constexpr void __cordl_internal_set__slowUpdateDelta(float_t  value) ;

constexpr void __cordl_internal_set__slowUpdateEnumerator(::System::Collections::Generic::HashSet_1_Enumerator<::GlobalNamespace::IAudioBehaviour*>  value) ;

constexpr void __cordl_internal_set__slowUpdateIterations(int32_t  value) ;

constexpr void __cordl_internal_set__slowUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__slowUpdateTimer(float_t  value) ;

constexpr void __cordl_internal_set__toAddFixedUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__toAddLateUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__toAddSlowUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__toAddUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__toRemoveFixedUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__toRemoveLateUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__toRemoveSlowUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__toRemoveUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

constexpr void __cordl_internal_set__updateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value) ;

/// @brief Method .ctor, addr 0x180481360, size 0x450, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnAudioManagerInitialized, addr 0x1804817b0, size 0xb0, virtual false, abstract: false, final false
static inline void add_OnAudioManagerInitialized(::System::Action*  value) ;

/// @brief Method add_OnCameraChanged, addr 0x180481860, size 0xa0, virtual false, abstract: false, final false
inline void add_OnCameraChanged(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value) ;

static inline ::System::Action* getStaticF_OnAudioManagerInitialized() ;

static inline ::UnityW<::GlobalNamespace::AudioManager> getStaticF__Instance_k__BackingField() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* getStaticF__TempVolumeList_k__BackingField() ;

/// @brief Method get_ActiveCamera, addr 0x180481900, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_ActiveCamera() ;

/// @brief Method get_AudioBasicReverb, addr 0x180474c30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioBasicReverb> get_AudioBasicReverb() ;

/// @brief Method get_AudioClock, addr 0x180337110, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioClock* get_AudioClock() ;

/// @brief Method get_AudioConfig, addr 0x1803370e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioConfig> get_AudioConfig() ;

/// @brief Method get_AudioDynamicReverb, addr 0x1803370f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioDynamicReverb> get_AudioDynamicReverb() ;

/// @brief Method get_AudioGUI, addr 0x1803459e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioGUI> get_AudioGUI() ;

/// @brief Method get_AudioGUI3DDebugText, addr 0x180481940, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioGUI3DDebugText* get_AudioGUI3DDebugText() ;

/// @brief Method get_AudioLogger, addr 0x180474c10, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioLogger* get_AudioLogger() ;

/// @brief Method get_AudioOcclusionManager, addr 0x180371830, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioOcclusionManager> get_AudioOcclusionManager() ;

/// @brief Method get_AudioPool, addr 0x1803370d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioPool> get_AudioPool() ;

/// @brief Method get_AudioReferenceManager, addr 0x1803370b0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioReferenceManager* get_AudioReferenceManager() ;

/// @brief Method get_CameraCenterRayFloorIntersect, addr 0x180481950, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CameraCenterRayFloorIntersect() ;

/// @brief Method get_DSPTimeMoved, addr 0x1804819f0, size 0x30, virtual false, abstract: false, final false
inline bool get_DSPTimeMoved() ;

/// @brief Method get_DefaultRTPCXProvider, addr 0x180337120, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioRTPCXProvider> get_DefaultRTPCXProvider() ;

/// @brief Method get_EnvironmentVolume, addr 0x180345c00, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_EnvironmentVolume() ;

/// @brief Method get_FixedUpdateSet, addr 0x180481a20, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_FixedUpdateSet() ;

/// @brief Method get_FoleyVolume, addr 0x180345bb0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_FoleyVolume() ;

/// @brief Method get_GloablSoundBank, addr 0x180474c20, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SoundBank> get_GloablSoundBank() ;

/// @brief Method get_GlobalMuteVolume, addr 0x180345c20, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_GlobalMuteVolume() ;

/// @brief Method get_Instance, addr 0x180316150, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::AudioManager> get_Instance() ;

/// @brief Method get_LateUpdateSet, addr 0x180481a80, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_LateUpdateSet() ;

/// @brief Method get_ListenerController, addr 0x1803370c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioListenerController> get_ListenerController() ;

/// @brief Method get_ListenerPosition, addr 0x180481ae0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_ListenerPosition() ;

/// @brief Method get_MasterVolume, addr 0x180481ba0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_MasterVolume() ;

/// @brief Method get_MusicVolume, addr 0x180481bb0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_MusicVolume() ;

/// @brief Method get_PlayerTransform, addr 0x180481bc0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_PlayerTransform() ;

/// @brief Method get_SFXVolume, addr 0x180481bd0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_SFXVolume() ;

/// @brief Method get_SlowUpdateChunks, addr 0x180481be0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_SlowUpdateChunks() ;

/// @brief Method get_SlowUpdateSet, addr 0x180481bf0, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_SlowUpdateSet() ;

/// @brief Method get_SlowUpdateTimer, addr 0x180481c50, size 0x10, virtual false, abstract: false, final false
inline float_t get_SlowUpdateTimer() ;

/// @brief Method get_TempVolumeList, addr 0x180329d80, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* get_TempVolumeList() ;

/// @brief Method get_ToAddFixedUpdateSet, addr 0x180481c60, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_ToAddFixedUpdateSet() ;

/// @brief Method get_ToAddLateUpdateSet, addr 0x180481cd0, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_ToAddLateUpdateSet() ;

/// @brief Method get_ToAddSlowUpdateSet, addr 0x180481d40, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_ToAddSlowUpdateSet() ;

/// @brief Method get_ToAddUpdateSet, addr 0x180481db0, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_ToAddUpdateSet() ;

/// @brief Method get_ToRemoveFixedUpdateSet, addr 0x180481e20, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_ToRemoveFixedUpdateSet() ;

/// @brief Method get_ToRemoveLateUpdateSet, addr 0x180481e90, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_ToRemoveLateUpdateSet() ;

/// @brief Method get_ToRemoveSlowUpdateSet, addr 0x180481f00, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_ToRemoveSlowUpdateSet() ;

/// @brief Method get_ToRemoveUpdateSet, addr 0x180481f70, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_ToRemoveUpdateSet() ;

/// @brief Method get_UIVolume, addr 0x180345c10, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_UIVolume() ;

/// @brief Method get_UpdateSet, addr 0x180481fe0, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* get_UpdateSet() ;

/// @brief Method get_VOVolume, addr 0x180345c40, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_VOVolume() ;

/// @brief Method remove_OnAudioManagerInitialized, addr 0x180482040, size 0xb0, virtual false, abstract: false, final false
static inline void remove_OnAudioManagerInitialized(::System::Action*  value) ;

/// @brief Method remove_OnCameraChanged, addr 0x1804820f0, size 0xa0, virtual false, abstract: false, final false
inline void remove_OnCameraChanged(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value) ;

static inline void setStaticF_OnAudioManagerInitialized(::System::Action*  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::AudioManager>  value) ;

static inline void setStaticF__TempVolumeList_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value) ;

/// @brief Method set_ActiveCamera, addr 0x180482190, size 0x60, virtual false, abstract: false, final false
inline void set_ActiveCamera(::UnityEngine::Camera*  value) ;

/// @brief Method set_AudioBasicReverb, addr 0x180474d10, size 0x20, virtual false, abstract: false, final false
inline void set_AudioBasicReverb(::GlobalNamespace::AudioBasicReverb*  value) ;

/// @brief Method set_AudioClock, addr 0x180337210, size 0x20, virtual false, abstract: false, final false
inline void set_AudioClock(::GlobalNamespace::AudioClock*  value) ;

/// @brief Method set_AudioConfig, addr 0x1803371b0, size 0x20, virtual false, abstract: false, final false
inline void set_AudioConfig(::GlobalNamespace::AudioConfig*  value) ;

/// @brief Method set_AudioDynamicReverb, addr 0x1803371d0, size 0x20, virtual false, abstract: false, final false
inline void set_AudioDynamicReverb(::GlobalNamespace::AudioDynamicReverb*  value) ;

/// @brief Method set_AudioGUI, addr 0x180345f20, size 0x20, virtual false, abstract: false, final false
inline void set_AudioGUI(::GlobalNamespace::AudioGUI*  value) ;

/// @brief Method set_AudioGUI3DDebugText, addr 0x1804821f0, size 0x20, virtual false, abstract: false, final false
inline void set_AudioGUI3DDebugText(::GlobalNamespace::AudioGUI3DDebugText*  value) ;

/// @brief Method set_AudioLogger, addr 0x180474cd0, size 0x20, virtual false, abstract: false, final false
inline void set_AudioLogger(::GlobalNamespace::AudioLogger*  value) ;

/// @brief Method set_AudioOcclusionManager, addr 0x180482210, size 0x20, virtual false, abstract: false, final false
inline void set_AudioOcclusionManager(::GlobalNamespace::AudioOcclusionManager*  value) ;

/// @brief Method set_AudioPool, addr 0x180337190, size 0x20, virtual false, abstract: false, final false
inline void set_AudioPool(::GlobalNamespace::AudioPool*  value) ;

/// @brief Method set_AudioReferenceManager, addr 0x180337150, size 0x20, virtual false, abstract: false, final false
inline void set_AudioReferenceManager(::GlobalNamespace::AudioReferenceManager*  value) ;

/// @brief Method set_DefaultRTPCXProvider, addr 0x180337230, size 0x20, virtual false, abstract: false, final false
inline void set_DefaultRTPCXProvider(::GlobalNamespace::AudioRTPCXProvider*  value) ;

/// @brief Method set_EnvironmentVolume, addr 0x180346140, size 0x20, virtual false, abstract: false, final false
inline void set_EnvironmentVolume(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_FoleyVolume, addr 0x180346120, size 0x20, virtual false, abstract: false, final false
inline void set_FoleyVolume(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_GloablSoundBank, addr 0x180474cf0, size 0x20, virtual false, abstract: false, final false
inline void set_GloablSoundBank(::GlobalNamespace::SoundBank*  value) ;

/// @brief Method set_GlobalMuteVolume, addr 0x180346180, size 0x20, virtual false, abstract: false, final false
inline void set_GlobalMuteVolume(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_Instance, addr 0x180482230, size 0x50, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::AudioManager*  value) ;

/// @brief Method set_ListenerController, addr 0x180337170, size 0x20, virtual false, abstract: false, final false
inline void set_ListenerController(::GlobalNamespace::AudioListenerController*  value) ;

/// @brief Method set_ListenerPosition, addr 0x180482280, size 0x60, virtual false, abstract: false, final false
static inline void set_ListenerPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_MasterVolume, addr 0x1804822e0, size 0x20, virtual false, abstract: false, final false
inline void set_MasterVolume(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_MusicVolume, addr 0x180482300, size 0x20, virtual false, abstract: false, final false
inline void set_MusicVolume(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_PlayerTransform, addr 0x180482320, size 0x20, virtual false, abstract: false, final false
inline void set_PlayerTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_SFXVolume, addr 0x180482340, size 0x20, virtual false, abstract: false, final false
inline void set_SFXVolume(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_TempVolumeList, addr 0x180482360, size 0x60, virtual false, abstract: false, final false
static inline void set_TempVolumeList(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value) ;

/// @brief Method set_UIVolume, addr 0x180346160, size 0x20, virtual false, abstract: false, final false
inline void set_UIVolume(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_VOVolume, addr 0x1803461c0, size 0x20, virtual false, abstract: false, final false
inline void set_VOVolume(::GlobalNamespace::AudioVolume*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioManager(AudioManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioManager(AudioManager const& ) = delete;

/// @brief Field DSP_TIME_CACHE_FREQUENCY offset 0xffffffff size 0x4
static constexpr float_t  DSP_TIME_CACHE_FREQUENCY{static_cast<float_t>(1.0f)};

/// @brief Field SLOW_UPDATE_FREQUENCY offset 0xffffffff size 0x4
static constexpr float_t  SLOW_UPDATE_FREQUENCY{static_cast<float_t>(1.0f)};

/// @brief Field VOICE_LIMIT_FADEOUT_TIME offset 0xffffffff size 0x4
static constexpr float_t  VOICE_LIMIT_FADEOUT_TIME{static_cast<float_t>(0.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17526};

/// @brief Field _updateSet, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____updateSet;

/// @brief Field _readonlyUpdateSet, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlyUpdateSet;

/// @brief Field _fixedUpdateSet, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____fixedUpdateSet;

/// @brief Field _readonlyFixedUpdateSet, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlyFixedUpdateSet;

/// @brief Field _lateUpdateSet, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____lateUpdateSet;

/// @brief Field _readonlyLateUpdateSet, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlyLateUpdateSet;

/// @brief Field _slowUpdateSet, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____slowUpdateSet;

/// @brief Field _readonlySlowUpdateSet, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlySlowUpdateSet;

/// @brief Field _slowUpdateEnumerator, offset: 0x60, size: 0x18, def value: None
 ::System::Collections::Generic::HashSet_1_Enumerator<::GlobalNamespace::IAudioBehaviour*>  ____slowUpdateEnumerator;

/// @brief Field _slowUpdateIterations, offset: 0x78, size: 0x4, def value: None
 int32_t  ____slowUpdateIterations;

/// @brief Field _toRemoveUpdateSet, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____toRemoveUpdateSet;

/// @brief Field _readonlyToRemoveUpdateSet, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlyToRemoveUpdateSet;

/// @brief Field _toRemoveFixedUpdateSet, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____toRemoveFixedUpdateSet;

/// @brief Field _readonlyToRemoveFixedUpdateSet, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlyToRemoveFixedUpdateSet;

/// @brief Field _toRemoveLateUpdateSet, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____toRemoveLateUpdateSet;

/// @brief Field _readonlyToRemoveLateUpdateSet, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlyToRemoveLateUpdateSet;

/// @brief Field _toRemoveSlowUpdateSet, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____toRemoveSlowUpdateSet;

/// @brief Field _readonlyToRemoveSlowUpdateSet, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlyToRemoveSlowUpdateSet;

/// @brief Field _toAddUpdateSet, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____toAddUpdateSet;

/// @brief Field _readonlyToAddUpdateSet, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlyToAddUpdateSet;

/// @brief Field _toAddFixedUpdateSet, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____toAddFixedUpdateSet;

/// @brief Field _readonlyToAddFixedUpdateSet, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlyToAddFixedUpdateSet;

/// @brief Field _toAddLateUpdateSet, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____toAddLateUpdateSet;

/// @brief Field _readonlyToAddLateUpdateSet, offset: 0xe8, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlyToAddLateUpdateSet;

/// @brief Field _toAddSlowUpdateSet, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____toAddSlowUpdateSet;

/// @brief Field _readonlyToAddSlowUpdateSet, offset: 0xf8, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  ____readonlyToAddSlowUpdateSet;

/// @brief Field _outOfFocusPausedASCs, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____outOfFocusPausedASCs;

/// @brief Field <ListenerController>k__BackingField, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioListenerController>  ____ListenerController_k__BackingField;

/// @brief Field <AudioPool>k__BackingField, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioPool>  ____AudioPool_k__BackingField;

/// @brief Field <AudioConfig>k__BackingField, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioConfig>  ____AudioConfig_k__BackingField;

/// @brief Field <DefaultRTPCXProvider>k__BackingField, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  ____DefaultRTPCXProvider_k__BackingField;

/// @brief Field <AudioClock>k__BackingField, offset: 0x128, size: 0x8, def value: None
 ::GlobalNamespace::AudioClock*  ____AudioClock_k__BackingField;

/// @brief Field <AudioReferenceManager>k__BackingField, offset: 0x130, size: 0x8, def value: None
 ::GlobalNamespace::AudioReferenceManager*  ____AudioReferenceManager_k__BackingField;

/// @brief Field <AudioDynamicReverb>k__BackingField, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioDynamicReverb>  ____AudioDynamicReverb_k__BackingField;

/// @brief Field <AudioBasicReverb>k__BackingField, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioBasicReverb>  ____AudioBasicReverb_k__BackingField;

/// @brief Field <GloablSoundBank>k__BackingField, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBank>  ____GloablSoundBank_k__BackingField;

/// @brief Field <AudioLogger>k__BackingField, offset: 0x150, size: 0x8, def value: None
 ::GlobalNamespace::AudioLogger*  ____AudioLogger_k__BackingField;

/// @brief Field <AudioOcclusionManager>k__BackingField, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioOcclusionManager>  ____AudioOcclusionManager_k__BackingField;

/// @brief Field <AudioGUI>k__BackingField, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioGUI>  ____AudioGUI_k__BackingField;

/// @brief Field <AudioGUI3DDebugText>k__BackingField, offset: 0x168, size: 0x8, def value: None
 ::GlobalNamespace::AudioGUI3DDebugText*  ____AudioGUI3DDebugText_k__BackingField;

/// @brief Field <MasterVolume>k__BackingField, offset: 0x170, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____MasterVolume_k__BackingField;

/// @brief Field <SFXVolume>k__BackingField, offset: 0x178, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____SFXVolume_k__BackingField;

/// @brief Field <MusicVolume>k__BackingField, offset: 0x180, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____MusicVolume_k__BackingField;

/// @brief Field <VOVolume>k__BackingField, offset: 0x188, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____VOVolume_k__BackingField;

/// @brief Field <UIVolume>k__BackingField, offset: 0x190, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____UIVolume_k__BackingField;

/// @brief Field <EnvironmentVolume>k__BackingField, offset: 0x198, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____EnvironmentVolume_k__BackingField;

/// @brief Field <FoleyVolume>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____FoleyVolume_k__BackingField;

/// @brief Field <GlobalMuteVolume>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____GlobalMuteVolume_k__BackingField;

/// @brief Field _prevSlowUpdateTime, offset: 0x1b0, size: 0x4, def value: None
 float_t  ____prevSlowUpdateTime;

/// @brief Field _slowUpdateDelta, offset: 0x1b4, size: 0x4, def value: None
 float_t  ____slowUpdateDelta;

/// @brief Field _slowUpdateTimer, offset: 0x1b8, size: 0x4, def value: None
 float_t  ____slowUpdateTimer;

/// @brief Field _slowUpdateChuncks, offset: 0x1bc, size: 0x4, def value: None
 int32_t  ____slowUpdateChuncks;

/// @brief Field _cachedListenerPos, offset: 0x1c0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____cachedListenerPos;

/// @brief Field _activeCamera, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____activeCamera;

/// @brief Field <PlayerTransform>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____PlayerTransform_k__BackingField;

/// @brief Field _cameraCenterRayFloorIntersect, offset: 0x1e0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____cameraCenterRayFloorIntersect;

/// @brief Field OnCameraChanged, offset: 0x1f0, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Camera>>*  ___OnCameraChanged;

/// @brief Field _lastDSPTimeCacheRealTime, offset: 0x1f8, size: 0x4, def value: None
 float_t  ____lastDSPTimeCacheRealTime;

/// @brief Field _lastDSPTime, offset: 0x200, size: 0x8, def value: None
 double_t  ____lastDSPTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioManager, ____updateSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlyUpdateSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____fixedUpdateSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlyFixedUpdateSet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____lateUpdateSet) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlyLateUpdateSet) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____slowUpdateSet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlySlowUpdateSet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____slowUpdateEnumerator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____slowUpdateIterations) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____toRemoveUpdateSet) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlyToRemoveUpdateSet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____toRemoveFixedUpdateSet) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlyToRemoveFixedUpdateSet) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____toRemoveLateUpdateSet) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlyToRemoveLateUpdateSet) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____toRemoveSlowUpdateSet) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlyToRemoveSlowUpdateSet) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____toAddUpdateSet) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlyToAddUpdateSet) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____toAddFixedUpdateSet) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlyToAddFixedUpdateSet) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____toAddLateUpdateSet) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlyToAddLateUpdateSet) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____toAddSlowUpdateSet) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____readonlyToAddSlowUpdateSet) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____outOfFocusPausedASCs) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____ListenerController_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____AudioPool_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____AudioConfig_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____DefaultRTPCXProvider_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____AudioClock_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____AudioReferenceManager_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____AudioDynamicReverb_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____AudioBasicReverb_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____GloablSoundBank_k__BackingField) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____AudioLogger_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____AudioOcclusionManager_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____AudioGUI_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____AudioGUI3DDebugText_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____MasterVolume_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____SFXVolume_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____MusicVolume_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____VOVolume_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____UIVolume_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____EnvironmentVolume_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____FoleyVolume_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____GlobalMuteVolume_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____prevSlowUpdateTime) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____slowUpdateDelta) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____slowUpdateTimer) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____slowUpdateChuncks) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____cachedListenerPos) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____activeCamera) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____PlayerTransform_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____cameraCenterRayFloorIntersect) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ___OnCameraChanged) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____lastDSPTimeCacheRealTime) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioManager, ____lastDSPTime) == 0x200, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioManager) == 0x208, "Size mismatch!");

} // namespace end def GlobalNamespace
