#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRandomContainer.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "GlobalNamespace/zzzz__SoundCue_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_impl.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolumeStruct_def.hpp"
#include "GlobalNamespace/zzzz__FuncOneOut_3_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__IAudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__ISoundBankable_def.hpp"
#include "GlobalNamespace/zzzz__ISoundCueProvider_def.hpp"
#include "GlobalNamespace/zzzz__IVirtualizable_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_MinVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::get_MinVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18048d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_MinVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_MaxVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::get_MaxVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_MaxVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_MinPitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::get_MinPitch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_MinPitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_MaxPitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::get_MaxPitch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_MaxPitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_VoiceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::get_VoiceLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_VoiceLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_VoiceLimitBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VoiceLimitBehaviorType (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::get_VoiceLimitBehavior)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_VoiceLimitBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_Cooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::get_Cooldown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_Cooldown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.set_Cooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRandomContainer::*)(float_t)>(&::GlobalNamespace::AudioRandomContainer::set_Cooldown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"set_Cooldown", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::get_Delay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_Delay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.set_Delay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRandomContainer::*)(float_t)>(&::GlobalNamespace::AudioRandomContainer::set_Delay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"set_Delay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::get_Offset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_Offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.set_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRandomContainer::*)(float_t)>(&::GlobalNamespace::AudioRandomContainer::set_Offset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180307250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"set_Offset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_Deterministic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::get_Deterministic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fdd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_Deterministic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_NextCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SoundCue> (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::get_NextCue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_NextCue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.set_NextCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRandomContainer::*)(::GlobalNamespace::SoundCue*)>(&::GlobalNamespace::AudioRandomContainer::set_NextCue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"set_NextCue", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.get_TempVolumeList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* (*)()>(&::GlobalNamespace::AudioRandomContainer::get_TempVolumeList)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803161d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_TempVolumeList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.set_TempVolumeList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*)>(&::GlobalNamespace::AudioRandomContainer::set_TempVolumeList)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18048d8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"set_TempVolumeList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18048cd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::OnValidate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18048cdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.GetCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SoundCue> (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::GetCue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18048ca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetCue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.GetCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SoundCue> (::GlobalNamespace::AudioRandomContainer::*)(int32_t)>(&::GlobalNamespace::AudioRandomContainer::GetCue)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18048ca60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetCue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.GetAllCues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::GetAllCues)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18048c990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetAllCues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.SetMinMaxVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRandomContainer::*)(float_t, float_t)>(&::GlobalNamespace::AudioRandomContainer::SetMinMaxVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"SetMinMaxVolume", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.GetVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolumeStruct (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::GetVolume)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18048ccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.GetPitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::GetPitch)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18048cc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetPitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioSourceController> (::GlobalNamespace::AudioRandomContainer::*)(::UnityEngine::Vector3, ::UnityEngine::Object*, ::GlobalNamespace::IAudioRTPCXProvider*, bool, ::UnityEngine::Transform*, double_t, float_t, ::UnityEngine::AudioClip*, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*, ::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>*)>(&::GlobalNamespace::AudioRandomContainer::Play)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x18048ceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(), ::i2c::type_of<::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer.GetDeterministicIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioRandomContainer::*)(::UnityEngine::Object*)>(&::GlobalNamespace::AudioRandomContainer::GetDeterministicIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18048cbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetDeterministicIndex", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioRandomContainer::*)()>(&::GlobalNamespace::AudioRandomContainer::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18048d870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioRandomContainer._Play_g___deregisterVoice_54_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AudioRandomContainer*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AudioRandomContainer::_Play_g___deregisterVoice_54_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18048d760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"<Play>g___deregisterVoice|54_0", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__minVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minVolume;
}
constexpr float_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__minVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minVolume;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__minVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minVolume = value;
}
constexpr float_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__maxVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxVolume;
}
constexpr float_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__maxVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxVolume;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__maxVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxVolume = value;
}
constexpr float_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__minPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minPitch;
}
constexpr float_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__minPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minPitch;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__minPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minPitch = value;
}
constexpr float_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__maxPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxPitch;
}
constexpr float_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__maxPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxPitch;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__maxPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxPitch = value;
}
constexpr int32_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__voiceLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimit;
}
constexpr int32_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__voiceLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimit;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__voiceLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceLimit = value;
}
constexpr ::GlobalNamespace::VoiceLimitBehaviorType& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__voiceLimitBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimitBehavior;
}
constexpr ::GlobalNamespace::VoiceLimitBehaviorType const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__voiceLimitBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimitBehavior;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__voiceLimitBehavior(::GlobalNamespace::VoiceLimitBehaviorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceLimitBehavior = value;
}
constexpr float_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldown;
}
constexpr float_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldown;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cooldown = value;
}
constexpr float_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__Cooldown_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cooldown_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__Cooldown_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cooldown_k__BackingField;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__Cooldown_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cooldown_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delay;
}
constexpr float_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delay;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delay = value;
}
constexpr float_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__Delay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Delay_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__Delay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Delay_k__BackingField;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__Delay_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Delay_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr float_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr float_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__Offset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Offset_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__Offset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Offset_k__BackingField;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__Offset_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Offset_k__BackingField = value;
}
constexpr bool& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__deterministic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deterministic;
}
constexpr bool const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__deterministic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deterministic;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__deterministic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deterministic = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& GlobalNamespace::AudioRandomContainer::__cordl_internal_get_Cues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cues;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get_Cues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Cues;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set_Cues(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Cues = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__NextCue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextCue_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__NextCue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NextCue_k__BackingField;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__NextCue_k__BackingField(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NextCue_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__lastIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastIndex;
}
constexpr int32_t const& GlobalNamespace::AudioRandomContainer::__cordl_internal_get__lastIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastIndex;
}
constexpr void GlobalNamespace::AudioRandomContainer::__cordl_internal_set__lastIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastIndex = value;
}
inline void GlobalNamespace::AudioRandomContainer::setStaticF__TempVolumeList_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*, "<TempVolumeList>k__BackingField", ::GlobalNamespace::AudioRandomContainer*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* GlobalNamespace::AudioRandomContainer::getStaticF__TempVolumeList_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*, "<TempVolumeList>k__BackingField", ::GlobalNamespace::AudioRandomContainer*>();
}
inline float_t GlobalNamespace::AudioRandomContainer::get_MinVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_MinVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioRandomContainer::get_MaxVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_MaxVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioRandomContainer::get_MinPitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_MinPitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioRandomContainer::get_MaxPitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_MaxPitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::AudioRandomContainer::get_VoiceLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_VoiceLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceLimitBehaviorType GlobalNamespace::AudioRandomContainer::get_VoiceLimitBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_VoiceLimitBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VoiceLimitBehaviorType>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioRandomContainer::get_Cooldown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_Cooldown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRandomContainer::set_Cooldown(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"set_Cooldown", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioRandomContainer::get_Delay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_Delay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRandomContainer::set_Delay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"set_Delay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioRandomContainer::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_Offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRandomContainer::set_Offset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"set_Offset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioRandomContainer::get_Deterministic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_Deterministic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SoundCue> GlobalNamespace::AudioRandomContainer::get_NextCue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_NextCue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SoundCue>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRandomContainer::set_NextCue(::GlobalNamespace::SoundCue*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"set_NextCue", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>* GlobalNamespace::AudioRandomContainer::get_TempVolumeList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"get_TempVolumeList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AudioRandomContainer::set_TempVolumeList(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"set_TempVolumeList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::AudioRandomContainer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRandomContainer::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SoundCue> GlobalNamespace::AudioRandomContainer::GetCue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetCue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SoundCue>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SoundCue> GlobalNamespace::AudioRandomContainer::GetCue(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetCue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SoundCue>>(this, ___internal_method, index);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* GlobalNamespace::AudioRandomContainer::GetAllCues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetAllCues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRandomContainer::SetMinMaxVolume(float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"SetMinMaxVolume", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max);
}
inline ::GlobalNamespace::AudioVolumeStruct GlobalNamespace::AudioRandomContainer::GetVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolumeStruct>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioRandomContainer::GetPitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetPitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioSourceController> GlobalNamespace::AudioRandomContainer::Play(::UnityEngine::Vector3  worldPos, ::UnityEngine::Object*  owner, ::GlobalNamespace::IAudioRTPCXProvider*  xProvider, bool  rtpc, ::UnityEngine::Transform*  followTransform, double_t  delayOverride, float_t  fadeInOverride, ::UnityEngine::AudioClip*  clipOverride, ::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*  getXFunc, ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*  volumes, ::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>*  getCueFunc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"Play", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::GlobalNamespace::IAudioRTPCXProvider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::FuncOneOut_3<::GlobalNamespace::AudioRTPC_XAxisType,float_t,bool>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IAudioVolume*>*>(), ::i2c::type_of<::System::Func_2<::UnityW<::GlobalNamespace::AudioRandomContainer>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioSourceController>>(this, ___internal_method, worldPos, owner, xProvider, rtpc, followTransform, delayOverride, fadeInOverride, clipOverride, getXFunc, volumes, getCueFunc);
}
inline int32_t GlobalNamespace::AudioRandomContainer::GetDeterministicIndex(::UnityEngine::Object*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"GetDeterministicIndex", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, owner);
}
inline void GlobalNamespace::AudioRandomContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioRandomContainer::_Play_g___deregisterVoice_54_0(::GlobalNamespace::AudioRandomContainer*  r, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioRandomContainer*>(),
                        {"<Play>g___deregisterVoice|54_0", {}, {::i2c::type_of<::GlobalNamespace::AudioRandomContainer*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r, c);
}
inline ::GlobalNamespace::AudioRandomContainer* GlobalNamespace::AudioRandomContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioRandomContainer*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISoundCueProvider"
constexpr  GlobalNamespace::AudioRandomContainer::operator ::GlobalNamespace::ISoundCueProvider*() noexcept {
return static_cast<::GlobalNamespace::ISoundCueProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISoundCueProvider"
constexpr ::GlobalNamespace::ISoundCueProvider* GlobalNamespace::AudioRandomContainer::i___GlobalNamespace__ISoundCueProvider() noexcept {
return static_cast<::GlobalNamespace::ISoundCueProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISoundBankable"
constexpr  GlobalNamespace::AudioRandomContainer::operator ::GlobalNamespace::ISoundBankable*() noexcept {
return static_cast<::GlobalNamespace::ISoundBankable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISoundBankable"
constexpr ::GlobalNamespace::ISoundBankable* GlobalNamespace::AudioRandomContainer::i___GlobalNamespace__ISoundBankable() noexcept {
return static_cast<::GlobalNamespace::ISoundBankable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IVirtualizable"
constexpr  GlobalNamespace::AudioRandomContainer::operator ::GlobalNamespace::IVirtualizable*() noexcept {
return static_cast<::GlobalNamespace::IVirtualizable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVirtualizable"
constexpr ::GlobalNamespace::IVirtualizable* GlobalNamespace::AudioRandomContainer::i___GlobalNamespace__IVirtualizable() noexcept {
return static_cast<::GlobalNamespace::IVirtualizable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioRandomContainer::AudioRandomContainer()   {
}
