#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ColorUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorUtilities_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorUtilities.StandardIlluminantY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::ColorUtilities::StandardIlluminantY)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fbf5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"StandardIlluminantY", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorUtilities.CIExyToLMS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::UnityEngine::Rendering::PostProcessing::ColorUtilities::CIExyToLMS)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fbf1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"CIExyToLMS", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorUtilities.ComputeColorBalance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::UnityEngine::Rendering::PostProcessing::ColorUtilities::ComputeColorBalance)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181fbf420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ComputeColorBalance", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorUtilities.ColorToLift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::UnityEngine::Rendering::PostProcessing::ColorUtilities::ColorToLift)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fbf3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ColorToLift", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorUtilities.ColorToInverseGamma
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::UnityEngine::Rendering::PostProcessing::ColorUtilities::ColorToInverseGamma)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181fbf2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ColorToInverseGamma", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorUtilities.ColorToGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector4)>(&::UnityEngine::Rendering::PostProcessing::ColorUtilities::ColorToGain)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fbf280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ColorToGain", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorUtilities.LogCToLinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::ColorUtilities::LogCToLinear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fbf590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"LogCToLinear", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorUtilities.LinearToLogC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::ColorUtilities::LinearToLogC)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fbf540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"LinearToLogC", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorUtilities.ToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Color)>(&::UnityEngine::Rendering::PostProcessing::ColorUtilities::ToHex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fbf620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ToHex", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ColorUtilities.ToRGBA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(uint32_t)>(&::UnityEngine::Rendering::PostProcessing::ColorUtilities::ToRGBA)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fbf6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ToRGBA", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Rendering::PostProcessing::ColorUtilities::StandardIlluminantY(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"StandardIlluminantY", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::PostProcessing::ColorUtilities::CIExyToLMS(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"CIExyToLMS", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, x, y);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::PostProcessing::ColorUtilities::ComputeColorBalance(float_t  temperature, float_t  tint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ComputeColorBalance", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, temperature, tint);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::PostProcessing::ColorUtilities::ColorToLift(::UnityEngine::Vector4  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ColorToLift", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::PostProcessing::ColorUtilities::ColorToInverseGamma(::UnityEngine::Vector4  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ColorToInverseGamma", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::PostProcessing::ColorUtilities::ColorToGain(::UnityEngine::Vector4  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ColorToGain", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, color);
}
inline float_t UnityEngine::Rendering::PostProcessing::ColorUtilities::LogCToLinear(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"LogCToLinear", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t UnityEngine::Rendering::PostProcessing::ColorUtilities::LinearToLogC(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"LinearToLogC", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline uint32_t UnityEngine::Rendering::PostProcessing::ColorUtilities::ToHex(::UnityEngine::Color  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ToHex", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, c);
}
inline ::UnityEngine::Color UnityEngine::Rendering::PostProcessing::ColorUtilities::ToRGBA(uint32_t  hex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ColorUtilities*>(),
                        {"ToRGBA", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, hex);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ColorUtilities::ColorUtilities()   {
}
