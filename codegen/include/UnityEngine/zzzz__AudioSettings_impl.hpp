#pragma once
// IWYU pragma private; include "UnityEngine/AudioSettings.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioSettings_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
#include "UnityEngine/zzzz__AudioSettings_def.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180eb2aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::*)(bool)>(&::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(),
                    {::i2c::class_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioSettings_AudioConfigurationChangeHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AudioSettings_AudioConfigurationChangeHandler::Invoke(bool  deviceWasChanged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceWasChanged);
}
inline ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* UnityEngine::AudioSettings_AudioConfigurationChangeHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::AudioSettings_AudioConfigurationChangeHandler()   {
}
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetSpeakerMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioSpeakerMode (*)()>(&::UnityEngine::AudioSettings::GetSpeakerMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223a810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"GetSpeakerMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.SetConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AudioConfiguration)>(&::UnityEngine::AudioSettings::SetConfiguration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18223a8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"SetConfiguration", {}, {::i2c::type_of<::UnityEngine::AudioConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::AudioSettings::GetSampleRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223a800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"GetSampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.get_speakerMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioSpeakerMode (*)()>(&::UnityEngine::AudioSettings::get_speakerMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223a810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"get_speakerMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.get_dspTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::UnityEngine::AudioSettings::get_dspTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223a9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"get_dspTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.get_outputSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::AudioSettings::get_outputSampleRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223a800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"get_outputSampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetDSPBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::AudioSettings::GetDSPBufferSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223a7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"GetDSPBufferSize", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioConfiguration (*)()>(&::UnityEngine::AudioSettings::GetConfiguration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18223a7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"GetConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AudioConfiguration)>(&::UnityEngine::AudioSettings::Reset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18223a8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::AudioConfiguration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.add_OnAudioConfigurationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*)>(&::UnityEngine::AudioSettings::add_OnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18223a910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"add_OnAudioConfigurationChanged", {}, {::i2c::type_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.remove_OnAudioConfigurationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*)>(&::UnityEngine::AudioSettings::remove_OnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18223a9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"remove_OnAudioConfigurationChanged", {}, {::i2c::type_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.InvokeOnAudioConfigurationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::AudioSettings::InvokeOnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18223a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"InvokeOnAudioConfigurationChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.InvokeOnAudioSystemShuttingDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AudioSettings::InvokeOnAudioSystemShuttingDown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18223a850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"InvokeOnAudioSystemShuttingDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.InvokeOnAudioSystemStartedUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AudioSettings::InvokeOnAudioSystemStartedUp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18223a880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"InvokeOnAudioSystemStartedUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.SetConfiguration_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::AudioConfiguration>)>(&::UnityEngine::AudioSettings::SetConfiguration_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223a8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"SetConfiguration_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetConfiguration_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::AudioConfiguration>)>(&::UnityEngine::AudioSettings::GetConfiguration_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18223a7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"GetConfiguration_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioSettings::setStaticF_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*, "OnAudioConfigurationChanged", ::UnityEngine::AudioSettings*>(std::forward<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(value));
}
inline ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* UnityEngine::AudioSettings::getStaticF_OnAudioConfigurationChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*, "OnAudioConfigurationChanged", ::UnityEngine::AudioSettings*>();
}
inline void UnityEngine::AudioSettings::setStaticF_OnAudioSystemShuttingDown(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnAudioSystemShuttingDown", ::UnityEngine::AudioSettings*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::AudioSettings::getStaticF_OnAudioSystemShuttingDown()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnAudioSystemShuttingDown", ::UnityEngine::AudioSettings*>();
}
inline void UnityEngine::AudioSettings::setStaticF_OnAudioSystemStartedUp(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnAudioSystemStartedUp", ::UnityEngine::AudioSettings*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::AudioSettings::getStaticF_OnAudioSystemStartedUp()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnAudioSystemStartedUp", ::UnityEngine::AudioSettings*>();
}
inline ::UnityEngine::AudioSpeakerMode UnityEngine::AudioSettings::GetSpeakerMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"GetSpeakerMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioSpeakerMode>(nullptr, ___internal_method);
}
inline bool UnityEngine::AudioSettings::SetConfiguration(::UnityEngine::AudioConfiguration  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"SetConfiguration", {}, {::i2c::type_of<::UnityEngine::AudioConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, config);
}
inline int32_t UnityEngine::AudioSettings::GetSampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"GetSampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::AudioSpeakerMode UnityEngine::AudioSettings::get_speakerMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"get_speakerMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioSpeakerMode>(nullptr, ___internal_method);
}
inline double_t UnityEngine::AudioSettings::get_dspTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"get_dspTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::AudioSettings::get_outputSampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"get_outputSampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings::GetDSPBufferSize(::by_ref<int32_t>  bufferLength, ::by_ref<int32_t>  numBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"GetDSPBufferSize", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bufferLength, numBuffers);
}
inline ::UnityEngine::AudioConfiguration UnityEngine::AudioSettings::GetConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"GetConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioConfiguration>(nullptr, ___internal_method);
}
inline bool UnityEngine::AudioSettings::Reset(::UnityEngine::AudioConfiguration  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::AudioConfiguration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, config);
}
inline void UnityEngine::AudioSettings::add_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"add_OnAudioConfigurationChanged", {}, {::i2c::type_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::AudioSettings::remove_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"remove_OnAudioConfigurationChanged", {}, {::i2c::type_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::AudioSettings::InvokeOnAudioConfigurationChanged(bool  deviceWasChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"InvokeOnAudioConfigurationChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceWasChanged);
}
inline void UnityEngine::AudioSettings::InvokeOnAudioSystemShuttingDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"InvokeOnAudioSystemShuttingDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings::InvokeOnAudioSystemStartedUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"InvokeOnAudioSystemStartedUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::AudioSettings::SetConfiguration_Injected(::by_ref<::UnityEngine::AudioConfiguration>  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"SetConfiguration_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, config);
}
inline void UnityEngine::AudioSettings::GetConfiguration_Injected(::by_ref<::UnityEngine::AudioConfiguration>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AudioSettings*>(),
                        {"GetConfiguration_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioSettings::AudioSettings()   {
}
