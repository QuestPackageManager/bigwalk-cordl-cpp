#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceSoundData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AmbienceSound_def.hpp"
#include "GlobalNamespace/zzzz__ScatterFrequencyMultiplierData_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AmbienceSoundData)
namespace GlobalNamespace {
class AmbienceSound;
}
namespace GlobalNamespace {
class AudioBus;
}
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
class AudioScatterContainer;
}
namespace GlobalNamespace {
class FootstepAudioReferences;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace GlobalNamespace {
class VoltageControlledAmplifier;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class AmbienceSoundData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AmbienceSoundData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbienceSoundData*, "", "AmbienceSoundData");
// Dependencies AmbienceSound, ScatterFrequencyMultiplierData, SoundCue, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AmbienceSoundData
class CORDL_TYPE AmbienceSoundData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field AmbBedExtBus, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_AmbBedExtBus, put=__cordl_internal_set_AmbBedExtBus)) ::UnityW<::GlobalNamespace::AudioBus>  AmbBedExtBus;

/// @brief Field AmbBedVCA, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_AmbBedVCA, put=__cordl_internal_set_AmbBedVCA)) ::UnityW<::GlobalNamespace::VoltageControlledAmplifier>  AmbBedVCA;

/// @brief Field BeachCloseSounds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BeachCloseSounds, put=__cordl_internal_set_BeachCloseSounds)) ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  BeachCloseSounds;

/// @brief Field BeachFarSounds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_BeachFarSounds, put=__cordl_internal_set_BeachFarSounds)) ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  BeachFarSounds;

/// @brief Field BeachSurroundedSounds, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BeachSurroundedSounds, put=__cordl_internal_set_BeachSurroundedSounds)) ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  BeachSurroundedSounds;

/// @brief Field BeachWaveSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_BeachWaveSound, put=__cordl_internal_set_BeachWaveSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  BeachWaveSound;

/// @brief Field FootstepSoundData, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_FootstepSoundData, put=__cordl_internal_set_FootstepSoundData)) ::UnityW<::GlobalNamespace::FootstepAudioReferences>  FootstepSoundData;

/// @brief Field InteriorBedSound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteriorBedSound, put=__cordl_internal_set_InteriorBedSound)) ::UnityW<::GlobalNamespace::SoundCue>  InteriorBedSound;

/// @brief Field InteriorWindSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteriorWindSound, put=__cordl_internal_set_InteriorWindSound)) ::UnityW<::GlobalNamespace::SoundCue>  InteriorWindSound;

/// @brief Field OceanBus, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OceanBus, put=__cordl_internal_set_OceanBus)) ::UnityW<::GlobalNamespace::AudioBus>  OceanBus;

/// @brief Field OceanReflection, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OceanReflection, put=__cordl_internal_set_OceanReflection)) ::UnityW<::GlobalNamespace::SoundCue>  OceanReflection;

