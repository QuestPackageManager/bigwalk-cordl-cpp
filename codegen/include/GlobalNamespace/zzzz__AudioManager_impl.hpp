#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioManager.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioBasicReverb_def.hpp"
#include "GlobalNamespace/zzzz__AudioClock_def.hpp"
#include "GlobalNamespace/zzzz__AudioConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioDynamicReverb_def.hpp"
#include "GlobalNamespace/zzzz__AudioGUI3DDebugText_def.hpp"
#include "GlobalNamespace/zzzz__AudioGUI_def.hpp"
#include "GlobalNamespace/zzzz__AudioListenerController_def.hpp"
#include "GlobalNamespace/zzzz__AudioLogger_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioPool_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioReferenceManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioSettingsGroupType_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioUpdateType_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__FuncOneOut_3_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__IAudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__ReadOnlyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__SoundBank_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioManager> (*)()>(&::GlobalNamespace::AudioManager::get_Instance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180316150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioManager*)>(&::GlobalNamespace::AudioManager::set_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180482230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::AudioManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_UpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_UpdateSet)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180481fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_UpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_FixedUpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_FixedUpdateSet)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180481a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_FixedUpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_LateUpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_LateUpdateSet)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180481a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_LateUpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_SlowUpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_SlowUpdateSet)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180481bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_SlowUpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_ToRemoveUpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_ToRemoveUpdateSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180481f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToRemoveUpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_ToRemoveFixedUpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_ToRemoveFixedUpdateSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180481e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToRemoveFixedUpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_ToRemoveLateUpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_ToRemoveLateUpdateSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180481e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToRemoveLateUpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_ToRemoveSlowUpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_ToRemoveSlowUpdateSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180481f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToRemoveSlowUpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_ToAddUpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_ToAddUpdateSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180481db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToAddUpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_ToAddFixedUpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_ToAddFixedUpdateSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180481c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToAddFixedUpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_ToAddLateUpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_ToAddLateUpdateSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180481cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToAddLateUpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_ToAddSlowUpdateSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_ToAddSlowUpdateSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180481d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToAddSlowUpdateSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_ListenerController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioListenerController> (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_ListenerController)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ListenerController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_ListenerController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioListenerController*)>(&::GlobalNamespace::AudioManager::set_ListenerController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_ListenerController", {}, {::i2c::type_of<::GlobalNamespace::AudioListenerController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_AudioPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioPool> (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_AudioPool)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_AudioPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioPool*)>(&::GlobalNamespace::AudioManager::set_AudioPool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioPool", {}, {::i2c::type_of<::GlobalNamespace::AudioPool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_AudioConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioConfig> (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_AudioConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_AudioConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioConfig*)>(&::GlobalNamespace::AudioManager::set_AudioConfig)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803371b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioConfig", {}, {::i2c::type_of<::GlobalNamespace::AudioConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_DefaultRTPCXProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioRTPCXProvider> (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_DefaultRTPCXProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_DefaultRTPCXProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_DefaultRTPCXProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioRTPCXProvider*)>(&::GlobalNamespace::AudioManager::set_DefaultRTPCXProvider)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_DefaultRTPCXProvider", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCXProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_AudioClock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioClock* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_AudioClock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioClock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_AudioClock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioClock*)>(&::GlobalNamespace::AudioManager::set_AudioClock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioClock", {}, {::i2c::type_of<::GlobalNamespace::AudioClock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_AudioReferenceManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioReferenceManager* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_AudioReferenceManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioReferenceManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_AudioReferenceManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioReferenceManager*)>(&::GlobalNamespace::AudioManager::set_AudioReferenceManager)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioReferenceManager", {}, {::i2c::type_of<::GlobalNamespace::AudioReferenceManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_AudioDynamicReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioDynamicReverb> (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_AudioDynamicReverb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioDynamicReverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_AudioDynamicReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioDynamicReverb*)>(&::GlobalNamespace::AudioManager::set_AudioDynamicReverb)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803371d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioDynamicReverb", {}, {::i2c::type_of<::GlobalNamespace::AudioDynamicReverb*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_AudioBasicReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioBasicReverb> (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_AudioBasicReverb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioBasicReverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_AudioBasicReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioBasicReverb*)>(&::GlobalNamespace::AudioManager::set_AudioBasicReverb)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180474d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioBasicReverb", {}, {::i2c::type_of<::GlobalNamespace::AudioBasicReverb*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_GloablSoundBank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SoundBank> (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_GloablSoundBank)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_GloablSoundBank", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_GloablSoundBank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::SoundBank*)>(&::GlobalNamespace::AudioManager::set_GloablSoundBank)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180474cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_GloablSoundBank", {}, {::i2c::type_of<::GlobalNamespace::SoundBank*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_AudioLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioLogger* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_AudioLogger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioLogger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_AudioLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioLogger*)>(&::GlobalNamespace::AudioManager::set_AudioLogger)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180474cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioLogger", {}, {::i2c::type_of<::GlobalNamespace::AudioLogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_AudioOcclusionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioOcclusionManager> (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_AudioOcclusionManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioOcclusionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_AudioOcclusionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioOcclusionManager*)>(&::GlobalNamespace::AudioManager::set_AudioOcclusionManager)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180482210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioOcclusionManager", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_AudioGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioGUI> (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_AudioGUI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803459e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_AudioGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioGUI*)>(&::GlobalNamespace::AudioManager::set_AudioGUI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180345f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioGUI", {}, {::i2c::type_of<::GlobalNamespace::AudioGUI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_AudioGUI3DDebugText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioGUI3DDebugText* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_AudioGUI3DDebugText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioGUI3DDebugText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_AudioGUI3DDebugText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioGUI3DDebugText*)>(&::GlobalNamespace::AudioManager::set_AudioGUI3DDebugText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804821f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioGUI3DDebugText", {}, {::i2c::type_of<::GlobalNamespace::AudioGUI3DDebugText*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_MasterVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_MasterVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_MasterVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_MasterVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioManager::set_MasterVolume)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804822e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_MasterVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_SFXVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_SFXVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_SFXVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_SFXVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioManager::set_SFXVolume)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180482340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_SFXVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_MusicVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_MusicVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_MusicVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_MusicVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioManager::set_MusicVolume)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180482300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_MusicVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_VOVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_VOVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_VOVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_VOVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioManager::set_VOVolume)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803461c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_VOVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_UIVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_UIVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_UIVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_UIVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioManager::set_UIVolume)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180346160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_UIVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_EnvironmentVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_EnvironmentVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_EnvironmentVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_EnvironmentVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioManager::set_EnvironmentVolume)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180346140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_EnvironmentVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_FoleyVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_FoleyVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_FoleyVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_FoleyVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioManager::set_FoleyVolume)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180346120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_FoleyVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_GlobalMuteVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_GlobalMuteVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180345c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_GlobalMuteVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_GlobalMuteVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioManager::set_GlobalMuteVolume)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180346180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_GlobalMuteVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_SlowUpdateTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_SlowUpdateTimer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_SlowUpdateTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_SlowUpdateChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_SlowUpdateChunks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_SlowUpdateChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_ListenerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::GlobalNamespace::AudioManager::get_ListenerPosition)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180481ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ListenerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_ListenerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::AudioManager::set_ListenerPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180482280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_ListenerPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_ActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_ActiveCamera)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180481900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ActiveCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_ActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::AudioManager::set_ActiveCamera)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180482190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_ActiveCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_PlayerTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_PlayerTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180481bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_PlayerTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_PlayerTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::AudioManager::set_PlayerTransform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180482320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_PlayerTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_CameraCenterRayFloorIntersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_CameraCenterRayFloorIntersect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180481950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_CameraCenterRayFloorIntersect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.add_OnCameraChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::System::Action_1<::UnityW<::UnityEngine::Camera>>*)>(&::GlobalNamespace::AudioManager::add_OnCameraChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180481860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"add_OnCameraChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.remove_OnCameraChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::System::Action_1<::UnityW<::UnityEngine::Camera>>*)>(&::GlobalNamespace::AudioManager::remove_OnCameraChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804820f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"remove_OnCameraChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.add_OnAudioManagerInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::AudioManager::add_OnAudioManagerInitialized)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804817b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"add_OnAudioManagerInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.remove_OnAudioManagerInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::AudioManager::remove_OnAudioManagerInitialized)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180482040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"remove_OnAudioManagerInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_DSPTimeMoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_DSPTimeMoved)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804819f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_DSPTimeMoved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_TempVolumeList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* (*)()>(&::GlobalNamespace::AudioManager::get_TempVolumeList)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180329d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_TempVolumeList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_TempVolumeList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*)>(&::GlobalNamespace::AudioManager::set_TempVolumeList)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180482360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_TempVolumeList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::Update)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x180480f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.SlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(int32_t)>(&::GlobalNamespace::AudioManager::SlowUpdate)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x180480c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"SlowUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::FixedUpdate)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18047d580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::LateUpdate)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x18047eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::OnDestroy)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18047f8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.OnEditorApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(bool)>(&::GlobalNamespace::AudioManager::OnEditorApplicationFocus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18047fa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnEditorApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(bool)>(&::GlobalNamespace::AudioManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18047f590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.OnFocusChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(bool)>(&::GlobalNamespace::AudioManager::OnFocusChange)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x18047fab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnFocusChange", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioConfig*)>(&::GlobalNamespace::AudioManager::Initialize)> {
  constexpr static std::size_t size = 0x1250;
  constexpr static std::size_t addrs = 0x18047da10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::AudioConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.RegisterBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioUpdateType, ::GlobalNamespace::IAudioBehaviour*)>(&::GlobalNamespace::AudioManager::RegisterBehaviour)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x180480870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"RegisterBehaviour", {}, {::i2c::type_of<::GlobalNamespace::AudioUpdateType>(), ::i2c::type_of<::GlobalNamespace::IAudioBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.DeregisterBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioUpdateType, ::GlobalNamespace::IAudioBehaviour*)>(&::GlobalNamespace::AudioManager::DeregisterBehaviour)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x18047d1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"DeregisterBehaviour", {}, {::i2c::type_of<::GlobalNamespace::AudioUpdateType>(), ::i2c::type_of<::GlobalNamespace::IAudioBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.ClearAllSets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::ClearAllSets)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18047d0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"ClearAllSets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceController> (*)(::GlobalNamespace::SoundCue*, ::UnityEngine::Vector3, ::UnityEngine::Object*, ::GlobalNamespace::IAudioRTPCXProvider*, bool, ::UnityEngine::Transform*, double_t, float_t, ::UnityEngine::AudioClip*, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*, ::GlobalNamespace::VoiceLimitBehaviorType)>(&::GlobalNamespace::AudioManager::Play)> {
  constexpr static std::size_t size = 0xa80;
  constexpr static std::size_t addrs = 0x18047fdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"Play", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(), ::i2c::type_of<::GlobalNamespace::VoiceLimitBehaviorType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.ChangeAudioSettingsVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioSettingsGroupType, float_t)>(&::GlobalNamespace::AudioManager::ChangeAudioSettingsVolume)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18047ce10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"ChangeAudioSettingsVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioSettingsGroupType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.GetAudioSettingsVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (*)(::GlobalNamespace::AudioSettingsGroupType)>(&::GlobalNamespace::AudioManager::GetAudioSettingsVolume)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18047d870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"GetAudioSettingsVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioSettingsGroupType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::GlobalNamespace::AudioAsset*, ::UnityEngine::Object*, bool, ::UnityEngine::Color)>(&::GlobalNamespace::AudioManager::Log)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.OnAudioDeviceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::AudioManager::OnAudioDeviceChange)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x18047f5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnAudioDeviceChange", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.ChangeSpeakerMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::UnityEngine::AudioSpeakerMode)>(&::GlobalNamespace::AudioManager::ChangeSpeakerMode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18047d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"ChangeSpeakerMode", {}, {::i2c::type_of<::UnityEngine::AudioSpeakerMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.KillAllSounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::KillAllSounds)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18047ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"KillAllSounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.OnMovingTooFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::AudioManager::OnMovingTooFast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18047fd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnMovingTooFast", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::_ctor)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x180481360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__updateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__updateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__updateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlyUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyUpdateSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__fixedUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixedUpdateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__fixedUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixedUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__fixedUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fixedUpdateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyFixedUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyFixedUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyFixedUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyFixedUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlyFixedUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyFixedUpdateSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__lateUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lateUpdateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__lateUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lateUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__lateUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lateUpdateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyLateUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyLateUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyLateUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyLateUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlyLateUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyLateUpdateSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__slowUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slowUpdateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlySlowUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlySlowUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlySlowUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlySlowUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlySlowUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlySlowUpdateSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1_Enumerator<::GlobalNamespace::IAudioBehaviour*>& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateEnumerator;
}
constexpr ::System::Collections::Generic::HashSet_1_Enumerator<::GlobalNamespace::IAudioBehaviour*> const& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateEnumerator;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__slowUpdateEnumerator(::System::Collections::Generic::HashSet_1_Enumerator<::GlobalNamespace::IAudioBehaviour*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slowUpdateEnumerator = value;
}
constexpr int32_t& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateIterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateIterations;
}
constexpr int32_t const& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateIterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateIterations;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__slowUpdateIterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slowUpdateIterations = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__toRemoveUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemoveUpdateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__toRemoveUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemoveUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__toRemoveUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toRemoveUpdateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToRemoveUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToRemoveUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToRemoveUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToRemoveUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlyToRemoveUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyToRemoveUpdateSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__toRemoveFixedUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemoveFixedUpdateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__toRemoveFixedUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemoveFixedUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__toRemoveFixedUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toRemoveFixedUpdateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToRemoveFixedUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToRemoveFixedUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToRemoveFixedUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToRemoveFixedUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlyToRemoveFixedUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyToRemoveFixedUpdateSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__toRemoveLateUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemoveLateUpdateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__toRemoveLateUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemoveLateUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__toRemoveLateUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toRemoveLateUpdateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToRemoveLateUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToRemoveLateUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToRemoveLateUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToRemoveLateUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlyToRemoveLateUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyToRemoveLateUpdateSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__toRemoveSlowUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemoveSlowUpdateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__toRemoveSlowUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toRemoveSlowUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__toRemoveSlowUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toRemoveSlowUpdateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToRemoveSlowUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToRemoveSlowUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToRemoveSlowUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToRemoveSlowUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlyToRemoveSlowUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyToRemoveSlowUpdateSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__toAddUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toAddUpdateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__toAddUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toAddUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__toAddUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toAddUpdateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToAddUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToAddUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToAddUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToAddUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlyToAddUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyToAddUpdateSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__toAddFixedUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toAddFixedUpdateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__toAddFixedUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toAddFixedUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__toAddFixedUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toAddFixedUpdateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToAddFixedUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToAddFixedUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToAddFixedUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToAddFixedUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlyToAddFixedUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyToAddFixedUpdateSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__toAddLateUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toAddLateUpdateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__toAddLateUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toAddLateUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__toAddLateUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toAddLateUpdateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToAddLateUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToAddLateUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToAddLateUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToAddLateUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlyToAddLateUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyToAddLateUpdateSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__toAddSlowUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toAddSlowUpdateSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__toAddSlowUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toAddSlowUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__toAddSlowUpdateSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toAddSlowUpdateSet = value;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToAddSlowUpdateSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToAddSlowUpdateSet;
}
constexpr ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* const& GlobalNamespace::AudioManager::__cordl_internal_get__readonlyToAddSlowUpdateSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readonlyToAddSlowUpdateSet;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__readonlyToAddSlowUpdateSet(::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readonlyToAddSlowUpdateSet = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& GlobalNamespace::AudioManager::__cordl_internal_get__outOfFocusPausedASCs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outOfFocusPausedASCs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& GlobalNamespace::AudioManager::__cordl_internal_get__outOfFocusPausedASCs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outOfFocusPausedASCs;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__outOfFocusPausedASCs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outOfFocusPausedASCs = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioListenerController>& GlobalNamespace::AudioManager::__cordl_internal_get__ListenerController_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ListenerController_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioListenerController> const& GlobalNamespace::AudioManager::__cordl_internal_get__ListenerController_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ListenerController_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__ListenerController_k__BackingField(::UnityW<::GlobalNamespace::AudioListenerController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ListenerController_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioPool>& GlobalNamespace::AudioManager::__cordl_internal_get__AudioPool_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioPool_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioPool> const& GlobalNamespace::AudioManager::__cordl_internal_get__AudioPool_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioPool_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__AudioPool_k__BackingField(::UnityW<::GlobalNamespace::AudioPool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioPool_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioConfig>& GlobalNamespace::AudioManager::__cordl_internal_get__AudioConfig_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioConfig_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioConfig> const& GlobalNamespace::AudioManager::__cordl_internal_get__AudioConfig_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioConfig_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__AudioConfig_k__BackingField(::UnityW<::GlobalNamespace::AudioConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioConfig_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& GlobalNamespace::AudioManager::__cordl_internal_get__DefaultRTPCXProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultRTPCXProvider_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& GlobalNamespace::AudioManager::__cordl_internal_get__DefaultRTPCXProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultRTPCXProvider_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__DefaultRTPCXProvider_k__BackingField(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultRTPCXProvider_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioClock*& GlobalNamespace::AudioManager::__cordl_internal_get__AudioClock_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioClock_k__BackingField;
}
constexpr ::GlobalNamespace::AudioClock* const& GlobalNamespace::AudioManager::__cordl_internal_get__AudioClock_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioClock_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__AudioClock_k__BackingField(::GlobalNamespace::AudioClock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioClock_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioReferenceManager*& GlobalNamespace::AudioManager::__cordl_internal_get__AudioReferenceManager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioReferenceManager_k__BackingField;
}
constexpr ::GlobalNamespace::AudioReferenceManager* const& GlobalNamespace::AudioManager::__cordl_internal_get__AudioReferenceManager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioReferenceManager_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__AudioReferenceManager_k__BackingField(::GlobalNamespace::AudioReferenceManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioReferenceManager_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb>& GlobalNamespace::AudioManager::__cordl_internal_get__AudioDynamicReverb_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioDynamicReverb_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb> const& GlobalNamespace::AudioManager::__cordl_internal_get__AudioDynamicReverb_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioDynamicReverb_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__AudioDynamicReverb_k__BackingField(::UnityW<::GlobalNamespace::AudioDynamicReverb>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioDynamicReverb_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioBasicReverb>& GlobalNamespace::AudioManager::__cordl_internal_get__AudioBasicReverb_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioBasicReverb_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioBasicReverb> const& GlobalNamespace::AudioManager::__cordl_internal_get__AudioBasicReverb_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioBasicReverb_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__AudioBasicReverb_k__BackingField(::UnityW<::GlobalNamespace::AudioBasicReverb>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioBasicReverb_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBank>& GlobalNamespace::AudioManager::__cordl_internal_get__GloablSoundBank_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GloablSoundBank_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::SoundBank> const& GlobalNamespace::AudioManager::__cordl_internal_get__GloablSoundBank_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GloablSoundBank_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__GloablSoundBank_k__BackingField(::UnityW<::GlobalNamespace::SoundBank>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GloablSoundBank_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioLogger*& GlobalNamespace::AudioManager::__cordl_internal_get__AudioLogger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioLogger_k__BackingField;
}
constexpr ::GlobalNamespace::AudioLogger* const& GlobalNamespace::AudioManager::__cordl_internal_get__AudioLogger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioLogger_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__AudioLogger_k__BackingField(::GlobalNamespace::AudioLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioLogger_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionManager>& GlobalNamespace::AudioManager::__cordl_internal_get__AudioOcclusionManager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioOcclusionManager_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionManager> const& GlobalNamespace::AudioManager::__cordl_internal_get__AudioOcclusionManager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioOcclusionManager_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__AudioOcclusionManager_k__BackingField(::UnityW<::GlobalNamespace::AudioOcclusionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioOcclusionManager_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioGUI>& GlobalNamespace::AudioManager::__cordl_internal_get__AudioGUI_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioGUI_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::AudioGUI> const& GlobalNamespace::AudioManager::__cordl_internal_get__AudioGUI_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioGUI_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__AudioGUI_k__BackingField(::UnityW<::GlobalNamespace::AudioGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioGUI_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioGUI3DDebugText*& GlobalNamespace::AudioManager::__cordl_internal_get__AudioGUI3DDebugText_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioGUI3DDebugText_k__BackingField;
}
constexpr ::GlobalNamespace::AudioGUI3DDebugText* const& GlobalNamespace::AudioManager::__cordl_internal_get__AudioGUI3DDebugText_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AudioGUI3DDebugText_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__AudioGUI3DDebugText_k__BackingField(::GlobalNamespace::AudioGUI3DDebugText*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AudioGUI3DDebugText_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioManager::__cordl_internal_get__MasterVolume_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MasterVolume_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioManager::__cordl_internal_get__MasterVolume_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MasterVolume_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__MasterVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MasterVolume_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioManager::__cordl_internal_get__SFXVolume_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SFXVolume_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioManager::__cordl_internal_get__SFXVolume_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SFXVolume_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__SFXVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SFXVolume_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioManager::__cordl_internal_get__MusicVolume_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MusicVolume_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioManager::__cordl_internal_get__MusicVolume_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MusicVolume_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__MusicVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MusicVolume_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioManager::__cordl_internal_get__VOVolume_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VOVolume_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioManager::__cordl_internal_get__VOVolume_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VOVolume_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__VOVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VOVolume_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioManager::__cordl_internal_get__UIVolume_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UIVolume_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioManager::__cordl_internal_get__UIVolume_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UIVolume_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__UIVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UIVolume_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioManager::__cordl_internal_get__EnvironmentVolume_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentVolume_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioManager::__cordl_internal_get__EnvironmentVolume_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentVolume_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__EnvironmentVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnvironmentVolume_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioManager::__cordl_internal_get__FoleyVolume_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FoleyVolume_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioManager::__cordl_internal_get__FoleyVolume_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FoleyVolume_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__FoleyVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FoleyVolume_k__BackingField = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioManager::__cordl_internal_get__GlobalMuteVolume_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalMuteVolume_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioManager::__cordl_internal_get__GlobalMuteVolume_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalMuteVolume_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__GlobalMuteVolume_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GlobalMuteVolume_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__prevSlowUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevSlowUpdateTime;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__prevSlowUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevSlowUpdateTime;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__prevSlowUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevSlowUpdateTime = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateDelta;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateDelta;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__slowUpdateDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slowUpdateDelta = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateTimer;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateTimer;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__slowUpdateTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slowUpdateTimer = value;
}
constexpr int32_t& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateChuncks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateChuncks;
}
constexpr int32_t const& GlobalNamespace::AudioManager::__cordl_internal_get__slowUpdateChuncks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowUpdateChuncks;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__slowUpdateChuncks(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slowUpdateChuncks = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioManager::__cordl_internal_get__cachedListenerPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedListenerPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioManager::__cordl_internal_get__cachedListenerPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedListenerPos;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__cachedListenerPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedListenerPos = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::AudioManager::__cordl_internal_get__activeCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::AudioManager::__cordl_internal_get__activeCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeCamera;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__activeCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeCamera = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioManager::__cordl_internal_get__PlayerTransform_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerTransform_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioManager::__cordl_internal_get__PlayerTransform_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerTransform_k__BackingField;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__PlayerTransform_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerTransform_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioManager::__cordl_internal_get__cameraCenterRayFloorIntersect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraCenterRayFloorIntersect;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioManager::__cordl_internal_get__cameraCenterRayFloorIntersect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraCenterRayFloorIntersect;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__cameraCenterRayFloorIntersect(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraCenterRayFloorIntersect = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Camera>>*& GlobalNamespace::AudioManager::__cordl_internal_get_OnCameraChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCameraChanged;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Camera>>* const& GlobalNamespace::AudioManager::__cordl_internal_get_OnCameraChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCameraChanged;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set_OnCameraChanged(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCameraChanged = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__lastDSPTimeCacheRealTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDSPTimeCacheRealTime;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__lastDSPTimeCacheRealTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDSPTimeCacheRealTime;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__lastDSPTimeCacheRealTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDSPTimeCacheRealTime = value;
}
constexpr double_t& GlobalNamespace::AudioManager::__cordl_internal_get__lastDSPTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDSPTime;
}
constexpr double_t const& GlobalNamespace::AudioManager::__cordl_internal_get__lastDSPTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDSPTime;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__lastDSPTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDSPTime = value;
}
inline void GlobalNamespace::AudioManager::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::AudioManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::AudioManager>, "<Instance>k__BackingField", ::GlobalNamespace::AudioManager*>(std::forward<::UnityW<::GlobalNamespace::AudioManager>>(value));
}
inline ::UnityW<::GlobalNamespace::AudioManager> GlobalNamespace::AudioManager::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::AudioManager>, "<Instance>k__BackingField", ::GlobalNamespace::AudioManager*>();
}
inline void GlobalNamespace::AudioManager::setStaticF_OnAudioManagerInitialized(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnAudioManagerInitialized", ::GlobalNamespace::AudioManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::AudioManager::getStaticF_OnAudioManagerInitialized()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnAudioManagerInitialized", ::GlobalNamespace::AudioManager*>();
}
inline void GlobalNamespace::AudioManager::setStaticF__TempVolumeList_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*, "<TempVolumeList>k__BackingField", ::GlobalNamespace::AudioManager*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* GlobalNamespace::AudioManager::getStaticF__TempVolumeList_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*, "<TempVolumeList>k__BackingField", ::GlobalNamespace::AudioManager*>();
}
inline ::UnityW<::GlobalNamespace::AudioManager> GlobalNamespace::AudioManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_Instance(::GlobalNamespace::AudioManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::AudioManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_UpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_UpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_FixedUpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_FixedUpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_LateUpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_LateUpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_SlowUpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_SlowUpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_ToRemoveUpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToRemoveUpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_ToRemoveFixedUpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToRemoveFixedUpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_ToRemoveLateUpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToRemoveLateUpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_ToRemoveSlowUpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToRemoveSlowUpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_ToAddUpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToAddUpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_ToAddFixedUpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToAddFixedUpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_ToAddLateUpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToAddLateUpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>* GlobalNamespace::AudioManager::get_ToAddSlowUpdateSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ToAddSlowUpdateSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnlyHashSet_1<::GlobalNamespace::IAudioBehaviour*>*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioListenerController> GlobalNamespace::AudioManager::get_ListenerController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ListenerController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioListenerController>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_ListenerController(::GlobalNamespace::AudioListenerController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_ListenerController", {}, {::i2c::type_of<::GlobalNamespace::AudioListenerController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioPool> GlobalNamespace::AudioManager::get_AudioPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioPool>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_AudioPool(::GlobalNamespace::AudioPool*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioPool", {}, {::i2c::type_of<::GlobalNamespace::AudioPool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioConfig> GlobalNamespace::AudioManager::get_AudioConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioConfig>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_AudioConfig(::GlobalNamespace::AudioConfig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioConfig", {}, {::i2c::type_of<::GlobalNamespace::AudioConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioRTPCXProvider> GlobalNamespace::AudioManager::get_DefaultRTPCXProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_DefaultRTPCXProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioRTPCXProvider>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_DefaultRTPCXProvider(::GlobalNamespace::AudioRTPCXProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_DefaultRTPCXProvider", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPCXProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioClock* GlobalNamespace::AudioManager::get_AudioClock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioClock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioClock*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_AudioClock(::GlobalNamespace::AudioClock*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioClock", {}, {::i2c::type_of<::GlobalNamespace::AudioClock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioReferenceManager* GlobalNamespace::AudioManager::get_AudioReferenceManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioReferenceManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioReferenceManager*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_AudioReferenceManager(::GlobalNamespace::AudioReferenceManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioReferenceManager", {}, {::i2c::type_of<::GlobalNamespace::AudioReferenceManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioDynamicReverb> GlobalNamespace::AudioManager::get_AudioDynamicReverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioDynamicReverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioDynamicReverb>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_AudioDynamicReverb(::GlobalNamespace::AudioDynamicReverb*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioDynamicReverb", {}, {::i2c::type_of<::GlobalNamespace::AudioDynamicReverb*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioBasicReverb> GlobalNamespace::AudioManager::get_AudioBasicReverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioBasicReverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioBasicReverb>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_AudioBasicReverb(::GlobalNamespace::AudioBasicReverb*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioBasicReverb", {}, {::i2c::type_of<::GlobalNamespace::AudioBasicReverb*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::SoundBank> GlobalNamespace::AudioManager::get_GloablSoundBank()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_GloablSoundBank", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SoundBank>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_GloablSoundBank(::GlobalNamespace::SoundBank*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_GloablSoundBank", {}, {::i2c::type_of<::GlobalNamespace::SoundBank*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioLogger* GlobalNamespace::AudioManager::get_AudioLogger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioLogger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioLogger*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_AudioLogger(::GlobalNamespace::AudioLogger*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioLogger", {}, {::i2c::type_of<::GlobalNamespace::AudioLogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioOcclusionManager> GlobalNamespace::AudioManager::get_AudioOcclusionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioOcclusionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioOcclusionManager>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_AudioOcclusionManager(::GlobalNamespace::AudioOcclusionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioOcclusionManager", {}, {::i2c::type_of<::GlobalNamespace::AudioOcclusionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::AudioGUI> GlobalNamespace::AudioManager::get_AudioGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioGUI>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_AudioGUI(::GlobalNamespace::AudioGUI*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioGUI", {}, {::i2c::type_of<::GlobalNamespace::AudioGUI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioGUI3DDebugText* GlobalNamespace::AudioManager::get_AudioGUI3DDebugText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_AudioGUI3DDebugText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioGUI3DDebugText*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_AudioGUI3DDebugText(::GlobalNamespace::AudioGUI3DDebugText*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_AudioGUI3DDebugText", {}, {::i2c::type_of<::GlobalNamespace::AudioGUI3DDebugText*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::AudioManager::get_MasterVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_MasterVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_MasterVolume(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_MasterVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::AudioManager::get_SFXVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_SFXVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_SFXVolume(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_SFXVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::AudioManager::get_MusicVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_MusicVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_MusicVolume(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_MusicVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::AudioManager::get_VOVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_VOVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_VOVolume(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_VOVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::AudioManager::get_UIVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_UIVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_UIVolume(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_UIVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::AudioManager::get_EnvironmentVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_EnvironmentVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_EnvironmentVolume(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_EnvironmentVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::AudioManager::get_FoleyVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_FoleyVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_FoleyVolume(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_FoleyVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::AudioManager::get_GlobalMuteVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_GlobalMuteVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_GlobalMuteVolume(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_GlobalMuteVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioManager::get_SlowUpdateTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_SlowUpdateTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::AudioManager::get_SlowUpdateChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_SlowUpdateChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioManager::get_ListenerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ListenerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_ListenerPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_ListenerPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::AudioManager::get_ActiveCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_ActiveCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_ActiveCamera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_ActiveCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::AudioManager::get_PlayerTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_PlayerTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_PlayerTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_PlayerTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioManager::get_CameraCenterRayFloorIntersect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_CameraCenterRayFloorIntersect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::add_OnCameraChanged(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"add_OnCameraChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioManager::remove_OnCameraChanged(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"remove_OnCameraChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioManager::add_OnAudioManagerInitialized(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"add_OnAudioManagerInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::AudioManager::remove_OnAudioManagerInitialized(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"remove_OnAudioManagerInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::AudioManager::get_DSPTimeMoved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_DSPTimeMoved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* GlobalNamespace::AudioManager::get_TempVolumeList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"get_TempVolumeList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_TempVolumeList(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"set_TempVolumeList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::AudioManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::SlowUpdate(int32_t  iterationOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"SlowUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iterationOverride);
}
inline void GlobalNamespace::AudioManager::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::OnEditorApplicationFocus(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnEditorApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline void GlobalNamespace::AudioManager::OnApplicationFocus(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline void GlobalNamespace::AudioManager::OnFocusChange(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnFocusChange", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline void GlobalNamespace::AudioManager::Initialize(::GlobalNamespace::AudioConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::AudioConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, config);
}
inline void GlobalNamespace::AudioManager::RegisterBehaviour(::GlobalNamespace::AudioUpdateType  type, ::GlobalNamespace::IAudioBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"RegisterBehaviour", {}, {::i2c::type_of<::GlobalNamespace::AudioUpdateType>(), ::i2c::type_of<::GlobalNamespace::IAudioBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, behaviour);
}
inline void GlobalNamespace::AudioManager::DeregisterBehaviour(::GlobalNamespace::AudioUpdateType  type, ::GlobalNamespace::IAudioBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"DeregisterBehaviour", {}, {::i2c::type_of<::GlobalNamespace::AudioUpdateType>(), ::i2c::type_of<::GlobalNamespace::IAudioBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, behaviour);
}
inline void GlobalNamespace::AudioManager::ClearAllSets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"ClearAllSets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioSourceController> GlobalNamespace::AudioManager::Play(::GlobalNamespace::SoundCue*  cue, ::UnityEngine::Vector3  worldPos, ::UnityEngine::Object*  owner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, bool  rtpc, ::UnityEngine::Transform*  followTransform, double_t  delayOverride, float_t  fadeInOverride, ::UnityEngine::AudioClip*  clipOverride, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  volumes, ::GlobalNamespace::VoiceLimitBehaviorType  voiceLimitBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"Play", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(), ::i2c::type_of<::GlobalNamespace::VoiceLimitBehaviorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceController>>(nullptr, ___internal_method, cue, worldPos, owner, xProvider, rtpc, followTransform, delayOverride, fadeInOverride, clipOverride, getXFunc, volumes, voiceLimitBehavior);
}
inline void GlobalNamespace::AudioManager::ChangeAudioSettingsVolume(::GlobalNamespace::AudioSettingsGroupType  type, float_t  vol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"ChangeAudioSettingsVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioSettingsGroupType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, vol);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::AudioManager::GetAudioSettingsVolume(::GlobalNamespace::AudioSettingsGroupType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"GetAudioSettingsVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioSettingsGroupType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(nullptr, ___internal_method, type);
}
inline void GlobalNamespace::AudioManager::Log(::StringW  text, ::GlobalNamespace::AudioAsset*  asset, ::UnityEngine::Object*  obj, bool  stackTrace, ::UnityEngine::Color  background)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::AudioAsset*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, asset, obj, stackTrace, background);
}
inline void GlobalNamespace::AudioManager::OnAudioDeviceChange(bool  changed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnAudioDeviceChange", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, changed);
}
inline void GlobalNamespace::AudioManager::ChangeSpeakerMode(::UnityEngine::AudioSpeakerMode  speakerMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"ChangeSpeakerMode", {}, {::i2c::type_of<::UnityEngine::AudioSpeakerMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speakerMode);
}
inline void GlobalNamespace::AudioManager::KillAllSounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"KillAllSounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::OnMovingTooFast(::UnityEngine::Vector3  newPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {"OnMovingTooFast", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPos);
}
inline void GlobalNamespace::AudioManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioManager* GlobalNamespace::AudioManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioManager::AudioManager()   {
}
