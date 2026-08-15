#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerGroup.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioMixerGroup::*)()>(&::UnityEngine::Audio::AudioMixerGroup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioMixerGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerGroup.get_audioMixer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixer> (::UnityEngine::Audio::AudioMixerGroup::*)()>(&::UnityEngine::Audio::AudioMixerGroup::get_audioMixer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182239c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioMixerGroup*>(),
                        {"get_audioMixer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerGroup.get_audioMixer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioMixerGroup::get_audioMixer_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182239c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioMixerGroup*>(),
                        {"get_audioMixer_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::AudioMixerGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioMixerGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Audio::AudioMixer> UnityEngine::Audio::AudioMixerGroup::get_audioMixer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioMixerGroup*>(),
                        {"get_audioMixer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioMixer>>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Audio::AudioMixerGroup::get_audioMixer_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioMixerGroup*>(),
                        {"get_audioMixer_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Audio::AudioMixerGroup* UnityEngine::Audio::AudioMixerGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Audio::AudioMixerGroup*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioMixerGroup::AudioMixerGroup()   {
}
