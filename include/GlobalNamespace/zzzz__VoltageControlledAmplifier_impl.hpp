#pragma once
// IWYU pragma private; include "GlobalNamespace/VoltageControlledAmplifier.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_impl.hpp"
#include "GlobalNamespace/zzzz__VoltageControlledAmplifier_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__IAudioBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__IVirtualizable_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_def.hpp"
#include "GlobalNamespace/zzzz__VoltageControlledAmplifier_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VoltageControlledAmplifier_VolumeType::VoltageControlledAmplifier_VolumeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoltageControlledAmplifier_VolumeType::VoltageControlledAmplifier_VolumeType()   {
}
constexpr ::GlobalNamespace::VoltageControlledAmplifier_VolumeType  GlobalNamespace::VoltageControlledAmplifier_VolumeType::Attenuation{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VoltageControlledAmplifier_VolumeType  GlobalNamespace::VoltageControlledAmplifier_VolumeType::RTPC{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VoltageControlledAmplifier_VolumeType  GlobalNamespace::VoltageControlledAmplifier_VolumeType::Final{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::get_Volume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.get_NormalizeAgainstSum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::get_NormalizeAgainstSum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_NormalizeAgainstSum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.get_VolumeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VoltageControlledAmplifier_VolumeType (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::get_VolumeMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_VolumeMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.get_VoiceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::get_VoiceLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_VoiceLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.get_VoiceLimitBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VoiceLimitBehaviorType (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::get_VoiceLimitBehavior)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_VoiceLimitBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.get_Cooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::get_Cooldown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_Cooldown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.get_Normalizer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioVolume* (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::get_Normalizer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_Normalizer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.set_Normalizer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)(::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::VoltageControlledAmplifier::set_Normalizer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"set_Normalizer", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.get_CachedSum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::get_CachedSum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_CachedSum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.set_CachedSum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)(float_t)>(&::GlobalNamespace::VoltageControlledAmplifier::set_CachedSum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"set_CachedSum", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.set_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)(bool)>(&::GlobalNamespace::VoltageControlledAmplifier::set_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804a71e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.RegisterASC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)(::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::VoltageControlledAmplifier::RegisterASC)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1804a72c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"RegisterASC", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.CalculateNormalizer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)(float_t)>(&::GlobalNamespace::VoltageControlledAmplifier::CalculateNormalizer)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1804a6f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"CalculateNormalizer", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.AudioLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)(float_t)>(&::GlobalNamespace::VoltageControlledAmplifier::AudioLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a6f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.AudioUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)(float_t)>(&::GlobalNamespace::VoltageControlledAmplifier::AudioUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.AudioFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)(float_t)>(&::GlobalNamespace::VoltageControlledAmplifier::AudioFixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier.AudioSlowUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)(float_t)>(&::GlobalNamespace::VoltageControlledAmplifier::AudioSlowUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoltageControlledAmplifier::*)()>(&::GlobalNamespace::VoltageControlledAmplifier::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoltageControlledAmplifier._RegisterASC_g___deregister_35_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VoltageControlledAmplifier*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::VoltageControlledAmplifier::_RegisterASC_g___deregister_35_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804a73d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"<RegisterASC>g___deregister|35_0", {}, {::i2c::type_of<::GlobalNamespace::VoltageControlledAmplifier*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volume;
}
constexpr void GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_set__volume(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volume = value;
}
constexpr float_t& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__normalizeAgainstSum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalizeAgainstSum;
}
constexpr float_t const& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__normalizeAgainstSum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalizeAgainstSum;
}
constexpr void GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_set__normalizeAgainstSum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalizeAgainstSum = value;
}
constexpr ::GlobalNamespace::VoltageControlledAmplifier_VolumeType& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__volumeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeMode;
}
constexpr ::GlobalNamespace::VoltageControlledAmplifier_VolumeType const& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__volumeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeMode;
}
constexpr void GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_set__volumeMode(::GlobalNamespace::VoltageControlledAmplifier_VolumeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeMode = value;
}
constexpr float_t& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__cachedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedVolume;
}
constexpr float_t const& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__cachedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedVolume;
}
constexpr void GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_set__cachedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedVolume = value;
}
constexpr int32_t& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__voiceLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimit;
}
constexpr int32_t const& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__voiceLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimit;
}
constexpr void GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_set__voiceLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceLimit = value;
}
constexpr ::GlobalNamespace::VoiceLimitBehaviorType& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__voiceLimitBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimitBehavior;
}
constexpr ::GlobalNamespace::VoiceLimitBehaviorType const& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__voiceLimitBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceLimitBehavior;
}
constexpr void GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_set__voiceLimitBehavior(::GlobalNamespace::VoiceLimitBehaviorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceLimitBehavior = value;
}
constexpr float_t& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldown;
}
constexpr float_t const& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cooldown;
}
constexpr void GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_set__cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cooldown = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__Normalizer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Normalizer_k__BackingField;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__Normalizer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Normalizer_k__BackingField;
}
constexpr void GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_set__Normalizer_k__BackingField(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Normalizer_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__CachedSum_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedSum_k__BackingField;
}
constexpr float_t const& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__CachedSum_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedSum_k__BackingField;
}
constexpr void GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_set__CachedSum_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CachedSum_k__BackingField = value;
}
constexpr bool& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__Initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_get__Initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr void GlobalNamespace::VoltageControlledAmplifier::__cordl_internal_set__Initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized_k__BackingField = value;
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::VoltageControlledAmplifier::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline float_t GlobalNamespace::VoltageControlledAmplifier::get_NormalizeAgainstSum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_NormalizeAgainstSum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::VoltageControlledAmplifier_VolumeType GlobalNamespace::VoltageControlledAmplifier::get_VolumeMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_VolumeMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VoltageControlledAmplifier_VolumeType>(this, ___internal_method);
}
inline int32_t GlobalNamespace::VoltageControlledAmplifier::get_VoiceLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_VoiceLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceLimitBehaviorType GlobalNamespace::VoltageControlledAmplifier::get_VoiceLimitBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_VoiceLimitBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VoiceLimitBehaviorType>(this, ___internal_method);
}
inline float_t GlobalNamespace::VoltageControlledAmplifier::get_Cooldown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_Cooldown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioVolume* GlobalNamespace::VoltageControlledAmplifier::get_Normalizer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_Normalizer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioVolume*>(this, ___internal_method);
}
inline void GlobalNamespace::VoltageControlledAmplifier::set_Normalizer(::GlobalNamespace::AudioVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"set_Normalizer", {}, {::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::VoltageControlledAmplifier::get_CachedSum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_CachedSum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::VoltageControlledAmplifier::set_CachedSum(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"set_CachedSum", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::VoltageControlledAmplifier::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VoltageControlledAmplifier::set_Initialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::VoltageControlledAmplifier::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoltageControlledAmplifier::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoltageControlledAmplifier::RegisterASC(::GlobalNamespace::AudioSourceController*  asc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"RegisterASC", {}, {::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asc);
}
inline void GlobalNamespace::VoltageControlledAmplifier::CalculateNormalizer(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"CalculateNormalizer", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::VoltageControlledAmplifier::AudioLateUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"AudioLateUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::VoltageControlledAmplifier::AudioUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"AudioUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::VoltageControlledAmplifier::AudioFixedUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"AudioFixedUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::VoltageControlledAmplifier::AudioSlowUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"AudioSlowUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::VoltageControlledAmplifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoltageControlledAmplifier::_RegisterASC_g___deregister_35_0(::GlobalNamespace::VoltageControlledAmplifier*  v, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoltageControlledAmplifier*>(),
                        {"<RegisterASC>g___deregister|35_0", {}, {::i2c::type_of<::GlobalNamespace::VoltageControlledAmplifier*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, v, c);
}
inline ::GlobalNamespace::VoltageControlledAmplifier* GlobalNamespace::VoltageControlledAmplifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoltageControlledAmplifier*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr  GlobalNamespace::VoltageControlledAmplifier::operator ::GlobalNamespace::IAudioBehaviour*() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* GlobalNamespace::VoltageControlledAmplifier::i___GlobalNamespace__IAudioBehaviour() noexcept {
return static_cast<::GlobalNamespace::IAudioBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IVirtualizable"
constexpr  GlobalNamespace::VoltageControlledAmplifier::operator ::GlobalNamespace::IVirtualizable*() noexcept {
return static_cast<::GlobalNamespace::IVirtualizable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVirtualizable"
constexpr ::GlobalNamespace::IVirtualizable* GlobalNamespace::VoltageControlledAmplifier::i___GlobalNamespace__IVirtualizable() noexcept {
return static_cast<::GlobalNamespace::IVirtualizable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoltageControlledAmplifier::VoltageControlledAmplifier()   {
}
