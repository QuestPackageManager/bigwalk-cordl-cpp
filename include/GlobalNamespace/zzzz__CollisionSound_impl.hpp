#pragma once
// IWYU pragma private; include "GlobalNamespace/CollisionSound.hpp"
#include "GlobalNamespace/zzzz__WaterDepthSampleData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CollisionSound_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioImpactConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__CollisionSoundGUI3D_def.hpp"
#include "GlobalNamespace/zzzz__CollisionSoundGUI_def.hpp"
#include "GlobalNamespace/zzzz__CollisionSound_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__WaterDepthSampleData_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CollisionSound_ImpactSize::CollisionSound_ImpactSize(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CollisionSound_ImpactSize::CollisionSound_ImpactSize()   {
}
constexpr ::GlobalNamespace::CollisionSound_ImpactSize  GlobalNamespace::CollisionSound_ImpactSize::One{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CollisionSound_ImpactSize  GlobalNamespace::CollisionSound_ImpactSize::Two{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.get_GUIDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CollisionSoundGUI* (*)()>(&::GlobalNamespace::CollisionSound::get_GUIDebug)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180330e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"get_GUIDebug", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.set_GUIDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CollisionSoundGUI*)>(&::GlobalNamespace::CollisionSound::set_GUIDebug)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180330e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"set_GUIDebug", {}, {::i2c::type_of<::GlobalNamespace::CollisionSoundGUI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.get_GUIDebug3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CollisionSoundGUI3D* (*)()>(&::GlobalNamespace::CollisionSound::get_GUIDebug3D)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180330df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"get_GUIDebug3D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.set_GUIDebug3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CollisionSoundGUI3D*)>(&::GlobalNamespace::CollisionSound::set_GUIDebug3D)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180330e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"set_GUIDebug3D", {}, {::i2c::type_of<::GlobalNamespace::CollisionSoundGUI3D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.get_DepthMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WaterDepthSampleData_GetDepthMode (*)()>(&::GlobalNamespace::CollisionSound::get_DepthMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180330dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"get_DepthMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.set_DepthMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::WaterDepthSampleData_GetDepthMode)>(&::GlobalNamespace::CollisionSound::set_DepthMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180330e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"set_DepthMode", {}, {::i2c::type_of<::GlobalNamespace::WaterDepthSampleData_GetDepthMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18032ecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180330b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::OnEnable)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1803307d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180330740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.AudioUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)(float_t)>(&::GlobalNamespace::CollisionSound::AudioUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.AudioFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)(float_t)>(&::GlobalNamespace::CollisionSound::AudioFixedUpdate)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x18032d980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)(float_t)>(&::GlobalNamespace::CollisionSound::AudioLateUpdate)> {
  constexpr static std::size_t size = 0xea0;
  constexpr static std::size_t addrs = 0x18032dde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.AudioSlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)(float_t)>(&::GlobalNamespace::CollisionSound::AudioSlowUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18032ec80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.PassCollsion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::CollisionSound::PassCollsion)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180330a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"PassCollsion", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::CollisionSound::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x1600;
  constexpr static std::size_t addrs = 0x18032f140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.InitAudioEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::InitAudioEvents)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18032ef80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"InitAudioEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.CalculateDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::CalculateDistance)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18032ee30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"CalculateDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.GetImpactVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::GetImpactVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18032ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"GetImpactVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.AudioGetXCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CollisionSound::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::CollisionSound::AudioGetXCallback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18032ddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"AudioGetXCallback", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound.PrintGUILog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)(::GlobalNamespace::AudioEvent*, ::StringW)>(&::GlobalNamespace::CollisionSound::PrintGUILog)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"PrintGUILog", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180330cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound._AudioLateUpdate_g___clearRef_62_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CollisionSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::CollisionSound::_AudioLateUpdate_g___clearRef_62_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180330bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<AudioLateUpdate>g___clearRef|62_0", {}, {::i2c::type_of<::GlobalNamespace::CollisionSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound._AudioLateUpdate_g___clearRef_62_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CollisionSound*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::CollisionSound::_AudioLateUpdate_g___clearRef_62_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180330c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<AudioLateUpdate>g___clearRef|62_1", {}, {::i2c::type_of<::GlobalNamespace::CollisionSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound._AudioLateUpdate_b__62_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::_AudioLateUpdate_b__62_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180330be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<AudioLateUpdate>b__62_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound._AudioLateUpdate_b__62_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::_AudioLateUpdate_b__62_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180330be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<AudioLateUpdate>b__62_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound._OnCollisionEnter_b__65_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::_OnCollisionEnter_b__65_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180330c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<OnCollisionEnter>b__65_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CollisionSound._OnCollisionEnter_b__65_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CollisionSound::*)()>(&::GlobalNamespace::CollisionSound::_OnCollisionEnter_b__65_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180330c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<OnCollisionEnter>b__65_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::CollisionSound::__cordl_internal_get_Rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::CollisionSound::__cordl_internal_get_Rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rb;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set_Rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Rb = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::CollisionSound::__cordl_internal_get_Prop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prop;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::CollisionSound::__cordl_internal_get_Prop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prop;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set_Prop(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioImpactConfig>& GlobalNamespace::CollisionSound::__cordl_internal_get_ImpactConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpactConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioImpactConfig> const& GlobalNamespace::CollisionSound::__cordl_internal_get_ImpactConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpactConfig;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set_ImpactConfig(::UnityW<::GlobalNamespace::AudioImpactConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImpactConfig = value;
}
constexpr ::GlobalNamespace::CollisionSound_ImpactSize& GlobalNamespace::CollisionSound::__cordl_internal_get_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr ::GlobalNamespace::CollisionSound_ImpactSize const& GlobalNamespace::CollisionSound::__cordl_internal_get_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set_Size(::GlobalNamespace::CollisionSound_ImpactSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Size = value;
}
constexpr float_t& GlobalNamespace::CollisionSound::__cordl_internal_get_WaterTestSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterTestSize;
}
constexpr float_t const& GlobalNamespace::CollisionSound::__cordl_internal_get_WaterTestSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaterTestSize;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set_WaterTestSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaterTestSize = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CollisionSound::__cordl_internal_get_RollAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RollAxis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CollisionSound::__cordl_internal_get_RollAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RollAxis;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set_RollAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RollAxis = value;
}
constexpr bool& GlobalNamespace::CollisionSound::__cordl_internal_get_DebugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugMode;
}
constexpr bool const& GlobalNamespace::CollisionSound::__cordl_internal_get_DebugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugMode;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set_DebugMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugMode = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CollisionSound::__cordl_internal_get__cachedTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CollisionSound::__cordl_internal_get__cachedTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTransform;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__cachedTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedTransform = value;
}
constexpr bool& GlobalNamespace::CollisionSound::__cordl_internal_get__tooFar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooFar;
}
constexpr bool const& GlobalNamespace::CollisionSound::__cordl_internal_get__tooFar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooFar;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__tooFar(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tooFar = value;
}
constexpr bool& GlobalNamespace::CollisionSound::__cordl_internal_get__shouldUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldUpdate;
}
constexpr bool const& GlobalNamespace::CollisionSound::__cordl_internal_get__shouldUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldUpdate;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__shouldUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldUpdate = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::CollisionSound::__cordl_internal_get__softAudioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____softAudioEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::CollisionSound::__cordl_internal_get__softAudioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____softAudioEvent;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__softAudioEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____softAudioEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::CollisionSound::__cordl_internal_get__hardAudioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardAudioEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::CollisionSound::__cordl_internal_get__hardAudioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardAudioEvent;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__hardAudioEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hardAudioEvent = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::CollisionSound::__cordl_internal_get__softRollingController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____softRollingController;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::CollisionSound::__cordl_internal_get__softRollingController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____softRollingController;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__softRollingController(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____softRollingController = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::CollisionSound::__cordl_internal_get__hardRollingController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardRollingController;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::CollisionSound::__cordl_internal_get__hardRollingController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardRollingController;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__hardRollingController(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hardRollingController = value;
}
constexpr bool& GlobalNamespace::CollisionSound::__cordl_internal_get__hasSoftRoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasSoftRoll;
}
constexpr bool const& GlobalNamespace::CollisionSound::__cordl_internal_get__hasSoftRoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasSoftRoll;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__hasSoftRoll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasSoftRoll = value;
}
constexpr bool& GlobalNamespace::CollisionSound::__cordl_internal_get__hasHardRoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasHardRoll;
}
constexpr bool const& GlobalNamespace::CollisionSound::__cordl_internal_get__hasHardRoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasHardRoll;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__hasHardRoll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasHardRoll = value;
}
constexpr bool& GlobalNamespace::CollisionSound::__cordl_internal_get__hasRollAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRollAxis;
}
constexpr bool const& GlobalNamespace::CollisionSound::__cordl_internal_get__hasRollAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRollAxis;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__hasRollAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasRollAxis = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CollisionSound::__cordl_internal_get__preVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preVel;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CollisionSound::__cordl_internal_get__preVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preVel;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__preVel(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preVel = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CollisionSound::__cordl_internal_get__preAngVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preAngVel;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CollisionSound::__cordl_internal_get__preAngVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preAngVel;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__preAngVel(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preAngVel = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CollisionSound::__cordl_internal_get__preCOM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preCOM;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CollisionSound::__cordl_internal_get__preCOM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preCOM;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__preCOM(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preCOM = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CollisionSound::__cordl_internal_get__lastContactPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastContactPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CollisionSound::__cordl_internal_get__lastContactPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastContactPoint;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__lastContactPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastContactPoint = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CollisionSound::__cordl_internal_get__lastDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CollisionSound::__cordl_internal_get__lastDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDirection;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__lastDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDirection = value;
}
constexpr float_t& GlobalNamespace::CollisionSound::__cordl_internal_get__lastImpactIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastImpactIntensity;
}
constexpr float_t const& GlobalNamespace::CollisionSound::__cordl_internal_get__lastImpactIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastImpactIntensity;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__lastImpactIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastImpactIntensity = value;
}
constexpr float_t& GlobalNamespace::CollisionSound::__cordl_internal_get__lastContactDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastContactDistance;
}
constexpr float_t const& GlobalNamespace::CollisionSound::__cordl_internal_get__lastContactDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastContactDistance;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__lastContactDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastContactDistance = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::CollisionSound::__cordl_internal_get__lastRollingSpeeds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRollingSpeeds;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::CollisionSound::__cordl_internal_get__lastRollingSpeeds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRollingSpeeds;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__lastRollingSpeeds(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRollingSpeeds = value;
}
constexpr int32_t& GlobalNamespace::CollisionSound::__cordl_internal_get__speedCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speedCounter;
}
constexpr int32_t const& GlobalNamespace::CollisionSound::__cordl_internal_get__speedCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speedCounter;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__speedCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speedCounter = value;
}
constexpr float_t& GlobalNamespace::CollisionSound::__cordl_internal_get__rollingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rollingSpeed;
}
constexpr float_t const& GlobalNamespace::CollisionSound::__cordl_internal_get__rollingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rollingSpeed;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__rollingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rollingSpeed = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::CollisionSound::__cordl_internal_get__softRollVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____softRollVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::CollisionSound::__cordl_internal_get__softRollVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____softRollVol;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__softRollVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____softRollVol = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::CollisionSound::__cordl_internal_get__hardRollVol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardRollVol;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::CollisionSound::__cordl_internal_get__hardRollVol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hardRollVol;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__hardRollVol(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hardRollVol = value;
}
constexpr int32_t& GlobalNamespace::CollisionSound::__cordl_internal_get__currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr int32_t const& GlobalNamespace::CollisionSound::__cordl_internal_get__currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__currentState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentState = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& GlobalNamespace::CollisionSound::__cordl_internal_get__sampleHeightHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleHeightHelper;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& GlobalNamespace::CollisionSound::__cordl_internal_get__sampleHeightHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleHeightHelper;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__sampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleHeightHelper = value;
}
constexpr float_t& GlobalNamespace::CollisionSound::__cordl_internal_get__waterDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterDepth;
}
constexpr float_t const& GlobalNamespace::CollisionSound::__cordl_internal_get__waterDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterDepth;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__waterDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterDepth = value;
}
constexpr float_t& GlobalNamespace::CollisionSound::__cordl_internal_get__lastTestedWaterDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTestedWaterDepth;
}
constexpr float_t const& GlobalNamespace::CollisionSound::__cordl_internal_get__lastTestedWaterDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTestedWaterDepth;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__lastTestedWaterDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastTestedWaterDepth = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CollisionSound::__cordl_internal_get__lastWaterTestPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWaterTestPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CollisionSound::__cordl_internal_get__lastWaterTestPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWaterTestPoint;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__lastWaterTestPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWaterTestPoint = value;
}
constexpr float_t& GlobalNamespace::CollisionSound::__cordl_internal_get__lastWaterTestPointSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWaterTestPointSpeed;
}
constexpr float_t const& GlobalNamespace::CollisionSound::__cordl_internal_get__lastWaterTestPointSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWaterTestPointSpeed;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__lastWaterTestPointSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWaterTestPointSpeed = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::CollisionSound::__cordl_internal_get__waterSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::CollisionSound::__cordl_internal_get__waterSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterSound;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__waterSound(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& GlobalNamespace::CollisionSound::__cordl_internal_get__waterSoundDeep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterSoundDeep;
}
constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& GlobalNamespace::CollisionSound::__cordl_internal_get__waterSoundDeep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterSoundDeep;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__waterSoundDeep(::UnityW<::GlobalNamespace::AudioLayerContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterSoundDeep = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::CollisionSound::__cordl_internal_get__waterImpactEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterImpactEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::CollisionSound::__cordl_internal_get__waterImpactEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterImpactEvent;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__waterImpactEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterImpactEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::CollisionSound::__cordl_internal_get__waterImpactDeepEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterImpactDeepEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::CollisionSound::__cordl_internal_get__waterImpactDeepEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waterImpactDeepEvent;
}
constexpr void GlobalNamespace::CollisionSound::__cordl_internal_set__waterImpactDeepEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waterImpactDeepEvent = value;
}
inline void GlobalNamespace::CollisionSound::setStaticF__GUIDebug_k__BackingField(::GlobalNamespace::CollisionSoundGUI*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CollisionSoundGUI*, "<GUIDebug>k__BackingField", ::GlobalNamespace::CollisionSound*>(std::forward<::GlobalNamespace::CollisionSoundGUI*>(value));
}
inline ::GlobalNamespace::CollisionSoundGUI* GlobalNamespace::CollisionSound::getStaticF__GUIDebug_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CollisionSoundGUI*, "<GUIDebug>k__BackingField", ::GlobalNamespace::CollisionSound*>();
}
inline void GlobalNamespace::CollisionSound::setStaticF__GUIDebug3D_k__BackingField(::GlobalNamespace::CollisionSoundGUI3D*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CollisionSoundGUI3D*, "<GUIDebug3D>k__BackingField", ::GlobalNamespace::CollisionSound*>(std::forward<::GlobalNamespace::CollisionSoundGUI3D*>(value));
}
inline ::GlobalNamespace::CollisionSoundGUI3D* GlobalNamespace::CollisionSound::getStaticF__GUIDebug3D_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CollisionSoundGUI3D*, "<GUIDebug3D>k__BackingField", ::GlobalNamespace::CollisionSound*>();
}
inline void GlobalNamespace::CollisionSound::setStaticF__DepthMode_k__BackingField(::GlobalNamespace::WaterDepthSampleData_GetDepthMode  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::WaterDepthSampleData_GetDepthMode, "<DepthMode>k__BackingField", ::GlobalNamespace::CollisionSound*>(std::forward<::GlobalNamespace::WaterDepthSampleData_GetDepthMode>(value));
}
inline ::GlobalNamespace::WaterDepthSampleData_GetDepthMode GlobalNamespace::CollisionSound::getStaticF__DepthMode_k__BackingField()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::WaterDepthSampleData_GetDepthMode, "<DepthMode>k__BackingField", ::GlobalNamespace::CollisionSound*>();
}
inline bool GlobalNamespace::CollisionSound::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CollisionSoundGUI* GlobalNamespace::CollisionSound::get_GUIDebug()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"get_GUIDebug", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CollisionSoundGUI*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CollisionSound::set_GUIDebug(::GlobalNamespace::CollisionSoundGUI*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"set_GUIDebug", {}, {::i2c::type_of<::GlobalNamespace::CollisionSoundGUI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::CollisionSoundGUI3D* GlobalNamespace::CollisionSound::get_GUIDebug3D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"get_GUIDebug3D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CollisionSoundGUI3D*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CollisionSound::set_GUIDebug3D(::GlobalNamespace::CollisionSoundGUI3D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"set_GUIDebug3D", {}, {::i2c::type_of<::GlobalNamespace::CollisionSoundGUI3D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::WaterDepthSampleData_GetDepthMode GlobalNamespace::CollisionSound::get_DepthMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"get_DepthMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WaterDepthSampleData_GetDepthMode>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CollisionSound::set_DepthMode(::GlobalNamespace::WaterDepthSampleData_GetDepthMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"set_DepthMode", {}, {::i2c::type_of<::GlobalNamespace::WaterDepthSampleData_GetDepthMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CollisionSound::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSound::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSound::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSound::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSound::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSound::AudioUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::CollisionSound::AudioFixedUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::CollisionSound::AudioLateUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::CollisionSound::AudioSlowUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::CollisionSound::PassCollsion(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"PassCollsion", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::CollisionSound::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::CollisionSound::InitAudioEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"InitAudioEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSound::CalculateDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"CalculateDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::CollisionSound::GetImpactVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"GetImpactVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::CollisionSound::AudioGetXCallback(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"AudioGetXCallback", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::CollisionSound::PrintGUILog(::GlobalNamespace::AudioEvent*  audioEvent, ::StringW  title)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"PrintGUILog", {}, {::i2c::type_of<::GlobalNamespace::AudioEvent*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioEvent, title);
}
inline void GlobalNamespace::CollisionSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CollisionSound::_AudioLateUpdate_g___clearRef_62_0(::GlobalNamespace::CollisionSound*  s, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<AudioLateUpdate>g___clearRef|62_0", {}, {::i2c::type_of<::GlobalNamespace::CollisionSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, c);
}
inline void GlobalNamespace::CollisionSound::_AudioLateUpdate_g___clearRef_62_1(::GlobalNamespace::CollisionSound*  s, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<AudioLateUpdate>g___clearRef|62_1", {}, {::i2c::type_of<::GlobalNamespace::CollisionSound*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, c);
}
inline float_t GlobalNamespace::CollisionSound::_AudioLateUpdate_b__62_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<AudioLateUpdate>b__62_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::CollisionSound::_AudioLateUpdate_b__62_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<AudioLateUpdate>b__62_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::CollisionSound::_OnCollisionEnter_b__65_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<OnCollisionEnter>b__65_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::CollisionSound::_OnCollisionEnter_b__65_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CollisionSound*>(),
                        {"<OnCollisionEnter>b__65_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::CollisionSound* GlobalNamespace::CollisionSound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CollisionSound*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr  GlobalNamespace::CollisionSound::operator ::GlobalNamespace::IAudioBehaviour*() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* GlobalNamespace::CollisionSound::i___GlobalNamespace__IAudioBehaviour() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CollisionSound::CollisionSound()   {
}
