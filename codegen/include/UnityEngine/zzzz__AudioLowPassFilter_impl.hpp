#pragma once
// IWYU pragma private; include "UnityEngine/AudioLowPassFilter.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__AudioLowPassFilter_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::AudioLowPassFilter.get_cutoffFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AudioLowPassFilter::*)()>(&::UnityEngine::AudioLowPassFilter::get_cutoffFrequency)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182239ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"get_cutoffFrequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioLowPassFilter.set_cutoffFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioLowPassFilter::*)(float_t)>(&::UnityEngine::AudioLowPassFilter::set_cutoffFrequency)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182239be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"set_cutoffFrequency", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioLowPassFilter.set_lowpassResonanceQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioLowPassFilter::*)(float_t)>(&::UnityEngine::AudioLowPassFilter::set_lowpassResonanceQ)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182239c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"set_lowpassResonanceQ", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioLowPassFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioLowPassFilter::*)()>(&::UnityEngine::AudioLowPassFilter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioLowPassFilter.get_cutoffFrequency_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AudioLowPassFilter::get_cutoffFrequency_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182239b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"get_cutoffFrequency_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioLowPassFilter.set_cutoffFrequency_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioLowPassFilter::set_cutoffFrequency_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182239bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"set_cutoffFrequency_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioLowPassFilter.set_lowpassResonanceQ_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AudioLowPassFilter::set_lowpassResonanceQ_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182239c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"set_lowpassResonanceQ_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::AudioLowPassFilter::get_cutoffFrequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"get_cutoffFrequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AudioLowPassFilter::set_cutoffFrequency(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"set_cutoffFrequency", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioLowPassFilter::set_lowpassResonanceQ(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"set_lowpassResonanceQ", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AudioLowPassFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::AudioLowPassFilter::get_cutoffFrequency_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"get_cutoffFrequency_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AudioLowPassFilter::set_cutoffFrequency_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"set_cutoffFrequency_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AudioLowPassFilter::set_lowpassResonanceQ_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioLowPassFilter*>(),
                        {"set_lowpassResonanceQ_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::AudioLowPassFilter* UnityEngine::AudioLowPassFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioLowPassFilter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioLowPassFilter::AudioLowPassFilter()   {
}
