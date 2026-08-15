#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceCompressor.hpp"
#include "GlobalNamespace/zzzz__VoiceCompressor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceCompressor.get_Reduction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VoiceCompressor::*)()>(&::GlobalNamespace::VoiceCompressor::get_Reduction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceCompressor>(),
                        {"get_Reduction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceCompressor.set_Reduction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceCompressor::*)(float_t)>(&::GlobalNamespace::VoiceCompressor::set_Reduction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceCompressor>(),
                        {"set_Reduction", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceCompressor.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceCompressor::*)()>(&::GlobalNamespace::VoiceCompressor::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a6ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceCompressor>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceCompressor.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceCompressor::*)(int32_t)>(&::GlobalNamespace::VoiceCompressor::Prepare)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804a6d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceCompressor>(),
                        {"Prepare", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceCompressor.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VoiceCompressor::*)(float_t)>(&::GlobalNamespace::VoiceCompressor::Process)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804a6df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceCompressor>(),
                        {"Process", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VoiceCompressor::setStaticF_Threshold(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Threshold", ::GlobalNamespace::VoiceCompressor>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::VoiceCompressor::getStaticF_Threshold()  {
return ::cordl_internals::getStaticField<float_t, "Threshold", ::GlobalNamespace::VoiceCompressor>();
}
inline float_t GlobalNamespace::VoiceCompressor::get_Reduction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceCompressor>(),
                        {"get_Reduction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::VoiceCompressor::set_Reduction(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceCompressor>(),
                        {"set_Reduction", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::VoiceCompressor::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceCompressor>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::VoiceCompressor::Prepare(int32_t  sampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceCompressor>(),
                        {"Prepare", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sampleRate);
}
inline float_t GlobalNamespace::VoiceCompressor::Process(float_t  sample)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceCompressor>(),
                        {"Process", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, sample);
}
// Ctor Parameters [CppParam { name: "_peak", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_envelope", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_threshold", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_kneeWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sampleRate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_attackCoefficient", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_releaseCoefficient", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Reduction_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VoiceCompressor::VoiceCompressor(float_t  _peak, float_t  _envelope, float_t  _threshold, float_t  _kneeWidth, int32_t  _sampleRate, float_t  _attackCoefficient, float_t  _releaseCoefficient, float_t  _Reduction_k__BackingField) noexcept  {
this->_peak = _peak;
this->_envelope = _envelope;
this->_threshold = _threshold;
this->_kneeWidth = _kneeWidth;
this->_sampleRate = _sampleRate;
this->_attackCoefficient = _attackCoefficient;
this->_releaseCoefficient = _releaseCoefficient;
this->_Reduction_k__BackingField = _Reduction_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceCompressor::VoiceCompressor()   {
}
