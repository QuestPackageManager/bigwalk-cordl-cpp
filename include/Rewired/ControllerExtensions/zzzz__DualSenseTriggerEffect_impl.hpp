#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffect_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffect.IsInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t, uint8_t, uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffect::IsInRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818cdea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"IsInRange", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffect.Clamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint8_t, uint8_t, uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffect::Clamp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818cddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"Clamp", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffect.NormalizeStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffect::NormalizeStrength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cdf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"NormalizeStrength", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffect.NormalizePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffect::NormalizePosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cdf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"NormalizePosition", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffect.NormalizeAmplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffect::NormalizeAmplitude)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cdf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"NormalizeAmplitude", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffect.NormalizeFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffect::NormalizeFrequency)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cdf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"NormalizeFrequency", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffect.ThrowArgumentOutOfRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, uint8_t, uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffect::ThrowArgumentOutOfRange)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818cdf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"ThrowArgumentOutOfRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseTriggerEffect.LogValueClamped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, uint8_t)>(&::Rewired::ControllerExtensions::DualSenseTriggerEffect::LogValueClamped)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818cdeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"LogValueClamped", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Rewired::ControllerExtensions::DualSenseTriggerEffect::IsInRange(uint8_t  value, uint8_t  min, uint8_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"IsInRange", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, min, max);
}
inline uint8_t Rewired::ControllerExtensions::DualSenseTriggerEffect::Clamp(uint8_t  value, uint8_t  min, uint8_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"Clamp", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value, min, max);
}
inline float_t Rewired::ControllerExtensions::DualSenseTriggerEffect::NormalizeStrength(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"NormalizeStrength", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Rewired::ControllerExtensions::DualSenseTriggerEffect::NormalizePosition(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"NormalizePosition", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Rewired::ControllerExtensions::DualSenseTriggerEffect::NormalizeAmplitude(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"NormalizeAmplitude", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Rewired::ControllerExtensions::DualSenseTriggerEffect::NormalizeFrequency(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"NormalizeFrequency", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffect::ThrowArgumentOutOfRange(::StringW  name, uint8_t  min, uint8_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"ThrowArgumentOutOfRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, min, max);
}
inline void Rewired::ControllerExtensions::DualSenseTriggerEffect::LogValueClamped(uint8_t  origValue, uint8_t  clampedValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseTriggerEffect*>(),
                        {"LogValueClamped", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origValue, clampedValue);
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseTriggerEffect::DualSenseTriggerEffect()   {
}
