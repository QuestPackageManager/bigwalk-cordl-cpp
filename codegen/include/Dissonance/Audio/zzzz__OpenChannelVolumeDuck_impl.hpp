#pragma once
// IWYU pragma private; include "Dissonance/Audio/OpenChannelVolumeDuck.hpp"
#include "Dissonance/Audio/zzzz__Fader_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/zzzz__OpenChannelVolumeDuck_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVolumeProvider_def.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::OpenChannelVolumeDuck.get_TargetVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::OpenChannelVolumeDuck::*)()>(&::Dissonance::Audio::OpenChannelVolumeDuck::get_TargetVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::OpenChannelVolumeDuck*>(),
                        {"get_TargetVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::OpenChannelVolumeDuck._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::OpenChannelVolumeDuck::*)(::Dissonance::RoomChannels*, ::Dissonance::PlayerChannels*)>(&::Dissonance::Audio::OpenChannelVolumeDuck::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805e14e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::OpenChannelVolumeDuck*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::RoomChannels*>(), ::i2c::type_of<::Dissonance::PlayerChannels*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::OpenChannelVolumeDuck.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::OpenChannelVolumeDuck::*)(bool, float_t)>(&::Dissonance::Audio::OpenChannelVolumeDuck::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805e13a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::OpenChannelVolumeDuck*>(),
                        {"Update", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::RoomChannels*& Dissonance::Audio::OpenChannelVolumeDuck::__cordl_internal_get__rooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
constexpr ::Dissonance::RoomChannels* const& Dissonance::Audio::OpenChannelVolumeDuck::__cordl_internal_get__rooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
constexpr void Dissonance::Audio::OpenChannelVolumeDuck::__cordl_internal_set__rooms(::Dissonance::RoomChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rooms = value;
}
constexpr ::Dissonance::PlayerChannels*& Dissonance::Audio::OpenChannelVolumeDuck::__cordl_internal_get__players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr ::Dissonance::PlayerChannels* const& Dissonance::Audio::OpenChannelVolumeDuck::__cordl_internal_get__players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____players;
}
constexpr void Dissonance::Audio::OpenChannelVolumeDuck::__cordl_internal_set__players(::Dissonance::PlayerChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____players = value;
}
constexpr ::Dissonance::Audio::Fader& Dissonance::Audio::OpenChannelVolumeDuck::__cordl_internal_get__fader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fader;
}
constexpr ::Dissonance::Audio::Fader const& Dissonance::Audio::OpenChannelVolumeDuck::__cordl_internal_get__fader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fader;
}
constexpr void Dissonance::Audio::OpenChannelVolumeDuck::__cordl_internal_set__fader(::Dissonance::Audio::Fader  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fader = value;
}
inline float_t Dissonance::Audio::OpenChannelVolumeDuck::get_TargetVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::OpenChannelVolumeDuck*>(),
                        {"get_TargetVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::Audio::OpenChannelVolumeDuck::_ctor(::Dissonance::RoomChannels*  rooms, ::Dissonance::PlayerChannels*  players)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::OpenChannelVolumeDuck*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::RoomChannels*>(), ::i2c::type_of<::Dissonance::PlayerChannels*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rooms, players);
}
inline void Dissonance::Audio::OpenChannelVolumeDuck::Update(bool  isMuted, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::OpenChannelVolumeDuck*>(),
                        {"Update", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isMuted, dt);
}
inline ::Dissonance::Audio::OpenChannelVolumeDuck* Dissonance::Audio::OpenChannelVolumeDuck::New_ctor(::Dissonance::RoomChannels*  rooms, ::Dissonance::PlayerChannels*  players)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::OpenChannelVolumeDuck*>(rooms, players));
}
/// @brief Convert operator to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr  Dissonance::Audio::OpenChannelVolumeDuck::operator ::Dissonance::Audio::Playback::IVolumeProvider*() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVolumeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Playback::IVolumeProvider"
constexpr ::Dissonance::Audio::Playback::IVolumeProvider* Dissonance::Audio::OpenChannelVolumeDuck::i___Dissonance__Audio__Playback__IVolumeProvider() noexcept {
return static_cast<::Dissonance::Audio::Playback::IVolumeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::OpenChannelVolumeDuck::OpenChannelVolumeDuck()   {
}
