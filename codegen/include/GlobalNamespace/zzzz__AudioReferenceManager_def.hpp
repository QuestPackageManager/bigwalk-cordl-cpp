#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioReferenceManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReferenceManager)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class IVirtualizable;
}
namespace GlobalNamespace {
class SoundBank;
}
namespace GlobalNamespace {
struct VoiceLimitBehaviorType;
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
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioReferenceManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioReferenceManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioReferenceManager*, "", "AudioReferenceManager");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioReferenceManager
class CORDL_TYPE AudioReferenceManager : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AnyClipLoading)) bool  AnyClipLoading;

 __declspec(property(get=get_AssetPlayTimes)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>*  AssetPlayTimes;

 __declspec(property(get=get_ClipsLoaded)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  ClipsLoaded;

 __declspec(property(get=get_ClipsLoadedBySoundBanksCount)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*  ClipsLoadedBySoundBanksCount;

 __declspec(property(get=get_ClipsPlaying)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*  ClipsPlaying;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_LoadedClipIdleTimeLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>*  LoadedClipIdleTimeLookup;

 __declspec(property(get=get_LoadedSoundBanks)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*  LoadedSoundBanks;

 __declspec(property(get=get_VoicesLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>*  VoicesLookup;

/// @brief Field _anyClipLoading, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__anyClipLoading, put=__cordl_internal_set__anyClipLoading)) bool  _anyClipLoading;

/// @brief Field _assetPlayTimes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__assetPlayTimes, put=__cordl_internal_set__assetPlayTimes)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>*  _assetPlayTimes;

/// @brief Field _clipsLoaded, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__clipsLoaded, put=__cordl_internal_set__clipsLoaded)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  _clipsLoaded;

/// @brief Field _clipsLoadedBySoundBanksCount, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__clipsLoadedBySoundBanksCount, put=__cordl_internal_set__clipsLoadedBySoundBanksCount)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*  _clipsLoadedBySoundBanksCount;

/// @brief Field _clipsPlaying, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__clipsPlaying, put=__cordl_internal_set__clipsPlaying)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*  _clipsPlaying;

/// @brief Field _clipsToRemove, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__clipsToRemove, put=__cordl_internal_set__clipsToRemove)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  _clipsToRemove;

/// @brief Field _initialized, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _loadedClipIdleTimeLookup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadedClipIdleTimeLookup, put=__cordl_internal_set__loadedClipIdleTimeLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>*  _loadedClipIdleTimeLookup;

/// @brief Field _loadedSoundBanks, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadedSoundBanks, put=__cordl_internal_set__loadedSoundBanks)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*  _loadedSoundBanks;

/// @brief Field _tempSortingList, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempSortingList, put=__cordl_internal_set__tempSortingList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _tempSortingList;

/// @brief Field _toHibernate, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__toHibernate, put=__cordl_internal_set__toHibernate)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _toHibernate;

/// @brief Field _toWakeUp, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__toWakeUp, put=__cordl_internal_set__toWakeUp)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _toWakeUp;

/// @brief Field _virtualizableAssets, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__virtualizableAssets, put=__cordl_internal_set__virtualizableAssets)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*  _virtualizableAssets;

/// @brief Field _virtualizableToRemove, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__virtualizableToRemove, put=__cordl_internal_set__virtualizableToRemove)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*  _virtualizableToRemove;

/// @brief Field _voicesLookup, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__voicesLookup, put=__cordl_internal_set__voicesLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>*  _voicesLookup;

/// @brief Field unloadThreshold, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unloadThreshold, put=setStaticF_unloadThreshold)) float_t  unloadThreshold;

/// @brief Method AddClipPlaying, addr 0x18048d900, size 0xb0, virtual false, abstract: false, final false
inline void AddClipPlaying(::UnityEngine::AudioClip*  clip) ;

/// @brief Method AudioLateUpdate, addr 0x18048d9b0, size 0x9c0, virtual false, abstract: false, final false
inline void AudioLateUpdate() ;

/// @brief Method ChangeUnloadTimerThreshold, addr 0x18048e370, size 0x30, virtual false, abstract: false, final false
static inline void ChangeUnloadTimerThreshold(float_t  time) ;

/// @brief Method CheckIfClipInUse, addr 0x18048e3a0, size 0x70, virtual false, abstract: false, final false
inline bool CheckIfClipInUse(::UnityEngine::AudioClip*  clip) ;

/// @brief Method CheckIfCooldown, addr 0x18048e410, size 0xe0, virtual false, abstract: false, final false
inline bool CheckIfCooldown(::GlobalNamespace::IVirtualizable*  virtualizable, float_t  newTime) ;

/// @brief Method DecreaseClipSoundBankCount, addr 0x18048e4f0, size 0xe0, virtual false, abstract: false, final false
inline void DecreaseClipSoundBankCount(::UnityEngine::AudioClip*  clip) ;

/// @brief Method DeregisterVoice, addr 0x18048e5d0, size 0x60, virtual false, abstract: false, final false
inline void DeregisterVoice(::GlobalNamespace::AudioAsset*  asset, ::GlobalNamespace::AudioSourceController*  controller) ;

/// @brief Method GetVoiceCount, addr 0x18048e630, size 0x50, virtual false, abstract: false, final false
inline int32_t GetVoiceCount(::GlobalNamespace::AudioAsset*  asset, ::by_ref<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>  voiceSet) ;

/// @brief Method IncreaseClipSoundBankCount, addr 0x18048e680, size 0x90, virtual false, abstract: false, final false
inline void IncreaseClipSoundBankCount(::UnityEngine::AudioClip*  clip) ;

/// @brief Method Initialize, addr 0x18048e710, size 0x10, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method LoadSoundBank, addr 0x18048e720, size 0x130, virtual false, abstract: false, final false
inline void LoadSoundBank(::GlobalNamespace::SoundBank*  bank) ;

static inline ::GlobalNamespace::AudioReferenceManager* New_ctor() ;

/// @brief Method RegisterVirtualizableAsset, addr 0x18048e850, size 0x30, virtual false, abstract: false, final false
inline void RegisterVirtualizableAsset(::GlobalNamespace::IVirtualizable*  asset) ;

/// @brief Method RegisterVoice, addr 0x18048e880, size 0x100, virtual false, abstract: false, final false
inline void RegisterVoice(::GlobalNamespace::AudioAsset*  asset, ::GlobalNamespace::AudioSourceController*  controller) ;

/// @brief Method RemoveClipPlaying, addr 0x18048e980, size 0x130, virtual false, abstract: false, final false
inline void RemoveClipPlaying(::UnityEngine::AudioClip*  clip) ;

/// @brief Method SortDescendingByAttenuation, addr 0x18048eab0, size 0x110, virtual false, abstract: false, final false
static inline void SortDescendingByAttenuation(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  list) ;

/// @brief Method UnloadSoundBank, addr 0x18048ebc0, size 0x180, virtual false, abstract: false, final false
inline void UnloadSoundBank(::GlobalNamespace::SoundBank*  bank) ;

/// @brief Method VirtualizeTest, addr 0x18048ed40, size 0x230, virtual false, abstract: false, final false
inline bool VirtualizeTest(::GlobalNamespace::IVirtualizable*  virtualizable, float_t  attenuation) ;

/// @brief Method VoiceLimitingTest, addr 0x18048ef70, size 0x440, virtual false, abstract: false, final false
inline void VoiceLimitingTest(::GlobalNamespace::IVirtualizable*  virtualizable, float_t  attenuation, bool  loop, ::by_ref<bool>  getSource, ::by_ref<::GlobalNamespace::VoiceLimitBehaviorType>  outBehavior, bool  testOnly) ;

constexpr bool const& __cordl_internal_get__anyClipLoading() const;

constexpr bool& __cordl_internal_get__anyClipLoading() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>* const& __cordl_internal_get__assetPlayTimes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>*& __cordl_internal_get__assetPlayTimes() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get__clipsLoaded() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__clipsLoaded() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>* const& __cordl_internal_get__clipsLoadedBySoundBanksCount() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*& __cordl_internal_get__clipsLoadedBySoundBanksCount() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>* const& __cordl_internal_get__clipsPlaying() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*& __cordl_internal_get__clipsPlaying() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get__clipsToRemove() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__clipsToRemove() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>* const& __cordl_internal_get__loadedClipIdleTimeLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>*& __cordl_internal_get__loadedClipIdleTimeLookup() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>* const& __cordl_internal_get__loadedSoundBanks() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*& __cordl_internal_get__loadedSoundBanks() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__tempSortingList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__tempSortingList() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__toHibernate() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__toHibernate() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__toWakeUp() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__toWakeUp() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>* const& __cordl_internal_get__virtualizableAssets() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*& __cordl_internal_get__virtualizableAssets() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>* const& __cordl_internal_get__virtualizableToRemove() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*& __cordl_internal_get__virtualizableToRemove() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>* const& __cordl_internal_get__voicesLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>*& __cordl_internal_get__voicesLookup() ;

constexpr void __cordl_internal_set__anyClipLoading(bool  value) ;

constexpr void __cordl_internal_set__assetPlayTimes(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>*  value) ;

constexpr void __cordl_internal_set__clipsLoaded(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set__clipsLoadedBySoundBanksCount(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*  value) ;

constexpr void __cordl_internal_set__clipsPlaying(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*  value) ;

constexpr void __cordl_internal_set__clipsToRemove(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__loadedClipIdleTimeLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>*  value) ;

constexpr void __cordl_internal_set__loadedSoundBanks(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*  value) ;

constexpr void __cordl_internal_set__tempSortingList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__toHibernate(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__toWakeUp(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__virtualizableAssets(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*  value) ;

constexpr void __cordl_internal_set__virtualizableToRemove(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*  value) ;

constexpr void __cordl_internal_set__voicesLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>*  value) ;

/// @brief Method .ctor, addr 0x18048f3e0, size 0x270, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_unloadThreshold() ;

/// @brief Method get_AnyClipLoading, addr 0x1803cf3d0, size 0x10, virtual false, abstract: false, final false
inline bool get_AnyClipLoading() ;

/// @brief Method get_AssetPlayTimes, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>* get_AssetPlayTimes() ;

/// @brief Method get_ClipsLoaded, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* get_ClipsLoaded() ;

/// @brief Method get_ClipsLoadedBySoundBanksCount, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>* get_ClipsLoadedBySoundBanksCount() ;

/// @brief Method get_ClipsPlaying, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>* get_ClipsPlaying() ;

/// @brief Method get_Initialized, addr 0x18048f650, size 0x10, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_LoadedClipIdleTimeLookup, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>* get_LoadedClipIdleTimeLookup() ;

/// @brief Method get_LoadedSoundBanks, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>* get_LoadedSoundBanks() ;

/// @brief Method get_UnLoadThreshold, addr 0x18048f660, size 0x20, virtual false, abstract: false, final false
static inline float_t get_UnLoadThreshold() ;

/// @brief Method get_VoicesLookup, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>* get_VoicesLookup() ;

static inline void setStaticF_unloadThreshold(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReferenceManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReferenceManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReferenceManager(AudioReferenceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReferenceManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReferenceManager(AudioReferenceManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17568};

/// @brief Field _loadedSoundBanks, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*  ____loadedSoundBanks;

/// @brief Field _clipsLoadedBySoundBanksCount, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*  ____clipsLoadedBySoundBanksCount;

/// @brief Field _clipsPlaying, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*  ____clipsPlaying;

/// @brief Field _clipsLoaded, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  ____clipsLoaded;

/// @brief Field _loadedClipIdleTimeLookup, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>*  ____loadedClipIdleTimeLookup;

/// @brief Field _clipsToRemove, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  ____clipsToRemove;

/// @brief Field _voicesLookup, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>*  ____voicesLookup;

/// @brief Field _assetPlayTimes, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>*  ____assetPlayTimes;

/// @brief Field _virtualizableAssets, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*  ____virtualizableAssets;

/// @brief Field _virtualizableToRemove, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*  ____virtualizableToRemove;

/// @brief Field _tempSortingList, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____tempSortingList;

/// @brief Field _toWakeUp, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____toWakeUp;

/// @brief Field _toHibernate, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____toHibernate;

/// @brief Field _anyClipLoading, offset: 0x78, size: 0x1, def value: None
 bool  ____anyClipLoading;

/// @brief Field _initialized, offset: 0x79, size: 0x1, def value: None
 bool  ____initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____loadedSoundBanks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____clipsLoadedBySoundBanksCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____clipsPlaying) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____clipsLoaded) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____loadedClipIdleTimeLookup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____clipsToRemove) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____voicesLookup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____assetPlayTimes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____virtualizableAssets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____virtualizableToRemove) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____tempSortingList) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____toWakeUp) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____toHibernate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____anyClipLoading) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioReferenceManager, ____initialized) == 0x79, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioReferenceManager) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
