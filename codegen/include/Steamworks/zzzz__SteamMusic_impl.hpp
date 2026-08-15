#pragma once
// IWYU pragma private; include "Steamworks/SteamMusic.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamMusic_def.hpp"
#include "Steamworks/zzzz__AudioPlayback_Status_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamMusic.BIsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusic::BIsEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"BIsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusic.BIsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::SteamMusic::BIsPlaying)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"BIsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusic.GetPlaybackStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::AudioPlayback_Status (*)()>(&::Steamworks::SteamMusic::GetPlaybackStatus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"GetPlaybackStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusic.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamMusic::Play)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusic.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamMusic::Pause)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"Pause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusic.PlayPrevious
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamMusic::PlayPrevious)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"PlayPrevious", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusic.PlayNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::SteamMusic::PlayNext)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"PlayNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusic.SetVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Steamworks::SteamMusic::SetVolume)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b3da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"SetVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMusic.GetVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Steamworks::SteamMusic::GetVolume)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b3cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"GetVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamMusic::BIsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"BIsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Steamworks::SteamMusic::BIsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"BIsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Steamworks::AudioPlayback_Status Steamworks::SteamMusic::GetPlaybackStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"GetPlaybackStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::AudioPlayback_Status>(nullptr, ___internal_method);
}
inline void Steamworks::SteamMusic::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::SteamMusic::Pause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"Pause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::SteamMusic::PlayPrevious()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"PlayPrevious", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::SteamMusic::PlayNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"PlayNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::SteamMusic::SetVolume(float_t  flVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"SetVolume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flVolume);
}
inline float_t Steamworks::SteamMusic::GetVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMusic*>(),
                        {"GetVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamMusic::SteamMusic()   {
}
