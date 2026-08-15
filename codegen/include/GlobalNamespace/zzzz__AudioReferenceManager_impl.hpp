#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioReferenceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioReferenceManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__IVirtualizable_def.hpp"
#include "GlobalNamespace/zzzz__SoundBank_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.get_LoadedSoundBanks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>* (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::get_LoadedSoundBanks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_LoadedSoundBanks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.get_ClipsLoadedBySoundBanksCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>* (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::get_ClipsLoadedBySoundBanksCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_ClipsLoadedBySoundBanksCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.get_ClipsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>* (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::get_ClipsPlaying)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_ClipsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.get_ClipsLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::get_ClipsLoaded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_ClipsLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.get_LoadedClipIdleTimeLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>* (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::get_LoadedClipIdleTimeLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_LoadedClipIdleTimeLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.get_VoicesLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>* (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::get_VoicesLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_VoicesLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.get_AssetPlayTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>* (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::get_AssetPlayTimes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_AssetPlayTimes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.get_AnyClipLoading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::get_AnyClipLoading)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803cf3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_AnyClipLoading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.get_UnLoadThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::AudioReferenceManager::get_UnLoadThreshold)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18048f660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_UnLoadThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18048f650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18048e710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::AudioLateUpdate)> {
  constexpr static std::size_t size = 0x9c0;
  constexpr static std::size_t addrs = 0x18048d9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"AudioLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.AddClipPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioReferenceManager::AddClipPlaying)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18048d900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"AddClipPlaying", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.RemoveClipPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioReferenceManager::RemoveClipPlaying)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18048e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"RemoveClipPlaying", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.CheckIfClipInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioReferenceManager::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioReferenceManager::CheckIfClipInUse)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18048e3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"CheckIfClipInUse", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.ChangeUnloadTimerThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::AudioReferenceManager::ChangeUnloadTimerThreshold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18048e370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"ChangeUnloadTimerThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.LoadSoundBank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)(::GlobalNamespace::SoundBank*)>(&::GlobalNamespace::AudioReferenceManager::LoadSoundBank)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18048e720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"LoadSoundBank", {}, {::i2c::type_of<::GlobalNamespace::SoundBank*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.UnloadSoundBank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)(::GlobalNamespace::SoundBank*)>(&::GlobalNamespace::AudioReferenceManager::UnloadSoundBank)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18048ebc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"UnloadSoundBank", {}, {::i2c::type_of<::GlobalNamespace::SoundBank*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.IncreaseClipSoundBankCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioReferenceManager::IncreaseClipSoundBankCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18048e680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"IncreaseClipSoundBankCount", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.DecreaseClipSoundBankCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioReferenceManager::DecreaseClipSoundBankCount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18048e4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"DecreaseClipSoundBankCount", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.RegisterVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)(::GlobalNamespace::AudioAsset*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioReferenceManager::RegisterVoice)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18048e880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"RegisterVoice", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.DeregisterVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)(::GlobalNamespace::AudioAsset*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioReferenceManager::DeregisterVoice)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18048e5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"DeregisterVoice", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.GetVoiceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioReferenceManager::*)(::GlobalNamespace::AudioAsset*, ::by_ref<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>)>(&::GlobalNamespace::AudioReferenceManager::GetVoiceCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18048e630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"GetVoiceCount", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.CheckIfCooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioReferenceManager::*)(::GlobalNamespace::IVirtualizable*, float_t)>(&::GlobalNamespace::AudioReferenceManager::CheckIfCooldown)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18048e410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"CheckIfCooldown", {}, {::i2c::type_of<::GlobalNamespace::IVirtualizable*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.RegisterVirtualizableAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)(::GlobalNamespace::IVirtualizable*)>(&::GlobalNamespace::AudioReferenceManager::RegisterVirtualizableAsset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18048e850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"RegisterVirtualizableAsset", {}, {::i2c::type_of<::GlobalNamespace::IVirtualizable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.VirtualizeTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioReferenceManager::*)(::GlobalNamespace::IVirtualizable*, float_t)>(&::GlobalNamespace::AudioReferenceManager::VirtualizeTest)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18048ed40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"VirtualizeTest", {}, {::i2c::type_of<::GlobalNamespace::IVirtualizable*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.VoiceLimitingTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)(::GlobalNamespace::IVirtualizable*, float_t, bool, ::by_ref<bool>, ::by_ref<::GlobalNamespace::VoiceLimitBehaviorType>, bool)>(&::GlobalNamespace::AudioReferenceManager::VoiceLimitingTest)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x18048ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"VoiceLimitingTest", {}, {::i2c::type_of<::GlobalNamespace::IVirtualizable*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VoiceLimitBehaviorType>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager.SortDescendingByAttenuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*)>(&::GlobalNamespace::AudioReferenceManager::SortDescendingByAttenuation)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18048eab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"SortDescendingByAttenuation", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioReferenceManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioReferenceManager::*)()>(&::GlobalNamespace::AudioReferenceManager::_ctor)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18048f3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__loadedSoundBanks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedSoundBanks;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__loadedSoundBanks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedSoundBanks;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__loadedSoundBanks(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadedSoundBanks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__clipsLoadedBySoundBanksCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipsLoadedBySoundBanksCount;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__clipsLoadedBySoundBanksCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipsLoadedBySoundBanksCount;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__clipsLoadedBySoundBanksCount(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipsLoadedBySoundBanksCount = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__clipsPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipsPlaying;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__clipsPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipsPlaying;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__clipsPlaying(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipsPlaying = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__clipsLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipsLoaded;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__clipsLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipsLoaded;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__clipsLoaded(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipsLoaded = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__loadedClipIdleTimeLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedClipIdleTimeLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__loadedClipIdleTimeLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedClipIdleTimeLookup;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__loadedClipIdleTimeLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadedClipIdleTimeLookup = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__clipsToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipsToRemove;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__clipsToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipsToRemove;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__clipsToRemove(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipsToRemove = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__voicesLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voicesLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__voicesLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voicesLookup;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__voicesLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voicesLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__assetPlayTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetPlayTimes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__assetPlayTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetPlayTimes;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__assetPlayTimes(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____assetPlayTimes = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__virtualizableAssets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____virtualizableAssets;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__virtualizableAssets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____virtualizableAssets;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__virtualizableAssets(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____virtualizableAssets = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__virtualizableToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____virtualizableToRemove;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__virtualizableToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____virtualizableToRemove;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__virtualizableToRemove(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IVirtualizable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____virtualizableToRemove = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__tempSortingList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempSortingList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__tempSortingList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempSortingList;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__tempSortingList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempSortingList = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__toWakeUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toWakeUp;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__toWakeUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toWakeUp;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__toWakeUp(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toWakeUp = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__toHibernate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toHibernate;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__toHibernate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toHibernate;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__toHibernate(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toHibernate = value;
}
constexpr bool& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__anyClipLoading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anyClipLoading;
}
constexpr bool const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__anyClipLoading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anyClipLoading;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__anyClipLoading(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____anyClipLoading = value;
}
constexpr bool& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::AudioReferenceManager::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::AudioReferenceManager::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
inline void GlobalNamespace::AudioReferenceManager::setStaticF_unloadThreshold(float_t  value)  {
::cordl_internals::setStaticField<float_t, "unloadThreshold", ::GlobalNamespace::AudioReferenceManager*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::AudioReferenceManager::getStaticF_unloadThreshold()  {
return ::cordl_internals::getStaticField<float_t, "unloadThreshold", ::GlobalNamespace::AudioReferenceManager*>();
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>* GlobalNamespace::AudioReferenceManager::get_LoadedSoundBanks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_LoadedSoundBanks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>* GlobalNamespace::AudioReferenceManager::get_ClipsLoadedBySoundBanksCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_ClipsLoadedBySoundBanksCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>* GlobalNamespace::AudioReferenceManager::get_ClipsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_ClipsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,int32_t>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioReferenceManager::get_ClipsLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_ClipsLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>* GlobalNamespace::AudioReferenceManager::get_LoadedClipIdleTimeLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_LoadedClipIdleTimeLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::AudioClip>,float_t>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>* GlobalNamespace::AudioReferenceManager::get_VoicesLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_VoicesLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>* GlobalNamespace::AudioReferenceManager::get_AssetPlayTimes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_AssetPlayTimes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioAsset>,float_t>*>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioReferenceManager::get_AnyClipLoading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_AnyClipLoading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioReferenceManager::get_UnLoadThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_UnLoadThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::AudioReferenceManager::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioReferenceManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioReferenceManager::AudioLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"AudioLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioReferenceManager::AddClipPlaying(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"AddClipPlaying", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void GlobalNamespace::AudioReferenceManager::RemoveClipPlaying(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"RemoveClipPlaying", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline bool GlobalNamespace::AudioReferenceManager::CheckIfClipInUse(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"CheckIfClipInUse", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clip);
}
inline void GlobalNamespace::AudioReferenceManager::ChangeUnloadTimerThreshold(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"ChangeUnloadTimerThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, time);
}
inline void GlobalNamespace::AudioReferenceManager::LoadSoundBank(::GlobalNamespace::SoundBank*  bank)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"LoadSoundBank", {}, {::i2c::type_of<::GlobalNamespace::SoundBank*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bank);
}
inline void GlobalNamespace::AudioReferenceManager::UnloadSoundBank(::GlobalNamespace::SoundBank*  bank)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"UnloadSoundBank", {}, {::i2c::type_of<::GlobalNamespace::SoundBank*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bank);
}
inline void GlobalNamespace::AudioReferenceManager::IncreaseClipSoundBankCount(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"IncreaseClipSoundBankCount", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void GlobalNamespace::AudioReferenceManager::DecreaseClipSoundBankCount(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"DecreaseClipSoundBankCount", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void GlobalNamespace::AudioReferenceManager::RegisterVoice(::GlobalNamespace::AudioAsset*  asset, ::GlobalNamespace::AudioSourceController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"RegisterVoice", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset, controller);
}
inline void GlobalNamespace::AudioReferenceManager::DeregisterVoice(::GlobalNamespace::AudioAsset*  asset, ::GlobalNamespace::AudioSourceController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"DeregisterVoice", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset, controller);
}
inline int32_t GlobalNamespace::AudioReferenceManager::GetVoiceCount(::GlobalNamespace::AudioAsset*  asset, ::by_ref<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>  voiceSet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"GetVoiceCount", {}, {::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asset, voiceSet);
}
inline bool GlobalNamespace::AudioReferenceManager::CheckIfCooldown(::GlobalNamespace::IVirtualizable*  virtualizable, float_t  newTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"CheckIfCooldown", {}, {::i2c::type_of<::GlobalNamespace::IVirtualizable*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, virtualizable, newTime);
}
inline void GlobalNamespace::AudioReferenceManager::RegisterVirtualizableAsset(::GlobalNamespace::IVirtualizable*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"RegisterVirtualizableAsset", {}, {::i2c::type_of<::GlobalNamespace::IVirtualizable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset);
}
inline bool GlobalNamespace::AudioReferenceManager::VirtualizeTest(::GlobalNamespace::IVirtualizable*  virtualizable, float_t  attenuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"VirtualizeTest", {}, {::i2c::type_of<::GlobalNamespace::IVirtualizable*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, virtualizable, attenuation);
}
inline void GlobalNamespace::AudioReferenceManager::VoiceLimitingTest(::GlobalNamespace::IVirtualizable*  virtualizable, float_t  attenuation, bool  loop, ::by_ref<bool>  getSource, ::by_ref<::GlobalNamespace::VoiceLimitBehaviorType>  outBehavior, bool  testOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"VoiceLimitingTest", {}, {::i2c::type_of<::GlobalNamespace::IVirtualizable*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VoiceLimitBehaviorType>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, virtualizable, attenuation, loop, getSource, outBehavior, testOnly);
}
inline void GlobalNamespace::AudioReferenceManager::SortDescendingByAttenuation(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {"SortDescendingByAttenuation", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
inline void GlobalNamespace::AudioReferenceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioReferenceManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioReferenceManager* GlobalNamespace::AudioReferenceManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioReferenceManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioReferenceManager::AudioReferenceManager()   {
}
