#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioDynamicReverb.hpp"
#include "GlobalNamespace/zzzz__FixedSizeFloatQueue_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastCommand_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AudioDynamicReverb_def.hpp"
#include "GlobalNamespace/zzzz__AudioDynamicReverb_def.hpp"
#include "GlobalNamespace/zzzz__AudioMaterialConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioPortal_def.hpp"
#include "GlobalNamespace/zzzz__DynamicReverbConfig_def.hpp"
#include "GlobalNamespace/zzzz__FixedSizeFloatQueue_def.hpp"
#include "GlobalNamespace/zzzz__ReverbZone_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "HasHit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "HasMaterial", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsNotPassThrough", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Occlusion", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestCollider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestMaterial", ty: "::UnityW<::UnityEngine::PhysicsMaterial>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioDynamicReverb_SideRaycastResult::AudioDynamicReverb_SideRaycastResult(bool  HasHit, bool  HasMaterial, bool  IsNotPassThrough, float_t  ClosestDistance, float_t  Occlusion, ::UnityW<::UnityEngine::Collider>  ClosestCollider, ::UnityW<::UnityEngine::PhysicsMaterial>  ClosestMaterial) noexcept  {
this->HasHit = HasHit;
this->HasMaterial = HasMaterial;
this->IsNotPassThrough = IsNotPassThrough;
this->ClosestDistance = ClosestDistance;
this->Occlusion = Occlusion;
this->ClosestCollider = ClosestCollider;
this->ClosestMaterial = ClosestMaterial;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioDynamicReverb_SideRaycastResult::AudioDynamicReverb_SideRaycastResult()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_Mixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixer> (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_Mixer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_Mixer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_Mixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::UnityEngine::Audio::AudioMixer*)>(&::GlobalNamespace::AudioDynamicReverb::set_Mixer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_Mixer", {}, {::i2c::type_of<::UnityEngine::Audio::AudioMixer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_RoomSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_RoomSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f68d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_RoomSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_RoomSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_RoomSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_RoomSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_Outdoorness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_Outdoorness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_Outdoorness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_Outdoorness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_Outdoorness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_Outdoorness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_ReverbTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_ReverbTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f7fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_ReverbTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_ReverbTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_ReverbTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_ReverbTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_Diffusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_Diffusion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_Diffusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_Diffusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_Diffusion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_Diffusion", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_DryLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_DryLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_DryLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_DryLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_DryLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_DryLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_Room
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_Room)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_Room", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_Room
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_Room)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180307250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_Room", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_RoomHF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_RoomHF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_RoomHF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_RoomHF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_RoomHF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_RoomHF", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_RoomLF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_RoomLF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_RoomLF", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_RoomLF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_RoomLF)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_RoomLF", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_DecayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_DecayTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_DecayTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_DecayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_DecayTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_DecayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_DecayHFRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_DecayHFRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_DecayHFRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_DecayHFRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_DecayHFRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_DecayHFRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_Reflections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_Reflections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_Reflections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_Reflections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_Reflections)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_Reflections", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_ReflectDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_ReflectDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_ReflectDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_ReflectDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_ReflectDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_ReflectDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_Reverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_Reverb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_Reverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_Reverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_Reverb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_Reverb", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_ReverbDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_ReverbDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_ReverbDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_ReverbDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_ReverbDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_ReverbDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_HFReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_HFReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_HFReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_HFReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_HFReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_HFReference", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_LFReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_LFReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_LFReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_LFReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_LFReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_LFReference", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_Diffusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_Diffusion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_Diffusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_Diffusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_Diffusion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_Diffusion", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DSP_Density
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DSP_Density)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_Density", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DSP_Density
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_DSP_Density)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_Density", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DirectionFills
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DirectionFills)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803459d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DirectionFills", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DirectionFills
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::ArrayW<float_t>)>(&::GlobalNamespace::AudioDynamicReverb::set_DirectionFills)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180352c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DirectionFills", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_PortalFills
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_PortalFills)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_PortalFills", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_PortalFills
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::ArrayW<float_t>)>(&::GlobalNamespace::AudioDynamicReverb::set_PortalFills)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180474ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_PortalFills", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_Portalness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_Portalness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_Portalness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_Portalness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_Portalness)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_Portalness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DirectionOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DirectionOffsets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DirectionOffsets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DirectionOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::ArrayW<::UnityEngine::Vector2>)>(&::GlobalNamespace::AudioDynamicReverb::set_DirectionOffsets)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803371f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DirectionOffsets", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_DirectionOffsetsSmoothed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_DirectionOffsetsSmoothed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DirectionOffsetsSmoothed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_DirectionOffsetsSmoothed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::ArrayW<::UnityEngine::Vector2>)>(&::GlobalNamespace::AudioDynamicReverb::set_DirectionOffsetsSmoothed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DirectionOffsetsSmoothed", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_SideToTopFillRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_SideToTopFillRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_SideToTopFillRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_SideToTopFillRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_SideToTopFillRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_SideToTopFillRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_SideFillsAvg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_SideFillsAvg)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180330be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_SideFillsAvg", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_SideFillsAvg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_SideFillsAvg)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_SideFillsAvg", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_SideFillsMultiplied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_SideFillsMultiplied)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_SideFillsMultiplied", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_SideFillsMultiplied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(float_t)>(&::GlobalNamespace::AudioDynamicReverb::set_SideFillsMultiplied)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_SideFillsMultiplied", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_EchoRatioFlat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_EchoRatioFlat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803370b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_EchoRatioFlat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_EchoRatioFlat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::ArrayW<float_t>)>(&::GlobalNamespace::AudioDynamicReverb::set_EchoRatioFlat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180337150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_EchoRatioFlat", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_RandomPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_RandomPoints)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_RandomPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_RandomPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::ArrayW<::UnityEngine::Vector3>)>(&::GlobalNamespace::AudioDynamicReverb::set_RandomPoints)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180474d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_RandomPoints", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_RandomPointsUpwards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_RandomPointsUpwards)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_RandomPointsUpwards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_RandomPointsUpwards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::ArrayW<::UnityEngine::Vector3>)>(&::GlobalNamespace::AudioDynamicReverb::set_RandomPointsUpwards)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180474cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_RandomPointsUpwards", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_RandomPointsEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_RandomPointsEcho)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_RandomPointsEcho", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.set_RandomPointsEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::ArrayW<::UnityEngine::Vector3>)>(&::GlobalNamespace::AudioDynamicReverb::set_RandomPointsEcho)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180474cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_RandomPointsEcho", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::GlobalNamespace::DynamicReverbConfig*)>(&::GlobalNamespace::AudioDynamicReverb::Initialize)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x180473270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::DynamicReverbConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.SetQualityLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(int32_t)>(&::GlobalNamespace::AudioDynamicReverb::SetQualityLevel)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180473fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"SetQualityLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.CreateReverbArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(int32_t)>(&::GlobalNamespace::AudioDynamicReverb::CreateReverbArrays)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180472d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CreateReverbArrays", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804735e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.UpdateReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::UpdateReverb)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x1804744b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"UpdateReverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.RaycastsReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::RaycastsReverb)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x180473a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"RaycastsReverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.CalculateReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::CalculateReverb)> {
  constexpr static std::size_t size = 0xf30;
  constexpr static std::size_t addrs = 0x180471b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculateReverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.GetSideRaycastResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioDynamicReverb_SideRaycastResult (::GlobalNamespace::AudioDynamicReverb::*)(int32_t, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*)>(&::GlobalNamespace::AudioDynamicReverb::GetSideRaycastResult)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x180473080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"GetSideRaycastResult", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.GetOcclusionForMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioDynamicReverb::*)(::UnityEngine::PhysicsMaterial*, float_t)>(&::GlobalNamespace::AudioDynamicReverb::GetOcclusionForMaterial)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180473010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"GetOcclusionForMaterial", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.EnterReverbZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::GlobalNamespace::ReverbZone*)>(&::GlobalNamespace::AudioDynamicReverb::EnterReverbZone)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180472ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"EnterReverbZone", {}, {::i2c::type_of<::GlobalNamespace::ReverbZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.ExitReverbZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::GlobalNamespace::ReverbZone*)>(&::GlobalNamespace::AudioDynamicReverb::ExitReverbZone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180472f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"ExitReverbZone", {}, {::i2c::type_of<::GlobalNamespace::ReverbZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.CalculateReverbOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::CalculateReverbOverride)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180471880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculateReverbOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.UpdateEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::UpdateEcho)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1804740c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"UpdateEcho", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.RaycastEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::RaycastEcho)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x180473670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"RaycastEcho", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.CalculateEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::CalculateEcho)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804713e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculateEcho", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.CalculateShiftedDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::AudioDynamicReverb::*)(::UnityEngine::Vector2, ::ArrayW<float_t>)>(&::GlobalNamespace::AudioDynamicReverb::CalculateShiftedDirection)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180472a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculateShiftedDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.CalculatePortals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::CalculatePortals)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x180471440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculatePortals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.CalculateDirectionShifts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::CalculateDirectionShifts)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x180471060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculateDirectionShifts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.RegisterPortal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::GlobalNamespace::AudioPortal*)>(&::GlobalNamespace::AudioDynamicReverb::RegisterPortal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180473f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"RegisterPortal", {}, {::i2c::type_of<::GlobalNamespace::AudioPortal*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb.UnregisterPortal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)(::GlobalNamespace::AudioPortal*)>(&::GlobalNamespace::AudioDynamicReverb::UnregisterPortal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180474090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"UnregisterPortal", {}, {::i2c::type_of<::GlobalNamespace::AudioPortal*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioDynamicReverb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioDynamicReverb::*)()>(&::GlobalNamespace::AudioDynamicReverb::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180474a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get_Bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bypass;
}
constexpr bool const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get_Bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bypass;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set_Bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bypass = value;
}
constexpr bool& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get_UsePortals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsePortals;
}
constexpr bool const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get_UsePortals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsePortals;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set_UsePortals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UsePortals = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__layers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__layers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layers;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__layers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layers = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__Mixer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mixer_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__Mixer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mixer_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__Mixer_k__BackingField(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mixer_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__RoomSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomSize_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__RoomSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomSize_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__RoomSize_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoomSize_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__Outdoorness_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Outdoorness_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__Outdoorness_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Outdoorness_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__Outdoorness_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Outdoorness_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__ReverbTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReverbTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__ReverbTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReverbTime_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__ReverbTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReverbTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__Diffusion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Diffusion_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__Diffusion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Diffusion_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__Diffusion_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Diffusion_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_DryLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_DryLevel_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_DryLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_DryLevel_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_DryLevel_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_DryLevel_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_Room_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_Room_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_Room_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_Room_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_Room_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_Room_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_RoomHF_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_RoomHF_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_RoomHF_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_RoomHF_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_RoomHF_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_RoomHF_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_RoomLF_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_RoomLF_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_RoomLF_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_RoomLF_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_RoomLF_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_RoomLF_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_DecayTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_DecayTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_DecayTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_DecayTime_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_DecayTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_DecayTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_DecayHFRatio_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_DecayHFRatio_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_DecayHFRatio_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_DecayHFRatio_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_DecayHFRatio_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_DecayHFRatio_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_Reflections_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_Reflections_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_Reflections_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_Reflections_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_Reflections_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_Reflections_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_ReflectDelay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_ReflectDelay_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_ReflectDelay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_ReflectDelay_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_ReflectDelay_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_ReflectDelay_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_Reverb_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_Reverb_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_Reverb_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_Reverb_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_Reverb_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_Reverb_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_ReverbDelay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_ReverbDelay_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_ReverbDelay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_ReverbDelay_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_ReverbDelay_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_ReverbDelay_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_HFReference_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_HFReference_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_HFReference_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_HFReference_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_HFReference_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_HFReference_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_LFReference_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_LFReference_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_LFReference_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_LFReference_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_LFReference_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_LFReference_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_Diffusion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_Diffusion_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_Diffusion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_Diffusion_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_Diffusion_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_Diffusion_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_Density_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_Density_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DSP_Density_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DSP_Density_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DSP_Density_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DSP_Density_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__reverbTimeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverbTimeOverride;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__reverbTimeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverbTimeOverride;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__reverbTimeOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reverbTimeOverride = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__diffusionOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diffusionOverride;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__diffusionOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____diffusionOverride;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__diffusionOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____diffusionOverride = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__roomSizeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomSizeOverride;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__roomSizeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomSizeOverride;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__roomSizeOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomSizeOverride = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__outdoornessOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outdoornessOverride;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__outdoornessOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outdoornessOverride;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__outdoornessOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outdoornessOverride = value;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue*& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__collideHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collideHits;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__collideHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collideHits;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__collideHits(::GlobalNamespace::FixedSizeFloatQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collideHits = value;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue*& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__collideLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collideLength;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__collideLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collideLength;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__collideLength(::GlobalNamespace::FixedSizeFloatQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collideLength = value;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue*& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__collideReflection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collideReflection;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__collideReflection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collideReflection;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__collideReflection(::GlobalNamespace::FixedSizeFloatQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collideReflection = value;
}
constexpr int32_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr int32_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__detectionRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectionRange;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__detectionRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectionRange;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__detectionRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____detectionRange = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__actualRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actualRange;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__actualRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actualRange;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__actualRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actualRange = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__initialDiffusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialDiffusion;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__initialDiffusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialDiffusion;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__initialDiffusion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialDiffusion = value;
}
constexpr bool& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__inReverbZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inReverbZone;
}
constexpr bool const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__inReverbZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inReverbZone;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__inReverbZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inReverbZone = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ReverbZone>>*& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__reverbZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverbZones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ReverbZone>>* const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__reverbZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverbZones;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__reverbZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ReverbZone>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reverbZones = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__materialConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__materialConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialConfig;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__materialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialConfig = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__roomSizeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomSizeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__roomSizeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomSizeCurve;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__roomSizeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomSizeCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__outdoornessCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outdoornessCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__outdoornessCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outdoornessCurve;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__outdoornessCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outdoornessCurve = value;
}
constexpr ::ArrayW<::GlobalNamespace::FixedSizeFloatQueue*>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__directionBuckets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____directionBuckets;
}
constexpr ::ArrayW<::GlobalNamespace::FixedSizeFloatQueue*> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__directionBuckets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____directionBuckets;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__directionBuckets(::ArrayW<::GlobalNamespace::FixedSizeFloatQueue*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____directionBuckets = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DirectionFills_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DirectionFills_k__BackingField;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DirectionFills_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DirectionFills_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DirectionFills_k__BackingField(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DirectionFills_k__BackingField = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__PortalFills_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PortalFills_k__BackingField;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__PortalFills_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PortalFills_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__PortalFills_k__BackingField(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PortalFills_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__Portalness_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Portalness_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__Portalness_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Portalness_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__Portalness_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Portalness_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DirectionOffsets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DirectionOffsets_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DirectionOffsets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DirectionOffsets_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DirectionOffsets_k__BackingField(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DirectionOffsets_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DirectionOffsetsSmoothed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DirectionOffsetsSmoothed_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__DirectionOffsetsSmoothed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DirectionOffsetsSmoothed_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__DirectionOffsetsSmoothed_k__BackingField(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DirectionOffsetsSmoothed_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__SideToTopFillRatio_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SideToTopFillRatio_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__SideToTopFillRatio_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SideToTopFillRatio_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__SideToTopFillRatio_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SideToTopFillRatio_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__SideFillsAvg_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SideFillsAvg_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__SideFillsAvg_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SideFillsAvg_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__SideFillsAvg_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SideFillsAvg_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__SideFillsMultiplied_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SideFillsMultiplied_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__SideFillsMultiplied_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SideFillsMultiplied_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__SideFillsMultiplied_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SideFillsMultiplied_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPortal>>*& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__activePortals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activePortals;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPortal>>* const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__activePortals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activePortals;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__activePortals(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPortal>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activePortals = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__echoCounterFlat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoCounterFlat;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__echoCounterFlat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoCounterFlat;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__echoCounterFlat(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____echoCounterFlat = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__echoRatioFlat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoRatioFlat;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__echoRatioFlat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoRatioFlat;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__echoRatioFlat(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____echoRatioFlat = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__EchoRatioFlat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EchoRatioFlat_k__BackingField;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__EchoRatioFlat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EchoRatioFlat_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__EchoRatioFlat_k__BackingField(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EchoRatioFlat_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__echoIteration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoIteration;
}
constexpr int32_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__echoIteration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoIteration;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__echoIteration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____echoIteration = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__RandomPoints_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPoints_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__RandomPoints_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPoints_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__RandomPoints_k__BackingField(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RandomPoints_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__RandomPointsUpwards_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPointsUpwards_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__RandomPointsUpwards_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPointsUpwards_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__RandomPointsUpwards_k__BackingField(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RandomPointsUpwards_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__RandomPointsEcho_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPointsEcho_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__RandomPointsEcho_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPointsEcho_k__BackingField;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__RandomPointsEcho_k__BackingField(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RandomPointsEcho_k__BackingField = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastCommands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastCommands;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastCommands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastCommands;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__raycastCommands(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastCommands = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____results;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____results;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__results(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____results = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastJobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastJobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastJobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastJobHandle;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__raycastJobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastJobHandle = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastCommandsUpwards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastCommandsUpwards;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastCommandsUpwards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastCommandsUpwards;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__raycastCommandsUpwards(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastCommandsUpwards = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__resultsUpwards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultsUpwards;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__resultsUpwards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultsUpwards;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__resultsUpwards(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resultsUpwards = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastJobHandleUpwards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastJobHandleUpwards;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastJobHandleUpwards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastJobHandleUpwards;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__raycastJobHandleUpwards(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastJobHandleUpwards = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastCommandsEcho()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastCommandsEcho;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastCommandsEcho() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastCommandsEcho;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__raycastCommandsEcho(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastCommandsEcho = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__resultsEcho()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultsEcho;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__resultsEcho() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultsEcho;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__resultsEcho(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resultsEcho = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastJobHandleEcho()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastJobHandleEcho;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__raycastJobHandleEcho() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastJobHandleEcho;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__raycastJobHandleEcho(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastJobHandleEcho = value;
}
constexpr ::UnityW<::GlobalNamespace::DynamicReverbConfig>& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::UnityW<::GlobalNamespace::DynamicReverbConfig> const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__config(::UnityW<::GlobalNamespace::DynamicReverbConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
constexpr int32_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__currentRaysAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRaysAmount;
}
constexpr int32_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__currentRaysAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRaysAmount;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__currentRaysAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentRaysAmount = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__detectionAngleLow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectionAngleLow;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__detectionAngleLow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectionAngleLow;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__detectionAngleLow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____detectionAngleLow = value;
}
constexpr float_t& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__detectionAngleHigh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectionAngleHigh;
}
constexpr float_t const& GlobalNamespace::AudioDynamicReverb::__cordl_internal_get__detectionAngleHigh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectionAngleHigh;
}
constexpr void GlobalNamespace::AudioDynamicReverb::__cordl_internal_set__detectionAngleHigh(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____detectionAngleHigh = value;
}
inline void GlobalNamespace::AudioDynamicReverb::setStaticF__bucketCenters(::ArrayW<::UnityEngine::Vector2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "_bucketCenters", ::GlobalNamespace::AudioDynamicReverb*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> GlobalNamespace::AudioDynamicReverb::getStaticF__bucketCenters()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "_bucketCenters", ::GlobalNamespace::AudioDynamicReverb*>();
}
inline ::UnityW<::UnityEngine::Audio::AudioMixer> GlobalNamespace::AudioDynamicReverb::get_Mixer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_Mixer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioMixer>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_Mixer(::UnityEngine::Audio::AudioMixer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_Mixer", {}, {::i2c::type_of<::UnityEngine::Audio::AudioMixer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_RoomSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_RoomSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_RoomSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_RoomSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_Outdoorness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_Outdoorness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_Outdoorness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_Outdoorness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_ReverbTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_ReverbTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_ReverbTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_ReverbTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_Diffusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_Diffusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_Diffusion(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_Diffusion", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_DryLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_DryLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_DryLevel(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_DryLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_Room()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_Room", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_Room(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_Room", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_RoomHF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_RoomHF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_RoomHF(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_RoomHF", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_RoomLF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_RoomLF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_RoomLF(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_RoomLF", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_DecayTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_DecayTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_DecayTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_DecayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_DecayHFRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_DecayHFRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_DecayHFRatio(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_DecayHFRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_Reflections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_Reflections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_Reflections(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_Reflections", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_ReflectDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_ReflectDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_ReflectDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_ReflectDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_Reverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_Reverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_Reverb(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_Reverb", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_ReverbDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_ReverbDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_ReverbDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_ReverbDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_HFReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_HFReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_HFReference(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_HFReference", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_LFReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_LFReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_LFReference(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_LFReference", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_Diffusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_Diffusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_Diffusion(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_Diffusion", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_DSP_Density()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DSP_Density", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DSP_Density(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DSP_Density", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<float_t> GlobalNamespace::AudioDynamicReverb::get_DirectionFills()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DirectionFills", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DirectionFills(::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DirectionFills", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<float_t> GlobalNamespace::AudioDynamicReverb::get_PortalFills()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_PortalFills", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_PortalFills(::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_PortalFills", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_Portalness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_Portalness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_Portalness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_Portalness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2> GlobalNamespace::AudioDynamicReverb::get_DirectionOffsets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DirectionOffsets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DirectionOffsets(::ArrayW<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DirectionOffsets", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector2> GlobalNamespace::AudioDynamicReverb::get_DirectionOffsetsSmoothed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_DirectionOffsetsSmoothed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_DirectionOffsetsSmoothed(::ArrayW<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_DirectionOffsetsSmoothed", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_SideToTopFillRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_SideToTopFillRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_SideToTopFillRatio(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_SideToTopFillRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_SideFillsAvg()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_SideFillsAvg", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_SideFillsAvg(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_SideFillsAvg", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioDynamicReverb::get_SideFillsMultiplied()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_SideFillsMultiplied", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_SideFillsMultiplied(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_SideFillsMultiplied", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<float_t> GlobalNamespace::AudioDynamicReverb::get_EchoRatioFlat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_EchoRatioFlat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_EchoRatioFlat(::ArrayW<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_EchoRatioFlat", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::AudioDynamicReverb::get_RandomPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_RandomPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_RandomPoints(::ArrayW<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_RandomPoints", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::AudioDynamicReverb::get_RandomPointsUpwards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_RandomPointsUpwards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_RandomPointsUpwards(::ArrayW<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_RandomPointsUpwards", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::AudioDynamicReverb::get_RandomPointsEcho()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_RandomPointsEcho", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::set_RandomPointsEcho(::ArrayW<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"set_RandomPointsEcho", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioDynamicReverb::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::Initialize(::GlobalNamespace::DynamicReverbConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::DynamicReverbConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void GlobalNamespace::AudioDynamicReverb::SetQualityLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"SetQualityLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void GlobalNamespace::AudioDynamicReverb::CreateReverbArrays(int32_t  raysAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CreateReverbArrays", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raysAmount);
}
inline void GlobalNamespace::AudioDynamicReverb::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::UpdateReverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"UpdateReverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::RaycastsReverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"RaycastsReverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::CalculateReverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculateReverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioDynamicReverb_SideRaycastResult GlobalNamespace::AudioDynamicReverb::GetSideRaycastResult(int32_t  startIndex, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  passThroughMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"GetSideRaycastResult", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioDynamicReverb_SideRaycastResult>(this, ___internal_method, startIndex, passThroughMaterials);
}
inline float_t GlobalNamespace::AudioDynamicReverb::GetOcclusionForMaterial(::UnityEngine::PhysicsMaterial*  hitMat, float_t  currentOcclusion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"GetOcclusionForMaterial", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, hitMat, currentOcclusion);
}
inline void GlobalNamespace::AudioDynamicReverb::EnterReverbZone(::GlobalNamespace::ReverbZone*  reverbZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"EnterReverbZone", {}, {::i2c::type_of<::GlobalNamespace::ReverbZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reverbZone);
}
inline void GlobalNamespace::AudioDynamicReverb::ExitReverbZone(::GlobalNamespace::ReverbZone*  reverbZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"ExitReverbZone", {}, {::i2c::type_of<::GlobalNamespace::ReverbZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reverbZone);
}
inline void GlobalNamespace::AudioDynamicReverb::CalculateReverbOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculateReverbOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::UpdateEcho()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"UpdateEcho", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::RaycastEcho()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"RaycastEcho", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::CalculateEcho()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculateEcho", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::AudioDynamicReverb::CalculateShiftedDirection(::UnityEngine::Vector2  currentDir2D, ::ArrayW<float_t>  directionFills)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculateShiftedDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, currentDir2D, directionFills);
}
inline void GlobalNamespace::AudioDynamicReverb::CalculatePortals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculatePortals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::CalculateDirectionShifts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"CalculateDirectionShifts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioDynamicReverb::RegisterPortal(::GlobalNamespace::AudioPortal*  portal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"RegisterPortal", {}, {::i2c::type_of<::GlobalNamespace::AudioPortal*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, portal);
}
inline void GlobalNamespace::AudioDynamicReverb::UnregisterPortal(::GlobalNamespace::AudioPortal*  portal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {"UnregisterPortal", {}, {::i2c::type_of<::GlobalNamespace::AudioPortal*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, portal);
}
inline void GlobalNamespace::AudioDynamicReverb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioDynamicReverb*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioDynamicReverb* GlobalNamespace::AudioDynamicReverb::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioDynamicReverb*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioDynamicReverb::AudioDynamicReverb()   {
}
