#pragma once
// IWYU pragma private; include "GlobalNamespace/FootstepSound.hpp"
#include "GlobalNamespace/zzzz__WaterDepthSampleData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FootstepSound_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolumeStruct_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__BiquadFilters_def.hpp"
#include "GlobalNamespace/zzzz__FootstepAudioReferences_def.hpp"
#include "GlobalNamespace/zzzz__FootstepSound_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__IAudioGUI_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__VegetationAudioCullingContainer_def.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundCullingGroup_def.hpp"
#include "GlobalNamespace/zzzz__VolatilityEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__WaterDepthSampleData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FootstepSound_LogCullingGroupComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound_LogCullingGroupComparer::*)(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*)>(&::GlobalNamespace::FootstepSound_LogCullingGroupComparer::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound_LogCullingGroupComparer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound_LogCullingGroupComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FootstepSound_LogCullingGroupComparer::*)(::GlobalNamespace::VegetationSoundCullingGroup*, ::GlobalNamespace::VegetationSoundCullingGroup*)>(&::GlobalNamespace::FootstepSound_LogCullingGroupComparer::Compare)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803d4eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound_LogCullingGroupComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::VegetationSoundCullingGroup*>(), ::i2c::type_of<::GlobalNamespace::VegetationSoundCullingGroup*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*& GlobalNamespace::FootstepSound_LogCullingGroupComparer::__cordl_internal_get__logDataLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logDataLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* const& GlobalNamespace::FootstepSound_LogCullingGroupComparer::__cordl_internal_get__logDataLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logDataLookup;
}
constexpr void GlobalNamespace::FootstepSound_LogCullingGroupComparer::__cordl_internal_set__logDataLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logDataLookup = value;
}
inline void GlobalNamespace::FootstepSound_LogCullingGroupComparer::_ctor(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  logDataLookup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound_LogCullingGroupComparer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logDataLookup);
}
inline int32_t GlobalNamespace::FootstepSound_LogCullingGroupComparer::Compare(::GlobalNamespace::VegetationSoundCullingGroup*  x, ::GlobalNamespace::VegetationSoundCullingGroup*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound_LogCullingGroupComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::VegetationSoundCullingGroup*>(), ::i2c::type_of<::GlobalNamespace::VegetationSoundCullingGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::GlobalNamespace::FootstepSound_LogCullingGroupComparer* GlobalNamespace::FootstepSound_LogCullingGroupComparer::New_ctor(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  logDataLookup)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FootstepSound_LogCullingGroupComparer*>(logDataLookup));
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>"
constexpr  GlobalNamespace::FootstepSound_LogCullingGroupComparer::operator ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>* GlobalNamespace::FootstepSound_LogCullingGroupComparer::i___System__Collections__Generic__IComparer_1___GlobalNamespace__VegetationSoundCullingGroup__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FootstepSound_LogCullingGroupComparer::FootstepSound_LogCullingGroupComparer()   {
}
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.add_OnJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::System::Action*)>(&::GlobalNamespace::FootstepSound::add_OnJump)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803456c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"add_OnJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.remove_OnJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::System::Action*)>(&::GlobalNamespace::FootstepSound::remove_OnJump)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"remove_OnJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.add_OnSit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::System::Action*)>(&::GlobalNamespace::FootstepSound::add_OnSit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803457e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"add_OnSit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.remove_OnSit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::System::Action*)>(&::GlobalNamespace::FootstepSound::remove_OnSit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"remove_OnSit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.add_OnStand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::System::Action*)>(&::GlobalNamespace::FootstepSound::add_OnStand)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"add_OnStand", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.remove_OnStand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::System::Action*)>(&::GlobalNamespace::FootstepSound::remove_OnStand)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"remove_OnStand", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.add_OnLand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::System::Action*)>(&::GlobalNamespace::FootstepSound::add_OnLand)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"add_OnLand", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.remove_OnLand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::System::Action*)>(&::GlobalNamespace::FootstepSound::remove_OnLand)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"remove_OnLand", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_IndoornessVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_IndoornessVol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803459d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_IndoornessVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_IndoornessVolStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolumeStruct (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_IndoornessVolStruct)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180345990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_IndoornessVolStruct", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_CanSlide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_CanSlide)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180345900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_CanSlide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_LastHitCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_LastHitCollider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803459e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_LastHitCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_LastHitCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::FootstepSound::set_LastHitCollider)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180345f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_LastHitCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_IsGrounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_IsGrounded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803115f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_IsGrounded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_InWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_InWater)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180345970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_InWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_WaterVolRealtime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_WaterVolRealtime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterVolRealtime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_WaterVolRealtime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::FootstepSound::set_WaterVolRealtime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803461c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterVolRealtime", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_WaterIntensityVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_WaterIntensityVol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterIntensityVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_WaterIntensityVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::FootstepSound::set_WaterIntensityVol)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180346160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterIntensityVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_WaterFootstepFadeVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_WaterFootstepFadeVol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterFootstepFadeVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_WaterFootstepFadeVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::FootstepSound::set_WaterFootstepFadeVol)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180346140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterFootstepFadeVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_WaterFoleyFadeVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_WaterFoleyFadeVol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterFoleyFadeVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_WaterFoleyFadeVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::FootstepSound::set_WaterFoleyFadeVol)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180346120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterFoleyFadeVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_WaterMoveLeftVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_WaterMoveLeftVol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterMoveLeftVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_WaterMoveLeftVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::FootstepSound::set_WaterMoveLeftVol)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180346180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterMoveLeftVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_WaterMoveRightVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_WaterMoveRightVol)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterMoveRightVol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_WaterMoveRightVol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::FootstepSound::set_WaterMoveRightVol)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803461a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterMoveRightVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_WaterVolStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolumeStruct (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_WaterVolStruct)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180345c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterVolStruct", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_WaterFootstepFadeVolStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolumeStruct (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_WaterFootstepFadeVolStruct)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180345bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterFootstepFadeVolStruct", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_WaterFoleyFadeVolStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolumeStruct (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_WaterFoleyFadeVolStruct)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180345b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterFoleyFadeVolStruct", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_TreeDensityCountLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::FootstepSound::get_TreeDensityCountLong)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180345b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_TreeDensityCountLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_LocalPlayerHeightOffTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::FootstepSound::get_LocalPlayerHeightOffTerrain)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180345a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_LocalPlayerHeightOffTerrain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_LocalPlayerHeightOffTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::FootstepSound::set_LocalPlayerHeightOffTerrain)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180345fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_LocalPlayerHeightOffTerrain", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_LocalPlayerHeightOffTerrainAvg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::FootstepSound::get_LocalPlayerHeightOffTerrainAvg)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803459f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_LocalPlayerHeightOffTerrainAvg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_LocalPlayerHeightOffTerrainAvg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::FootstepSound::set_LocalPlayerHeightOffTerrainAvg)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180345f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_LocalPlayerHeightOffTerrainAvg", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_RealTreeIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::FootstepSound::get_RealTreeIntensity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180345af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_RealTreeIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_RealTreeIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::FootstepSound::set_RealTreeIntensity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803460c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_RealTreeIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_WindyPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>* (*)()>(&::GlobalNamespace::FootstepSound::get_WindyPositions)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180316340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WindyPositions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_WindyPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*)>(&::GlobalNamespace::FootstepSound::set_WindyPositions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803461e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WindyPositions", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_WindyTimeScalerLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>* (*)()>(&::GlobalNamespace::FootstepSound::get_WindyTimeScalerLookup)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180316380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WindyTimeScalerLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_WindyTimeScalerLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*)>(&::GlobalNamespace::FootstepSound::set_WindyTimeScalerLookup)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180346240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WindyTimeScalerLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_LocalTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Terrain> (*)()>(&::GlobalNamespace::FootstepSound::get_LocalTerrain)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180345ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_LocalTerrain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_LocalTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Terrain*)>(&::GlobalNamespace::FootstepSound::set_LocalTerrain)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180346060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_LocalTerrain", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_LocalStreamTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(&::GlobalNamespace::FootstepSound::get_LocalStreamTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180345a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_LocalStreamTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_LocalStreamTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::FootstepSound::set_LocalStreamTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180346000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_LocalStreamTexture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_DepthMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WaterDepthSampleData_GetDepthMode (*)()>(&::GlobalNamespace::FootstepSound::get_DepthMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180345920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_DepthMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_DepthMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::WaterDepthSampleData_GetDepthMode)>(&::GlobalNamespace::FootstepSound::set_DepthMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180345ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_DepthMode", {}, {::i2c::type_of<::GlobalNamespace::WaterDepthSampleData_GetDepthMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.ResetStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::FootstepSound::ResetStatic)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18033f8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"ResetStatic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_GUIDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_GUIDebugMode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18032d450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_GUIDebugMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.set_GUIDebugMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(bool)>(&::GlobalNamespace::FootstepSound::set_GUIDebugMode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18032d4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_GUIDebugMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_Identifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::OnEnable)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18033e040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::OnDisable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18033df60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::Start)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x18033fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.InitializeCullingContainers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::InitializeCullingContainers)> {
  constexpr static std::size_t size = 0x1770;
  constexpr static std::size_t addrs = 0x18033c400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"InitializeCullingContainers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.DisposeCullingContainers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::DisposeCullingContainers)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180337250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DisposeCullingContainers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.OnQualityLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(int32_t)>(&::GlobalNamespace::FootstepSound::OnQualityLevelChanged)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18033e240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"OnQualityLevelChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::OnDestroy)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18033dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.ScheduleJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::ScheduleJobs)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18033f910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"ScheduleJobs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::LateUpdate)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18033db70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.AudioUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(float_t)>(&::GlobalNamespace::FootstepSound::AudioUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.AudioFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(float_t)>(&::GlobalNamespace::FootstepSound::AudioFixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(float_t)>(&::GlobalNamespace::FootstepSound::AudioLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.AudioSlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(float_t)>(&::GlobalNamespace::FootstepSound::AudioSlowUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.DrawGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::DrawGUI)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x18033bd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DrawGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.UpdateFootsteps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(::by_ref<bool>, ::by_ref<bool>, ::by_ref<bool>)>(&::GlobalNamespace::FootstepSound::UpdateFootsteps)> {
  constexpr static std::size_t size = 0x1de0;
  constexpr static std::size_t addrs = 0x180340880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"UpdateFootsteps", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.QueryForDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::QueryForDetails)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18033f440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"QueryForDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.QueryForTrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::QueryForTrees)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18033f710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"QueryForTrees", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.QueryForLogs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::QueryForLogs)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18033f5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"QueryForLogs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.UpdateWindyPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(int32_t)>(&::GlobalNamespace::FootstepSound::UpdateWindyPositions)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x180344b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"UpdateWindyPositions", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.UpdateWaterValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::UpdateWaterValues)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x1803443a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"UpdateWaterValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.UpdateWaterSounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::UpdateWaterSounds)> {
  constexpr static std::size_t size = 0x1c20;
  constexpr static std::size_t addrs = 0x180342780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"UpdateWaterSounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.DoWalkRunLand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::DoWalkRunLand)> {
  constexpr static std::size_t size = 0x1c80;
  constexpr static std::size_t addrs = 0x18033a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DoWalkRunLand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.DoJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::DoJump)> {
  constexpr static std::size_t size = 0xc00;
  constexpr static std::size_t addrs = 0x180337340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DoJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.DoSit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::DoSit)> {
  constexpr static std::size_t size = 0xd50;
  constexpr static std::size_t addrs = 0x180337f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DoSit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.DoStand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::DoStand)> {
  constexpr static std::size_t size = 0xd70;
  constexpr static std::size_t addrs = 0x180339380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DoStand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.DoSlide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::DoSlide)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x180338c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DoSlide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.SlideGetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::FootstepSound::SlideGetX)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18033fb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"SlideGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.UpdateSlideVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(float_t)>(&::GlobalNamespace::FootstepSound::UpdateSlideVolume)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180342660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"UpdateSlideVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.StopSlideSounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::StopSlideSounds)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803401f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"StopSlideSounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.PlaySlideLandSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(float_t)>(&::GlobalNamespace::FootstepSound::PlaySlideLandSound)> {
  constexpr static std::size_t size = 0xc20;
  constexpr static std::size_t addrs = 0x18033e350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"PlaySlideLandSound", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.GetMovingVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::GetMovingVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18033c2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"GetMovingVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.HitCollidersContain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::FootstepSound::HitCollidersContain)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18033c310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"HitCollidersContain", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.PlayTreeAndDetailSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::PlayTreeAndDetailSound)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x18033ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"PlayTreeAndDetailSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.StopDetailSounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(float_t)>(&::GlobalNamespace::FootstepSound::StopDetailSounds)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180340140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"StopDetailSounds", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.StopTreeSounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(float_t)>(&::GlobalNamespace::FootstepSound::StopTreeSounds)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180340350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"StopTreeSounds", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.GetWaterIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::GetWaterIntensity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18033c2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"GetWaterIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.WaterLeftHandGetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::FootstepSound::WaterLeftHandGetX)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180345050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"WaterLeftHandGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.WaterRightHandGetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::FootstepSound::WaterRightHandGetX)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803450b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"WaterRightHandGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.WaterCenterMoveGetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FootstepSound::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::FootstepSound::WaterCenterMoveGetX)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180344fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"WaterCenterMoveGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound.TryPlayWaterSoundForKick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::TryPlayWaterSoundForKick)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180340400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"TryPlayWaterSoundForKick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)()>(&::GlobalNamespace::FootstepSound::_ctor)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1803452b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._UpdateFootsteps_b__211_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(double_t)>(&::GlobalNamespace::FootstepSound::_UpdateFootsteps_b__211_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180340690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateFootsteps>b__211_0", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._UpdateFootsteps_b__211_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(double_t)>(&::GlobalNamespace::FootstepSound::_UpdateFootsteps_b__211_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803406d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateFootsteps>b__211_1", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._UpdateFootsteps_b__211_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(double_t)>(&::GlobalNamespace::FootstepSound::_UpdateFootsteps_b__211_2)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180340690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateFootsteps>b__211_2", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._UpdateFootsteps_b__211_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FootstepSound::*)(double_t)>(&::GlobalNamespace::FootstepSound::_UpdateFootsteps_b__211_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803406d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateFootsteps>b__211_3", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._UpdateWaterSounds_g___clearRef_217_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FootstepSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::FootstepSound::_UpdateWaterSounds_g___clearRef_217_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803406e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateWaterSounds>g___clearRef|217_0", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._UpdateWaterSounds_g___clearRef_217_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FootstepSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::FootstepSound::_UpdateWaterSounds_g___clearRef_217_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180340740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateWaterSounds>g___clearRef|217_1", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._UpdateWaterSounds_g___clearRef_217_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FootstepSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::FootstepSound::_UpdateWaterSounds_g___clearRef_217_2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803407a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateWaterSounds>g___clearRef|217_2", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._UpdateWaterSounds_g___clearRef_217_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FootstepSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::FootstepSound::_UpdateWaterSounds_g___clearRef_217_3)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180340810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateWaterSounds>g___clearRef|217_3", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._DoWalkRunLand_g___resetLandingFlag_218_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FootstepSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::FootstepSound::_DoWalkRunLand_g___resetLandingFlag_218_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180340610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<DoWalkRunLand>g___resetLandingFlag|218_0", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._DoSit_g___resetSittingFlag_220_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FootstepSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::FootstepSound::_DoSit_g___resetSittingFlag_220_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803405d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<DoSit>g___resetSittingFlag|220_0", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._DoStand_g___switchStanding_221_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FootstepSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::FootstepSound::_DoStand_g___switchStanding_221_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803405f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<DoStand>g___switchStanding|221_0", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._PlayTreeAndDetailSound_g___clearRef_229_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FootstepSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::FootstepSound::_PlayTreeAndDetailSound_g___clearRef_229_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180340630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<PlayTreeAndDetailSound>g___clearRef|229_0", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FootstepSound._PlayTreeAndDetailSound_g___clearRef_229_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FootstepSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::FootstepSound::_PlayTreeAndDetailSound_g___clearRef_229_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180340660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<PlayTreeAndDetailSound>g___clearRef|229_1", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::FootstepSound::__cordl_internal_get_PlayerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::FootstepSound::__cordl_internal_get_PlayerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerCharacter;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_PlayerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerCharacter = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FootstepSound::__cordl_internal_get_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FootstepSound::__cordl_internal_get_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_Root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Root = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FootstepSound::__cordl_internal_get_Bum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bum;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FootstepSound::__cordl_internal_get_Bum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bum;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_Bum(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bum = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FootstepSound::__cordl_internal_get_LeftFoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftFoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FootstepSound::__cordl_internal_get_LeftFoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftFoot;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_LeftFoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LeftFoot = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FootstepSound::__cordl_internal_get_RightFoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RightFoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FootstepSound::__cordl_internal_get_RightFoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RightFoot;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_RightFoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RightFoot = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FootstepSound::__cordl_internal_get_Bob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bob;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FootstepSound::__cordl_internal_get_Bob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bob;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_Bob(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bob = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FootstepSound::__cordl_internal_get_LeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FootstepSound::__cordl_internal_get_LeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LeftHand;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_LeftHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LeftHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FootstepSound::__cordl_internal_get_RightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RightHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FootstepSound::__cordl_internal_get_RightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RightHand;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_RightHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RightHand = value;
}
constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences>& GlobalNamespace::FootstepSound::__cordl_internal_get_AssetReferences()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetReferences;
}
constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences> const& GlobalNamespace::FootstepSound::__cordl_internal_get_AssetReferences() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssetReferences;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_AssetReferences(::UnityW<::GlobalNamespace::FootstepAudioReferences>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AssetReferences = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FootstepSound::__cordl_internal_get_RootWorldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootWorldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FootstepSound::__cordl_internal_get_RootWorldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RootWorldPos;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_RootWorldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RootWorldPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FootstepSound::__cordl_internal_get__lastRootWorldPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRootWorldPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FootstepSound::__cordl_internal_get__lastRootWorldPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRootWorldPos;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__lastRootWorldPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRootWorldPos = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__lastLeftMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastLeftMax;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__lastLeftMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastLeftMax;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__lastLeftMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastLeftMax = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__lastRightMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRightMax;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__lastRightMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRightMax;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__lastRightMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRightMax = value;
}
constexpr bool& GlobalNamespace::FootstepSound::__cordl_internal_get__inAir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inAir;
}
constexpr bool const& GlobalNamespace::FootstepSound::__cordl_internal_get__inAir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inAir;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__inAir(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inAir = value;
}
constexpr bool& GlobalNamespace::FootstepSound::__cordl_internal_get__landing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____landing;
}
constexpr bool const& GlobalNamespace::FootstepSound::__cordl_internal_get__landing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____landing;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__landing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____landing = value;
}
constexpr bool& GlobalNamespace::FootstepSound::__cordl_internal_get__sitting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sitting;
}
constexpr bool const& GlobalNamespace::FootstepSound::__cordl_internal_get__sitting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sitting;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__sitting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sitting = value;
}
constexpr bool& GlobalNamespace::FootstepSound::__cordl_internal_get__standing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____standing;
}
constexpr bool const& GlobalNamespace::FootstepSound::__cordl_internal_get__standing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____standing;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__standing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____standing = value;
}
constexpr bool& GlobalNamespace::FootstepSound::__cordl_internal_get__grounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grounded;
}
constexpr bool const& GlobalNamespace::FootstepSound::__cordl_internal_get__grounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grounded;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__grounded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grounded = value;
}
constexpr bool& GlobalNamespace::FootstepSound::__cordl_internal_get__wasWalkingOrRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasWalkingOrRunning;
}
constexpr bool const& GlobalNamespace::FootstepSound::__cordl_internal_get__wasWalkingOrRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasWalkingOrRunning;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__wasWalkingOrRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasWalkingOrRunning = value;
}
constexpr ::System::Action*& GlobalNamespace::FootstepSound::__cordl_internal_get_OnJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnJump;
}
constexpr ::System::Action* const& GlobalNamespace::FootstepSound::__cordl_internal_get_OnJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnJump;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_OnJump(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnJump = value;
}
constexpr ::System::Action*& GlobalNamespace::FootstepSound::__cordl_internal_get_OnSit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSit;
}
constexpr ::System::Action* const& GlobalNamespace::FootstepSound::__cordl_internal_get_OnSit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSit;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_OnSit(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSit = value;
}
constexpr ::System::Action*& GlobalNamespace::FootstepSound::__cordl_internal_get_OnStand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStand;
}
constexpr ::System::Action* const& GlobalNamespace::FootstepSound::__cordl_internal_get_OnStand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStand;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_OnStand(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStand = value;
}
constexpr ::System::Action*& GlobalNamespace::FootstepSound::__cordl_internal_get_OnLand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLand;
}
constexpr ::System::Action* const& GlobalNamespace::FootstepSound::__cordl_internal_get_OnLand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLand;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set_OnLand(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLand = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__cachedSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedSpeed;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__cachedSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedSpeed;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__cachedSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedSpeed = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__movingVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movingVelocity;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__movingVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movingVelocity;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__movingVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movingVelocity = value;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*& GlobalNamespace::FootstepSound::__cordl_internal_get__1stSoundSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____1stSoundSet;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* const& GlobalNamespace::FootstepSound::__cordl_internal_get__1stSoundSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____1stSoundSet;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__1stSoundSet(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____1stSoundSet = value;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*& GlobalNamespace::FootstepSound::__cordl_internal_get__2ndSoundSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____2ndSoundSet;
}
constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* const& GlobalNamespace::FootstepSound::__cordl_internal_get__2ndSoundSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____2ndSoundSet;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__2ndSoundSet(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____2ndSoundSet = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__1stProportion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____1stProportion;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__1stProportion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____1stProportion;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__1stProportion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____1stProportion = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__2ndProportion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____2ndProportion;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__2ndProportion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____2ndProportion;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__2ndProportion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____2ndProportion = value;
}
constexpr int32_t& GlobalNamespace::FootstepSound::__cordl_internal_get__squeakySandSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____squeakySandSwitch;
}
constexpr int32_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__squeakySandSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____squeakySandSwitch;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__squeakySandSwitch(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____squeakySandSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::FootstepSound::__cordl_internal_get__propLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propLayer;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::FootstepSound::__cordl_internal_get__propLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propLayer;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__propLayer(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propLayer = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::FootstepSound::__cordl_internal_get__indoornessVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indoornessVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::FootstepSound::__cordl_internal_get__indoornessVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____indoornessVol;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__indoornessVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____indoornessVol = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::FootstepSound::__cordl_internal_get__crouchVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crouchVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::FootstepSound::__cordl_internal_get__crouchVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crouchVol;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__crouchVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crouchVol = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::FootstepSound::__cordl_internal_get__currentDetailSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDetailSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::FootstepSound::__cordl_internal_get__currentDetailSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDetailSound;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__currentDetailSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDetailSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::FootstepSound::__cordl_internal_get__currentTreeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTreeSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::FootstepSound::__cordl_internal_get__currentTreeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTreeSound;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__currentTreeSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTreeSound = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__lastRustlePlayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRustlePlayTime;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__lastRustlePlayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRustlePlayTime;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__lastRustlePlayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRustlePlayTime = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioLayerContainer>,::GlobalNamespace::AudioEvent*>*& GlobalNamespace::FootstepSound::__cordl_internal_get__slidingEventLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slidingEventLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioLayerContainer>,::GlobalNamespace::AudioEvent*>* const& GlobalNamespace::FootstepSound::__cordl_internal_get__slidingEventLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slidingEventLookup;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__slidingEventLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioLayerContainer>,::GlobalNamespace::AudioEvent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slidingEventLookup = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::FootstepSound::__cordl_internal_get__1stSlidingEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____1stSlidingEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::FootstepSound::__cordl_internal_get__1stSlidingEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____1stSlidingEvent;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__1stSlidingEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____1stSlidingEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::FootstepSound::__cordl_internal_get__2ndSlidingEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____2ndSlidingEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::FootstepSound::__cordl_internal_get__2ndSlidingEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____2ndSlidingEvent;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__2ndSlidingEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____2ndSlidingEvent = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::FootstepSound::__cordl_internal_get__1stSlidingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____1stSlidingVolume;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::FootstepSound::__cordl_internal_get__1stSlidingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____1stSlidingVolume;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__1stSlidingVolume(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____1stSlidingVolume = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::FootstepSound::__cordl_internal_get__2ndSlidingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____2ndSlidingVolume;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::FootstepSound::__cordl_internal_get__2ndSlidingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____2ndSlidingVolume;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__2ndSlidingVolume(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____2ndSlidingVolume = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__lastSlideLandTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSlideLandTime;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__lastSlideLandTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSlideLandTime;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__lastSlideLandTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSlideLandTime = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__lastSlideStopTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSlideStopTime;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__lastSlideStopTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSlideStopTime;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__lastSlideStopTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSlideStopTime = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__lastSlideStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSlideStartTime;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__lastSlideStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSlideStartTime;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__lastSlideStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSlideStartTime = value;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& GlobalNamespace::FootstepSound::__cordl_internal_get__lastHitMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHitMaterial;
}
constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& GlobalNamespace::FootstepSound::__cordl_internal_get__lastHitMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHitMaterial;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__lastHitMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastHitMaterial = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::FootstepSound::__cordl_internal_get__sphereCastResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sphereCastResults;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::FootstepSound::__cordl_internal_get__sphereCastResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sphereCastResults;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__sphereCastResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sphereCastResults = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::FootstepSound::__cordl_internal_get__capsuleCastResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsuleCastResults;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::FootstepSound::__cordl_internal_get__capsuleCastResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsuleCastResults;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__capsuleCastResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capsuleCastResults = value;
}
constexpr int32_t& GlobalNamespace::FootstepSound::__cordl_internal_get__hitSphereCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitSphereCount;
}
constexpr int32_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__hitSphereCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitSphereCount;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__hitSphereCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitSphereCount = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::FootstepSound::__cordl_internal_get__LastHitCollider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastHitCollider_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::FootstepSound::__cordl_internal_get__LastHitCollider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastHitCollider_k__BackingField;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__LastHitCollider_k__BackingField(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastHitCollider_k__BackingField = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& GlobalNamespace::FootstepSound::__cordl_internal_get__sampleHeightHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleHeightHelper;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& GlobalNamespace::FootstepSound::__cordl_internal_get__sampleHeightHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleHeightHelper;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__sampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleHeightHelper = value;
}
constexpr ::GlobalNamespace::VolatilityEvaluator*& GlobalNamespace::FootstepSound::__cordl_internal_get__volatilityEvaluator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volatilityEvaluator;
}
constexpr ::GlobalNamespace::VolatilityEvaluator* const& GlobalNamespace::FootstepSound::__cordl_internal_get__volatilityEvaluator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volatilityEvaluator;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__volatilityEvaluator(::GlobalNamespace::VolatilityEvaluator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volatilityEvaluator = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__waterDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterDepth;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__waterDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterDepth;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__waterDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterDepth = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__waterIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterIntensity;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__waterIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterIntensity;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__waterIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterIntensity = value;
}
constexpr bool& GlobalNamespace::FootstepSound::__cordl_internal_get__inMicroSplatWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inMicroSplatWater;
}
constexpr bool const& GlobalNamespace::FootstepSound::__cordl_internal_get__inMicroSplatWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inMicroSplatWater;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__inMicroSplatWater(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inMicroSplatWater = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterVolRealtime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterVolRealtime_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterVolRealtime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterVolRealtime_k__BackingField;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__WaterVolRealtime_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaterVolRealtime_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterIntensityVol_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterIntensityVol_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterIntensityVol_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterIntensityVol_k__BackingField;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__WaterIntensityVol_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaterIntensityVol_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterFootstepFadeVol_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterFootstepFadeVol_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterFootstepFadeVol_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterFootstepFadeVol_k__BackingField;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__WaterFootstepFadeVol_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaterFootstepFadeVol_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterFoleyFadeVol_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterFoleyFadeVol_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterFoleyFadeVol_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterFoleyFadeVol_k__BackingField;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__WaterFoleyFadeVol_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaterFoleyFadeVol_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterMoveLeftVol_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterMoveLeftVol_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterMoveLeftVol_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterMoveLeftVol_k__BackingField;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__WaterMoveLeftVol_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaterMoveLeftVol_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterMoveRightVol_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterMoveRightVol_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::FootstepSound::__cordl_internal_get__WaterMoveRightVol_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterMoveRightVol_k__BackingField;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__WaterMoveRightVol_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaterMoveRightVol_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::FootstepSound::__cordl_internal_get__waterWalkEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterWalkEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::FootstepSound::__cordl_internal_get__waterWalkEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterWalkEvent;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__waterWalkEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterWalkEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::FootstepSound::__cordl_internal_get__waterRunEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterRunEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::FootstepSound::__cordl_internal_get__waterRunEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterRunEvent;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__waterRunEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterRunEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::FootstepSound::__cordl_internal_get__waterJumpEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterJumpEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::FootstepSound::__cordl_internal_get__waterJumpEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterJumpEvent;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__waterJumpEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterJumpEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::FootstepSound::__cordl_internal_get__waterLandEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterLandEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::FootstepSound::__cordl_internal_get__waterLandEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterLandEvent;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__waterLandEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterLandEvent = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::FootstepSound::__cordl_internal_get__waterBobASC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterBobASC;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::FootstepSound::__cordl_internal_get__waterBobASC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterBobASC;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__waterBobASC(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterBobASC = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::FootstepSound::__cordl_internal_get__waterMoveLeftASC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterMoveLeftASC;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::FootstepSound::__cordl_internal_get__waterMoveLeftASC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterMoveLeftASC;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__waterMoveLeftASC(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterMoveLeftASC = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::FootstepSound::__cordl_internal_get__waterMoveRightASC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterMoveRightASC;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::FootstepSound::__cordl_internal_get__waterMoveRightASC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterMoveRightASC;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__waterMoveRightASC(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterMoveRightASC = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::FootstepSound::__cordl_internal_get__waterMoveCenterASC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterMoveCenterASC;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::FootstepSound::__cordl_internal_get__waterMoveCenterASC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterMoveCenterASC;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__waterMoveCenterASC(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterMoveCenterASC = value;
}
constexpr bool& GlobalNamespace::FootstepSound::__cordl_internal_get__swimLeftHandUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swimLeftHandUp;
}
constexpr bool const& GlobalNamespace::FootstepSound::__cordl_internal_get__swimLeftHandUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swimLeftHandUp;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__swimLeftHandUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____swimLeftHandUp = value;
}
constexpr bool& GlobalNamespace::FootstepSound::__cordl_internal_get__swimRightHandUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swimRightHandUp;
}
constexpr bool const& GlobalNamespace::FootstepSound::__cordl_internal_get__swimRightHandUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____swimRightHandUp;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__swimRightHandUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____swimRightHandUp = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__leftHandVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandVelocity;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__leftHandVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandVelocity;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__leftHandVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHandVelocity = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__rightHandVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandVelocity;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__rightHandVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandVelocity;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__rightHandVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHandVelocity = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__leftDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftDepth;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__leftDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftDepth;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__leftDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftDepth = value;
}
constexpr float_t& GlobalNamespace::FootstepSound::__cordl_internal_get__rightDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightDepth;
}
constexpr float_t const& GlobalNamespace::FootstepSound::__cordl_internal_get__rightDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightDepth;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__rightDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightDepth = value;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& GlobalNamespace::FootstepSound::__cordl_internal_get__leftHandFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandFilter;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& GlobalNamespace::FootstepSound::__cordl_internal_get__leftHandFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandFilter;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__leftHandFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHandFilter = value;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& GlobalNamespace::FootstepSound::__cordl_internal_get__rightHandFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandFilter;
}
constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& GlobalNamespace::FootstepSound::__cordl_internal_get__rightHandFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandFilter;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__rightHandFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHandFilter = value;
}
constexpr ::UnityW<::UnityEngine::Terrain>& GlobalNamespace::FootstepSound::__cordl_internal_get__cachedTerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTerrain;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& GlobalNamespace::FootstepSound::__cordl_internal_get__cachedTerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTerrain;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__cachedTerrain(::UnityW<::UnityEngine::Terrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedTerrain = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::FootstepSound::__cordl_internal_get__cachedStreamTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedStreamTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::FootstepSound::__cordl_internal_get__cachedStreamTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedStreamTexture;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__cachedStreamTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedStreamTexture = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::FootstepSound::__cordl_internal_get__playingDetailSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playingDetailSounds;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::FootstepSound::__cordl_internal_get__playingDetailSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playingDetailSounds;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__playingDetailSounds(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playingDetailSounds = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::FootstepSound::__cordl_internal_get__playingTreeSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playingTreeSounds;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::FootstepSound::__cordl_internal_get__playingTreeSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playingTreeSounds;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__playingTreeSounds(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playingTreeSounds = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*& GlobalNamespace::FootstepSound::__cordl_internal_get__guiDebugLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugLog;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* const& GlobalNamespace::FootstepSound::__cordl_internal_get__guiDebugLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugLog;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__guiDebugLog(::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugLog = value;
}
constexpr ::UnityEngine::GUIStyle*& GlobalNamespace::FootstepSound::__cordl_internal_get__guiDebugTextStyle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr ::UnityEngine::GUIStyle* const& GlobalNamespace::FootstepSound::__cordl_internal_get__guiDebugTextStyle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guiDebugTextStyle;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guiDebugTextStyle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::FootstepSound::__cordl_internal_get__currentDetailObj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDetailObj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::FootstepSound::__cordl_internal_get__currentDetailObj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDetailObj;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__currentDetailObj(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDetailObj = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::FootstepSound::__cordl_internal_get__currentTreeObj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTreeObj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::FootstepSound::__cordl_internal_get__currentTreeObj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTreeObj;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__currentTreeObj(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTreeObj = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::FootstepSound::__cordl_internal_get__currentLogObj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentLogObj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::FootstepSound::__cordl_internal_get__currentLogObj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentLogObj;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__currentLogObj(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentLogObj = value;
}
constexpr bool& GlobalNamespace::FootstepSound::__cordl_internal_get__debugLogReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugLogReady;
}
constexpr bool const& GlobalNamespace::FootstepSound::__cordl_internal_get__debugLogReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugLogReady;
}
constexpr void GlobalNamespace::FootstepSound::__cordl_internal_set__debugLogReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____debugLogReady = value;
}
inline void GlobalNamespace::FootstepSound::setStaticF_s_treeDensityCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_treeDensityCount", ::GlobalNamespace::FootstepSound*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::FootstepSound::getStaticF_s_treeDensityCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_treeDensityCount", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF_s_detailDensityCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_detailDensityCount", ::GlobalNamespace::FootstepSound*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::FootstepSound::getStaticF_s_detailDensityCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_detailDensityCount", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF_s_treeDensityCountLong(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_treeDensityCountLong", ::GlobalNamespace::FootstepSound*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::FootstepSound::getStaticF_s_treeDensityCountLong()  {
return ::cordl_internals::getStaticField<int32_t, "s_treeDensityCountLong", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__LocalPlayerHeightOffTerrain_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<LocalPlayerHeightOffTerrain>k__BackingField", ::GlobalNamespace::FootstepSound*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::FootstepSound::getStaticF__LocalPlayerHeightOffTerrain_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<LocalPlayerHeightOffTerrain>k__BackingField", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__LocalPlayerHeightOffTerrainAvg_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<LocalPlayerHeightOffTerrainAvg>k__BackingField", ::GlobalNamespace::FootstepSound*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::FootstepSound::getStaticF__LocalPlayerHeightOffTerrainAvg_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<LocalPlayerHeightOffTerrainAvg>k__BackingField", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__RealTreeIntensity_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<RealTreeIntensity>k__BackingField", ::GlobalNamespace::FootstepSound*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::FootstepSound::getStaticF__RealTreeIntensity_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<RealTreeIntensity>k__BackingField", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__WindyPositions_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*, "<WindyPositions>k__BackingField", ::GlobalNamespace::FootstepSound*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>* GlobalNamespace::FootstepSound::getStaticF__WindyPositions_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*, "<WindyPositions>k__BackingField", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__WindyTimeScalerLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*, "<WindyTimeScalerLookup>k__BackingField", ::GlobalNamespace::FootstepSound*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>* GlobalNamespace::FootstepSound::getStaticF__WindyTimeScalerLookup_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*, "<WindyTimeScalerLookup>k__BackingField", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__LocalTerrain_k__BackingField(::UnityW<::UnityEngine::Terrain>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Terrain>, "<LocalTerrain>k__BackingField", ::GlobalNamespace::FootstepSound*>(std::forward<::UnityW<::UnityEngine::Terrain>>(value));
}
inline ::UnityW<::UnityEngine::Terrain> GlobalNamespace::FootstepSound::getStaticF__LocalTerrain_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Terrain>, "<LocalTerrain>k__BackingField", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__LocalStreamTexture_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "<LocalStreamTexture>k__BackingField", ::GlobalNamespace::FootstepSound*>(std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::FootstepSound::getStaticF__LocalStreamTexture_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "<LocalStreamTexture>k__BackingField", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__DepthMode_k__BackingField(::GlobalNamespace::WaterDepthSampleData_GetDepthMode  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::WaterDepthSampleData_GetDepthMode, "<DepthMode>k__BackingField", ::GlobalNamespace::FootstepSound*>(std::forward<::GlobalNamespace::WaterDepthSampleData_GetDepthMode>(value));
}
inline ::GlobalNamespace::WaterDepthSampleData_GetDepthMode GlobalNamespace::FootstepSound::getStaticF__DepthMode_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::WaterDepthSampleData_GetDepthMode, "<DepthMode>k__BackingField", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__detailAudioCullingContainer(::GlobalNamespace::VegetationAudioCullingContainer*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::VegetationAudioCullingContainer*, "_detailAudioCullingContainer", ::GlobalNamespace::FootstepSound*>(std::forward<::GlobalNamespace::VegetationAudioCullingContainer*>(value));
}
inline ::GlobalNamespace::VegetationAudioCullingContainer* GlobalNamespace::FootstepSound::getStaticF__detailAudioCullingContainer()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::VegetationAudioCullingContainer*, "_detailAudioCullingContainer", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__treeAudioCullingContainer(::GlobalNamespace::VegetationAudioCullingContainer*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::VegetationAudioCullingContainer*, "_treeAudioCullingContainer", ::GlobalNamespace::FootstepSound*>(std::forward<::GlobalNamespace::VegetationAudioCullingContainer*>(value));
}
inline ::GlobalNamespace::VegetationAudioCullingContainer* GlobalNamespace::FootstepSound::getStaticF__treeAudioCullingContainer()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::VegetationAudioCullingContainer*, "_treeAudioCullingContainer", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__logAudioCullingContainer(::GlobalNamespace::VegetationAudioCullingContainer*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::VegetationAudioCullingContainer*, "_logAudioCullingContainer", ::GlobalNamespace::FootstepSound*>(std::forward<::GlobalNamespace::VegetationAudioCullingContainer*>(value));
}
inline ::GlobalNamespace::VegetationAudioCullingContainer* GlobalNamespace::FootstepSound::getStaticF__logAudioCullingContainer()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::VegetationAudioCullingContainer*, "_logAudioCullingContainer", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::setStaticF__remotePlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*, "_remotePlayers", ::GlobalNamespace::FootstepSound*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>* GlobalNamespace::FootstepSound::getStaticF__remotePlayers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*, "_remotePlayers", ::GlobalNamespace::FootstepSound*>();
}
inline void GlobalNamespace::FootstepSound::add_OnJump(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"add_OnJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FootstepSound::remove_OnJump(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"remove_OnJump", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FootstepSound::add_OnSit(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"add_OnSit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FootstepSound::remove_OnSit(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"remove_OnSit", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FootstepSound::add_OnStand(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"add_OnStand", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FootstepSound::remove_OnStand(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"remove_OnStand", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FootstepSound::add_OnLand(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"add_OnLand", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FootstepSound::remove_OnLand(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"remove_OnLand", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::FootstepSound::get_IndoornessVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_IndoornessVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioVolumeStruct GlobalNamespace::FootstepSound::get_IndoornessVolStruct()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_IndoornessVolStruct", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolumeStruct>(this, ___internal_method);
}
inline bool GlobalNamespace::FootstepSound::get_CanSlide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_CanSlide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> GlobalNamespace::FootstepSound::get_LastHitCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_LastHitCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_LastHitCollider(::UnityEngine::Collider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_LastHitCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::FootstepSound::get_IsGrounded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_IsGrounded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::FootstepSound::get_InWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_InWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::FootstepSound::get_WaterVolRealtime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterVolRealtime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_WaterVolRealtime(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterVolRealtime", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::FootstepSound::get_WaterIntensityVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterIntensityVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_WaterIntensityVol(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterIntensityVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::FootstepSound::get_WaterFootstepFadeVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterFootstepFadeVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_WaterFootstepFadeVol(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterFootstepFadeVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::FootstepSound::get_WaterFoleyFadeVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterFoleyFadeVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_WaterFoleyFadeVol(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterFoleyFadeVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::FootstepSound::get_WaterMoveLeftVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterMoveLeftVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_WaterMoveLeftVol(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterMoveLeftVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::FootstepSound::get_WaterMoveRightVol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterMoveRightVol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_WaterMoveRightVol(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WaterMoveRightVol", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolumeStruct GlobalNamespace::FootstepSound::get_WaterVolStruct()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterVolStruct", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolumeStruct>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioVolumeStruct GlobalNamespace::FootstepSound::get_WaterFootstepFadeVolStruct()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterFootstepFadeVolStruct", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolumeStruct>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioVolumeStruct GlobalNamespace::FootstepSound::get_WaterFoleyFadeVolStruct()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WaterFoleyFadeVolStruct", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolumeStruct>(this, ___internal_method);
}
inline int32_t GlobalNamespace::FootstepSound::get_TreeDensityCountLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_TreeDensityCountLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::FootstepSound::get_LocalPlayerHeightOffTerrain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_LocalPlayerHeightOffTerrain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_LocalPlayerHeightOffTerrain(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_LocalPlayerHeightOffTerrain", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t GlobalNamespace::FootstepSound::get_LocalPlayerHeightOffTerrainAvg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_LocalPlayerHeightOffTerrainAvg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_LocalPlayerHeightOffTerrainAvg(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_LocalPlayerHeightOffTerrainAvg", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t GlobalNamespace::FootstepSound::get_RealTreeIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_RealTreeIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_RealTreeIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_RealTreeIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>* GlobalNamespace::FootstepSound::get_WindyPositions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WindyPositions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_WindyPositions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WindyPositions", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>* GlobalNamespace::FootstepSound::get_WindyTimeScalerLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_WindyTimeScalerLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_WindyTimeScalerLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_WindyTimeScalerLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Terrain> GlobalNamespace::FootstepSound::get_LocalTerrain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_LocalTerrain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Terrain>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_LocalTerrain(::UnityEngine::Terrain*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_LocalTerrain", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::FootstepSound::get_LocalStreamTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_LocalStreamTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_LocalStreamTexture(::UnityEngine::Texture2D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_LocalStreamTexture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::WaterDepthSampleData_GetDepthMode GlobalNamespace::FootstepSound::get_DepthMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_DepthMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WaterDepthSampleData_GetDepthMode>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_DepthMode(::GlobalNamespace::WaterDepthSampleData_GetDepthMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_DepthMode", {}, {::i2c::type_of<::GlobalNamespace::WaterDepthSampleData_GetDepthMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::FootstepSound::ResetStatic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"ResetStatic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::FootstepSound::get_GUIDebugMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_GUIDebugMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::set_GUIDebugMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"set_GUIDebugMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FootstepSound::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::FootstepSound::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::InitializeCullingContainers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"InitializeCullingContainers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::DisposeCullingContainers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DisposeCullingContainers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::OnQualityLevelChanged(int32_t  qualityLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"OnQualityLevelChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityLevel);
}
inline void GlobalNamespace::FootstepSound::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::ScheduleJobs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"ScheduleJobs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::AudioUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::FootstepSound::AudioFixedUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::FootstepSound::AudioLateUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::FootstepSound::AudioSlowUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::FootstepSound::DrawGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DrawGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::UpdateFootsteps(::by_ref<bool>  newDetail, ::by_ref<bool>  newTree, ::by_ref<bool>  bottomHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"UpdateFootsteps", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newDetail, newTree, bottomHit);
}
inline bool GlobalNamespace::FootstepSound::QueryForDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"QueryForDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::FootstepSound::QueryForTrees()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"QueryForTrees", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::FootstepSound::QueryForLogs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"QueryForLogs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::UpdateWindyPositions(int32_t  frameCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"UpdateWindyPositions", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameCount);
}
inline void GlobalNamespace::FootstepSound::UpdateWaterValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"UpdateWaterValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::UpdateWaterSounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"UpdateWaterSounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::DoWalkRunLand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DoWalkRunLand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::DoJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DoJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::DoSit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DoSit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::DoStand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DoStand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::DoSlide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"DoSlide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FootstepSound::SlideGetX(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"SlideGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline void GlobalNamespace::FootstepSound::UpdateSlideVolume(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"UpdateSlideVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::FootstepSound::StopSlideSounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"StopSlideSounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::PlaySlideLandSound(float_t  deltaVel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"PlaySlideLandSound", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaVel);
}
inline float_t GlobalNamespace::FootstepSound::GetMovingVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"GetMovingVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::FootstepSound::HitCollidersContain(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"HitCollidersContain", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collider);
}
inline void GlobalNamespace::FootstepSound::PlayTreeAndDetailSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"PlayTreeAndDetailSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::StopDetailSounds(float_t  fadeOutOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"StopDetailSounds", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fadeOutOverride);
}
inline void GlobalNamespace::FootstepSound::StopTreeSounds(float_t  fadeOutOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"StopTreeSounds", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fadeOutOverride);
}
inline float_t GlobalNamespace::FootstepSound::GetWaterIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"GetWaterIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::FootstepSound::WaterLeftHandGetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"WaterLeftHandGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline bool GlobalNamespace::FootstepSound::WaterRightHandGetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"WaterRightHandGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline bool GlobalNamespace::FootstepSound::WaterCenterMoveGetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"WaterCenterMoveGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::FootstepSound::TryPlayWaterSoundForKick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"TryPlayWaterSoundForKick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FootstepSound::_UpdateFootsteps_b__211_0(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateFootsteps>b__211_0", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::FootstepSound::_UpdateFootsteps_b__211_1(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateFootsteps>b__211_1", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::FootstepSound::_UpdateFootsteps_b__211_2(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateFootsteps>b__211_2", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::FootstepSound::_UpdateFootsteps_b__211_3(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateFootsteps>b__211_3", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::FootstepSound::_UpdateWaterSounds_g___clearRef_217_0(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateWaterSounds>g___clearRef|217_0", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f, c);
}
inline void GlobalNamespace::FootstepSound::_UpdateWaterSounds_g___clearRef_217_1(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateWaterSounds>g___clearRef|217_1", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f, c);
}
inline void GlobalNamespace::FootstepSound::_UpdateWaterSounds_g___clearRef_217_2(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateWaterSounds>g___clearRef|217_2", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f, c);
}
inline void GlobalNamespace::FootstepSound::_UpdateWaterSounds_g___clearRef_217_3(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<UpdateWaterSounds>g___clearRef|217_3", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f, c);
}
inline void GlobalNamespace::FootstepSound::_DoWalkRunLand_g___resetLandingFlag_218_0(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<DoWalkRunLand>g___resetLandingFlag|218_0", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f, c);
}
inline void GlobalNamespace::FootstepSound::_DoSit_g___resetSittingFlag_220_0(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<DoSit>g___resetSittingFlag|220_0", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f, c);
}
inline void GlobalNamespace::FootstepSound::_DoStand_g___switchStanding_221_0(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<DoStand>g___switchStanding|221_0", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f, c);
}
inline void GlobalNamespace::FootstepSound::_PlayTreeAndDetailSound_g___clearRef_229_0(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<PlayTreeAndDetailSound>g___clearRef|229_0", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f, c);
}
inline void GlobalNamespace::FootstepSound::_PlayTreeAndDetailSound_g___clearRef_229_1(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FootstepSound*>(),
                        {"<PlayTreeAndDetailSound>g___clearRef|229_1", {}, {::i2c::type_of<::GlobalNamespace::FootstepSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f, c);
}
inline ::GlobalNamespace::FootstepSound* GlobalNamespace::FootstepSound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FootstepSound*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr  GlobalNamespace::FootstepSound::operator ::GlobalNamespace::IAudioGUI*() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* GlobalNamespace::FootstepSound::i___GlobalNamespace__IAudioGUI() noexcept {
return static_cast<::GlobalNamespace::IAudioGUI*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr  GlobalNamespace::FootstepSound::operator ::GlobalNamespace::IAudioBehaviour*() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* GlobalNamespace::FootstepSound::i___GlobalNamespace__IAudioBehaviour() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FootstepSound::FootstepSound()   {
}
