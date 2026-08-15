#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioFilterBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioFilterBase_def.hpp"
#include "GlobalNamespace/zzzz__IAudioFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioFilterBase.get_OutputSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::AudioFilterBase::get_OutputSampleRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180499bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                        {"get_OutputSampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterBase.CaptureAudioConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::AudioFilterBase::CaptureAudioConfig)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180499ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                        {"CaptureAudioConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterBase.OnAudioConfigurationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::AudioFilterBase::OnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180499b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                        {"OnAudioConfigurationChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterBase.UpdateVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterBase::*)(float_t)>(&::GlobalNamespace::AudioFilterBase::UpdateVariables)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterBase.ProcessSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterBase::*)(::by_ref<::ArrayW<float_t>>, int32_t)>(&::GlobalNamespace::AudioFilterBase::ProcessSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterBase.get_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioFilterBase::*)()>(&::GlobalNamespace::AudioFilterBase::get_InternalBypass)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterBase.set_InternalBypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterBase::*)(bool)>(&::GlobalNamespace::AudioFilterBase::set_InternalBypass)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterBase.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioFilterBase::*)()>(&::GlobalNamespace::AudioFilterBase::get_Bypass)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterBase.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterBase::*)(bool)>(&::GlobalNamespace::AudioFilterBase::set_Bypass)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioFilterBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioFilterBase::*)()>(&::GlobalNamespace::AudioFilterBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioFilterBase::setStaticF_s_outputSampleRate(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_outputSampleRate", ::GlobalNamespace::AudioFilterBase*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::AudioFilterBase::getStaticF_s_outputSampleRate()  {
return ::cordl_internals::getStaticField<int32_t, "s_outputSampleRate", ::GlobalNamespace::AudioFilterBase*>();
}
inline int32_t GlobalNamespace::AudioFilterBase::get_OutputSampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                        {"get_OutputSampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AudioFilterBase::CaptureAudioConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                        {"CaptureAudioConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AudioFilterBase::OnAudioConfigurationChanged(bool  deviceWasChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                        {"OnAudioConfigurationChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceWasChanged);
}
inline void GlobalNamespace::AudioFilterBase::UpdateVariables(float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::AudioFilterBase::ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline bool GlobalNamespace::AudioFilterBase::get_InternalBypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFilterBase::set_InternalBypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioFilterBase::get_Bypass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioFilterBase::set_Bypass(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioFilterBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioFilterBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioFilterBase* GlobalNamespace::AudioFilterBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioFilterBase*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioFilter"
constexpr  GlobalNamespace::AudioFilterBase::operator ::GlobalNamespace::IAudioFilter*() noexcept {
return static_cast<::GlobalNamespace::IAudioFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioFilter"
constexpr ::GlobalNamespace::IAudioFilter* GlobalNamespace::AudioFilterBase::i___GlobalNamespace__IAudioFilter() noexcept {
return static_cast<::GlobalNamespace::IAudioFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioFilterBase::AudioFilterBase()   {
}
