#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceSoundData.hpp"
#include "GlobalNamespace/zzzz__AmbienceSound_impl.hpp"
#include "GlobalNamespace/zzzz__ScatterFrequencyMultiplierData_impl.hpp"
#include "GlobalNamespace/zzzz__SoundCue_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AmbienceSoundData_def.hpp"
#include "GlobalNamespace/zzzz__AmbienceSound_def.hpp"
#include "GlobalNamespace/zzzz__AudioBus_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
#include "GlobalNamespace/zzzz__FootstepAudioReferences_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__VoltageControlledAmplifier_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AmbienceSoundData.get_SoundLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>* (::GlobalNamespace::AmbienceSoundData::*)()>(&::GlobalNamespace::AmbienceSoundData::get_SoundLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"get_SoundLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSoundData.set_SoundLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSoundData::*)(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*)>(&::GlobalNamespace::AmbienceSoundData::set_SoundLookup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802ec810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"set_SoundLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSoundData.get_ScatterFrequencyMultiplierLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>* (::GlobalNamespace::AmbienceSoundData::*)()>(&::GlobalNamespace::AmbienceSoundData::get_ScatterFrequencyMultiplierLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"get_ScatterFrequencyMultiplierLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSoundData.set_ScatterFrequencyMultiplierLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSoundData::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*)>(&::GlobalNamespace::AmbienceSoundData::set_ScatterFrequencyMultiplierLookup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180322770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"set_ScatterFrequencyMultiplierLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSoundData.get_ScatterLPMinLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>* (::GlobalNamespace::AmbienceSoundData::*)()>(&::GlobalNamespace::AmbienceSoundData::get_ScatterLPMinLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"get_ScatterLPMinLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSoundData.set_ScatterLPMinLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSoundData::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*)>(&::GlobalNamespace::AmbienceSoundData::set_ScatterLPMinLookup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180322790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"set_ScatterLPMinLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSoundData.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSoundData::*)()>(&::GlobalNamespace::AmbienceSoundData::OnEnable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803224e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AmbienceSoundData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSoundData::*)()>(&::GlobalNamespace::AmbienceSoundData::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180322680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::AmbienceSound*>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_Sounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sounds;
}
constexpr ::ArrayW<::GlobalNamespace::AmbienceSound*> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_Sounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sounds;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_Sounds(::ArrayW<::GlobalNamespace::AmbienceSound*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sounds = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_BeachCloseSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeachCloseSounds;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_BeachCloseSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeachCloseSounds;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_BeachCloseSounds(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BeachCloseSounds = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_BeachSurroundedSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeachSurroundedSounds;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_BeachSurroundedSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeachSurroundedSounds;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_BeachSurroundedSounds(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BeachSurroundedSounds = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_BeachFarSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeachFarSounds;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_BeachFarSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeachFarSounds;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_BeachFarSounds(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BeachFarSounds = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_BeachWaveSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeachWaveSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_BeachWaveSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeachWaveSound;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_BeachWaveSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BeachWaveSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_RockyWaterSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RockyWaterSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_RockyWaterSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RockyWaterSound;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_RockyWaterSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RockyWaterSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_InteriorBedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteriorBedSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_InteriorBedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteriorBedSound;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_InteriorBedSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InteriorBedSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_InteriorWindSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteriorWindSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_InteriorWindSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteriorWindSound;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_InteriorWindSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InteriorWindSound = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_WindElevationSoundsHigh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindElevationSoundsHigh;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_WindElevationSoundsHigh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindElevationSoundsHigh;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_WindElevationSoundsHigh(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindElevationSoundsHigh = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_WindElevationSoundsLow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindElevationSoundsLow;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_WindElevationSoundsLow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindElevationSoundsLow;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_WindElevationSoundsLow(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindElevationSoundsLow = value;
}
constexpr ::ArrayW<::GlobalNamespace::ScatterFrequencyMultiplierData>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_ScatterFrequencyMultipliers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScatterFrequencyMultipliers;
}
constexpr ::ArrayW<::GlobalNamespace::ScatterFrequencyMultiplierData> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_ScatterFrequencyMultipliers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScatterFrequencyMultipliers;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_ScatterFrequencyMultipliers(::ArrayW<::GlobalNamespace::ScatterFrequencyMultiplierData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScatterFrequencyMultipliers = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_OceanReflection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanReflection;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_OceanReflection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanReflection;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_OceanReflection(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OceanReflection = value;
}
constexpr ::UnityW<::GlobalNamespace::VoltageControlledAmplifier>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_AmbBedVCA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmbBedVCA;
}
constexpr ::UnityW<::GlobalNamespace::VoltageControlledAmplifier> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_AmbBedVCA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmbBedVCA;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_AmbBedVCA(::UnityW<::GlobalNamespace::VoltageControlledAmplifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AmbBedVCA = value;
}
constexpr float_t& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_WindVolCompensation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindVolCompensation;
}
constexpr float_t const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_WindVolCompensation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindVolCompensation;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_WindVolCompensation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindVolCompensation = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioBus>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_AmbBedExtBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmbBedExtBus;
}
constexpr ::UnityW<::GlobalNamespace::AudioBus> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_AmbBedExtBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmbBedExtBus;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_AmbBedExtBus(::UnityW<::GlobalNamespace::AudioBus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AmbBedExtBus = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioBus>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_OceanBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanBus;
}
constexpr ::UnityW<::GlobalNamespace::AudioBus> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_OceanBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OceanBus;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_OceanBus(::UnityW<::GlobalNamespace::AudioBus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OceanBus = value;
}
constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences>& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_FootstepSoundData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FootstepSoundData;
}
constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences> const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get_FootstepSoundData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FootstepSoundData;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set_FootstepSoundData(::UnityW<::GlobalNamespace::FootstepAudioReferences>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FootstepSoundData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*& GlobalNamespace::AmbienceSoundData::__cordl_internal_get__SoundLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SoundLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>* const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get__SoundLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SoundLookup_k__BackingField;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set__SoundLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SoundLookup_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*& GlobalNamespace::AmbienceSoundData::__cordl_internal_get__ScatterFrequencyMultiplierLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScatterFrequencyMultiplierLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>* const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get__ScatterFrequencyMultiplierLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScatterFrequencyMultiplierLookup_k__BackingField;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set__ScatterFrequencyMultiplierLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScatterFrequencyMultiplierLookup_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*& GlobalNamespace::AmbienceSoundData::__cordl_internal_get__ScatterLPMinLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScatterLPMinLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>* const& GlobalNamespace::AmbienceSoundData::__cordl_internal_get__ScatterLPMinLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScatterLPMinLookup_k__BackingField;
}
constexpr void GlobalNamespace::AmbienceSoundData::__cordl_internal_set__ScatterLPMinLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScatterLPMinLookup_k__BackingField = value;
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>* GlobalNamespace::AmbienceSoundData::get_SoundLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"get_SoundLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*>(this, ___internal_method);
}
inline void GlobalNamespace::AmbienceSoundData::set_SoundLookup(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"set_SoundLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::AmbienceSound*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>* GlobalNamespace::AmbienceSoundData::get_ScatterFrequencyMultiplierLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"get_ScatterFrequencyMultiplierLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*>(this, ___internal_method);
}
inline void GlobalNamespace::AmbienceSoundData::set_ScatterFrequencyMultiplierLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"set_ScatterFrequencyMultiplierLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,::UnityEngine::AnimationCurve*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>* GlobalNamespace::AmbienceSoundData::get_ScatterLPMinLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"get_ScatterLPMinLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::AmbienceSoundData::set_ScatterLPMinLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"set_ScatterLPMinLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioScatterContainer>,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AmbienceSoundData::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AmbienceSoundData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSoundData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AmbienceSoundData* GlobalNamespace::AmbienceSoundData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AmbienceSoundData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbienceSoundData::AmbienceSoundData()   {
}
