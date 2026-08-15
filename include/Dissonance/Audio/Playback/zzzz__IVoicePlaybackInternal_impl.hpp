#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IVoicePlaybackInternal.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVoicePlaybackInternal_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IPriorityManager_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IRemoteChannelProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVoicePlayback_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVolumeProvider_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.get_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)()>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::get_IsMuted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.set_IsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)(bool)>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::set_IsMuted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.get_PlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)()>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::get_PlayerName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.set_PlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)(::StringW)>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::set_PlayerName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)()>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.StartPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)()>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::StartPlayback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.StopPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)()>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::StopPlayback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.get_AllowPositionalPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)()>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::get_AllowPositionalPlayback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.set_AllowPositionalPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)(bool)>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::set_AllowPositionalPlayback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.get_CodecSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::CodecSettings (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)()>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::get_CodecSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.set_CodecSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)(::Dissonance::CodecSettings)>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::set_CodecSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.SetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::SetTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.get_PlaybackVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)()>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::get_PlaybackVolume)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.set_PlaybackVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)(float_t)>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::set_PlaybackVolume)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.ReceiveAudioPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)(::Dissonance::Networking::VoicePacket)>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::ReceiveAudioPacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.ForceReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)()>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::ForceReset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVoicePlaybackInternal.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::IVoicePlaybackInternal::*)(::Dissonance::Audio::Playback::IPriorityManager*, ::Dissonance::Audio::Playback::IVolumeProvider*)>(&::Dissonance::Audio::Playback::IVoicePlaybackInternal::Setup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 16}
                ));
    return ___internal_method;
  }
};
inline bool Dissonance::Audio::Playback::IVoicePlaybackInternal::get_IsMuted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::set_IsMuted(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Dissonance::Audio::Playback::IVoicePlaybackInternal::get_PlayerName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::set_PlayerName(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::StartPlayback()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::StopPlayback()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Dissonance::Audio::Playback::IVoicePlaybackInternal::get_AllowPositionalPlayback()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::set_AllowPositionalPlayback(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::CodecSettings Dissonance::Audio::Playback::IVoicePlaybackInternal::get_CodecSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CodecSettings>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::set_CodecSettings(::Dissonance::CodecSettings  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::SetTransform(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline float_t Dissonance::Audio::Playback::IVoicePlaybackInternal::get_PlaybackVolume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::set_PlaybackVolume(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::ReceiveAudioPacket(::Dissonance::Networking::VoicePacket  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::ForceReset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::IVoicePlaybackInternal::Setup(::Dissonance::Audio::Playback::IPriorityManager*  priority, ::Dissonance::Audio::Playback::IVolumeProvider*  volume)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priority, volume);
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr  Dissonance::Audio::Playback::IVoicePlaybackInternal::operator ::Dissonance::Audio::Playback::IRemoteChannelProvider*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IRemoteChannelProvider"
constexpr ::Dissonance::Audio::Playback::IRemoteChannelProvider* Dissonance::Audio::Playback::IVoicePlaybackInternal::i___Dissonance__Audio__Playback__IRemoteChannelProvider() noexcept {
return static_cast<::Dissonance::Audio::Playback::IRemoteChannelProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IVoicePlayback"
constexpr  Dissonance::Audio::Playback::IVoicePlaybackInternal::operator ::Dissonance::Audio::Playback::IVoicePlayback*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVoicePlayback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IVoicePlayback"
constexpr ::Dissonance::Audio::Playback::IVoicePlayback* Dissonance::Audio::Playback::IVoicePlaybackInternal::i___Dissonance__Audio__Playback__IVoicePlayback() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVoicePlayback*>(static_cast<void*>(this));
}