/// @brief Field RockyWaterSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RockyWaterSound, put=__cordl_internal_set_RockyWaterSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  RockyWaterSound;

 __declspec(property(get=get_ScatterFrequencyMultiplierLookup, put=set_ScatterFrequencyMultiplierLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*  ScatterFrequencyMultiplierLookup;

/// @brief Field ScatterFrequencyMultipliers, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScatterFrequencyMultipliers, put=__cordl_internal_set_ScatterFrequencyMultipliers)) ::ArrayW<::GlobalNamespace::ScatterFrequencyMultiplierData>  ScatterFrequencyMultipliers;

 __declspec(property(get=get_ScatterLPMinLookup, put=set_ScatterLPMinLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*  ScatterLPMinLookup;

 __declspec(property(get=get_SoundLookup, put=set_SoundLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*  SoundLookup;

/// @brief Field Sounds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sounds, put=__cordl_internal_set_Sounds)) ::ArrayW<::GlobalNamespace::AmbienceSound*>  Sounds;

/// @brief Field WindElevationSoundsHigh, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_WindElevationSoundsHigh, put=__cordl_internal_set_WindElevationSoundsHigh)) ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  WindElevationSoundsHigh;

/// @brief Field WindElevationSoundsLow, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_WindElevationSoundsLow, put=__cordl_internal_set_WindElevationSoundsLow)) ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  WindElevationSoundsLow;

/// @brief Field WindVolCompensation, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_WindVolCompensation, put=__cordl_internal_set_WindVolCompensation)) float_t  WindVolCompensation;

/// @brief Field <ScatterFrequencyMultiplierLookup>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ScatterFrequencyMultiplierLookup_k__BackingField, put=__cordl_internal_set__ScatterFrequencyMultiplierLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*  _ScatterFrequencyMultiplierLookup_k__BackingField;

/// @brief Field <ScatterLPMinLookup>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ScatterLPMinLookup_k__BackingField, put=__cordl_internal_set__ScatterLPMinLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*  _ScatterLPMinLookup_k__BackingField;

/// @brief Field <SoundLookup>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SoundLookup_k__BackingField, put=__cordl_internal_set__SoundLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*  _SoundLookup_k__BackingField;

static inline ::GlobalNamespace::AmbienceSoundData* New_ctor() ;

/// @brief Method OnEnable, addr 0x1803224e0, size 0x1a0, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::GlobalNamespace::AudioBus> const& __cordl_internal_get_AmbBedExtBus() const;

constexpr ::UnityW<::GlobalNamespace::AudioBus>& __cordl_internal_get_AmbBedExtBus() ;

constexpr ::UnityW<::GlobalNamespace::VoltageControlledAmplifier> const& __cordl_internal_get_AmbBedVCA() const;

constexpr ::UnityW<::GlobalNamespace::VoltageControlledAmplifier>& __cordl_internal_get_AmbBedVCA() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& __cordl_internal_get_BeachCloseSounds() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& __cordl_internal_get_BeachCloseSounds() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& __cordl_internal_get_BeachFarSounds() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& __cordl_internal_get_BeachFarSounds() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& __cordl_internal_get_BeachSurroundedSounds() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& __cordl_internal_get_BeachSurroundedSounds() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_BeachWaveSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_BeachWaveSound() ;

constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences> const& __cordl_internal_get_FootstepSoundData() const;

constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences>& __cordl_internal_get_FootstepSoundData() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_InteriorBedSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_InteriorBedSound() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_InteriorWindSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_InteriorWindSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioBus> const& __cordl_internal_get_OceanBus() const;

constexpr ::UnityW<::GlobalNamespace::AudioBus>& __cordl_internal_get_OceanBus() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_OceanReflection() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_OceanReflection() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_RockyWaterSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_RockyWaterSound() ;

constexpr ::ArrayW<::GlobalNamespace::ScatterFrequencyMultiplierData> const& __cordl_internal_get_ScatterFrequencyMultipliers() const;

constexpr ::ArrayW<::GlobalNamespace::ScatterFrequencyMultiplierData>& __cordl_internal_get_ScatterFrequencyMultipliers() ;

constexpr ::ArrayW<::GlobalNamespace::AmbienceSound*> const& __cordl_internal_get_Sounds() const;

constexpr ::ArrayW<::GlobalNamespace::AmbienceSound*>& __cordl_internal_get_Sounds() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& __cordl_internal_get_WindElevationSoundsHigh() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& __cordl_internal_get_WindElevationSoundsHigh() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& __cordl_internal_get_WindElevationSoundsLow() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& __cordl_internal_get_WindElevationSoundsLow() ;

constexpr float_t const& __cordl_internal_get_WindVolCompensation() const;

constexpr float_t& __cordl_internal_get_WindVolCompensation() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>* const& __cordl_internal_get__ScatterFrequencyMultiplierLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*& __cordl_internal_get__ScatterFrequencyMultiplierLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>* const& __cordl_internal_get__ScatterLPMinLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*& __cordl_internal_get__ScatterLPMinLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>* const& __cordl_internal_get__SoundLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*& __cordl_internal_get__SoundLookup_k__BackingField() ;

constexpr void __cordl_internal_set_AmbBedExtBus(::UnityW<::GlobalNamespace::AudioBus>  value) ;

constexpr void __cordl_internal_set_AmbBedVCA(::UnityW<::GlobalNamespace::VoltageControlledAmplifier>  value) ;

constexpr void __cordl_internal_set_BeachCloseSounds(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value) ;

constexpr void __cordl_internal_set_BeachFarSounds(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value) ;

constexpr void __cordl_internal_set_BeachSurroundedSounds(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value) ;

constexpr void __cordl_internal_set_BeachWaveSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_FootstepSoundData(::UnityW<::GlobalNamespace::FootstepAudioReferences>  value) ;

constexpr void __cordl_internal_set_InteriorBedSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_InteriorWindSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_OceanBus(::UnityW<::GlobalNamespace::AudioBus>  value) ;

constexpr void __cordl_internal_set_OceanReflection(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_RockyWaterSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_ScatterFrequencyMultipliers(::ArrayW<::GlobalNamespace::ScatterFrequencyMultiplierData>  value) ;

constexpr void __cordl_internal_set_Sounds(::ArrayW<::GlobalNamespace::AmbienceSound*>  value) ;

constexpr void __cordl_internal_set_WindElevationSoundsHigh(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value) ;

constexpr void __cordl_internal_set_WindElevationSoundsLow(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value) ;

constexpr void __cordl_internal_set_WindVolCompensation(float_t  value) ;

constexpr void __cordl_internal_set__ScatterFrequencyMultiplierLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*  value) ;

constexpr void __cordl_internal_set__ScatterLPMinLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*  value) ;

constexpr void __cordl_internal_set__SoundLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*  value) ;

/// @brief Method .ctor, addr 0x180322680, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ScatterFrequencyMultiplierLookup, addr 0x180322750, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>* get_ScatterFrequencyMultiplierLookup() ;

/// @brief Method get_ScatterLPMinLookup, addr 0x180322760, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>* get_ScatterLPMinLookup() ;

/// @brief Method get_SoundLookup, addr 0x1802ec4d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>* get_SoundLookup() ;

/// @brief Method set_ScatterFrequencyMultiplierLookup, addr 0x180322770, size 0x20, virtual false, abstract: false, final false
inline void set_ScatterFrequencyMultiplierLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*  value) ;

/// @brief Method set_ScatterLPMinLookup, addr 0x180322790, size 0x20, virtual false, abstract: false, final false
inline void set_ScatterLPMinLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*  value) ;

/// @brief Method set_SoundLookup, addr 0x1802ec810, size 0x20, virtual false, abstract: false, final false
inline void set_SoundLookup(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbienceSoundData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbienceSoundData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbienceSoundData(AmbienceSoundData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbienceSoundData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbienceSoundData(AmbienceSoundData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4796};

/// @brief Field Sounds, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AmbienceSound*>  ___Sounds;

/// @brief Field BeachCloseSounds, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  ___BeachCloseSounds;

/// @brief Field BeachSurroundedSounds, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  ___BeachSurroundedSounds;

/// @brief Field BeachFarSounds, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  ___BeachFarSounds;

/// @brief Field BeachWaveSound, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___BeachWaveSound;

/// @brief Field RockyWaterSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___RockyWaterSound;

/// @brief Field InteriorBedSound, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___InteriorBedSound;

/// @brief Field InteriorWindSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___InteriorWindSound;

/// @brief Field WindElevationSoundsHigh, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  ___WindElevationSoundsHigh;

/// @brief Field WindElevationSoundsLow, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  ___WindElevationSoundsLow;

/// @brief Field ScatterFrequencyMultipliers, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ScatterFrequencyMultiplierData>  ___ScatterFrequencyMultipliers;

/// @brief Field OceanReflection, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___OceanReflection;

/// @brief Field AmbBedVCA, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VoltageControlledAmplifier>  ___AmbBedVCA;

/// @brief Field WindVolCompensation, offset: 0x80, size: 0x4, def value: None
 float_t  ___WindVolCompensation;

/// @brief Field AmbBedExtBus, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioBus>  ___AmbBedExtBus;

/// @brief Field OceanBus, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioBus>  ___OceanBus;

/// @brief Field FootstepSoundData, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FootstepAudioReferences>  ___FootstepSoundData;

/// @brief Field <SoundLookup>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*  ____SoundLookup_k__BackingField;

/// @brief Field <ScatterFrequencyMultiplierLookup>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*  ____ScatterFrequencyMultiplierLookup_k__BackingField;

/// @brief Field <ScatterLPMinLookup>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*  ____ScatterLPMinLookup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___Sounds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___BeachCloseSounds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___BeachSurroundedSounds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___BeachFarSounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___BeachWaveSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___RockyWaterSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___InteriorBedSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___InteriorWindSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___WindElevationSoundsHigh) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___WindElevationSoundsLow) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___ScatterFrequencyMultipliers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___OceanReflection) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___AmbBedVCA) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___WindVolCompensation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___AmbBedExtBus) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___OceanBus) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ___FootstepSoundData) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ____SoundLookup_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ____ScatterFrequencyMultiplierLookup_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceSoundData, ____ScatterLPMinLookup_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbienceSoundData) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
