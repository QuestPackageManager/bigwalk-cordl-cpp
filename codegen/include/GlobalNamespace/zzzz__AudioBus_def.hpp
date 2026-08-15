#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioBus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioSettingsGroupType_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioBus)
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class ISoundBankable;
}
namespace GlobalNamespace {
class SoundBank;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioBus;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioBus*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioBus*, "", "AudioBus");
// Dependencies AudioAsset, AudioSettingsGroupType
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioBus
class CORDL_TYPE AudioBus : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
/// @brief Field AudioSettingsGroup, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_AudioSettingsGroup, put=__cordl_internal_set_AudioSettingsGroup)) ::GlobalNamespace::AudioSettingsGroupType  AudioSettingsGroup;

/// @brief Field BusVolume, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BusVolume, put=__cordl_internal_set_BusVolume)) ::GlobalNamespace::AudioVolume*  BusVolume;

/// @brief Field MixerGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MixerGroup, put=__cordl_internal_set_MixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  MixerGroup;

/// @brief Field S_AllMixerGroups, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_S_AllMixerGroups, put=setStaticF_S_AllMixerGroups)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>*  S_AllMixerGroups;

 __declspec(property(get=get_SoundBankReferenceCount, put=set_SoundBankReferenceCount)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*  SoundBankReferenceCount;

/// @brief Field <SoundBankReferenceCount>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__SoundBankReferenceCount_k__BackingField, put=__cordl_internal_set__SoundBankReferenceCount_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*  _SoundBankReferenceCount_k__BackingField;

/// @brief Convert operator to "::GlobalNamespace::ISoundBankable"
constexpr operator  ::GlobalNamespace::ISoundBankable*() noexcept;

static inline ::GlobalNamespace::AudioBus* New_ctor() ;

/// @brief Method OnDisable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18046fba0, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::AudioSettingsGroupType const& __cordl_internal_get_AudioSettingsGroup() const;

constexpr ::GlobalNamespace::AudioSettingsGroupType& __cordl_internal_get_AudioSettingsGroup() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get_BusVolume() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get_BusVolume() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_MixerGroup() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_MixerGroup() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>* const& __cordl_internal_get__SoundBankReferenceCount_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*& __cordl_internal_get__SoundBankReferenceCount_k__BackingField() ;

constexpr void __cordl_internal_set_AudioSettingsGroup(::GlobalNamespace::AudioSettingsGroupType  value) ;

constexpr void __cordl_internal_set_BusVolume(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set_MixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value) ;

constexpr void __cordl_internal_set__SoundBankReferenceCount_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x18046fc80, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>* getStaticF_S_AllMixerGroups() ;

/// @brief Method get_SoundBankReferenceCount, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>* get_SoundBankReferenceCount() ;

/// @brief Convert to "::GlobalNamespace::ISoundBankable"
constexpr ::GlobalNamespace::ISoundBankable* i___GlobalNamespace__ISoundBankable() noexcept;

static inline void setStaticF_S_AllMixerGroups(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>*  value) ;

/// @brief Method set_SoundBankReferenceCount, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_SoundBankReferenceCount(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioBus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioBus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioBus(AudioBus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioBus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioBus(AudioBus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17487};

/// @brief Field AudioSettingsGroup, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::AudioSettingsGroupType  ___AudioSettingsGroup;

/// @brief Field MixerGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  ___MixerGroup;

/// @brief Field BusVolume, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ___BusVolume;

/// @brief Field <SoundBankReferenceCount>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SoundBank>,int32_t>*  ____SoundBankReferenceCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioBus, ___AudioSettingsGroup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBus, ___MixerGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBus, ___BusVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioBus, ____SoundBankReferenceCount_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioBus) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
