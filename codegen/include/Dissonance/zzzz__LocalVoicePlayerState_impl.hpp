#pragma once
// IWYU pragma private; include "Dissonance/LocalVoicePlayerState.hpp"
#include "Dissonance/zzzz__VoicePlayerState_impl.hpp"
#include "Dissonance/zzzz__LocalVoicePlayerState_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IAmplitudeProvider_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVoicePlaybackInternal_def.hpp"
#include "Dissonance/Networking/zzzz__ICommsNetwork_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__ChannelProperties_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "Dissonance/zzzz__IDissonancePlayer_def.hpp"
#include "Dissonance/zzzz__ILossEstimator_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
#include "Dissonance/zzzz__Rooms_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::LocalVoicePlayerState::*)(::StringW, ::Dissonance::Audio::Capture::IAmplitudeProvider*, ::Dissonance::Rooms*, ::Dissonance::RoomChannels*, ::Dissonance::PlayerChannels*, ::Dissonance::ILossEstimator*, ::Dissonance::Networking::ICommsNetwork*)>(&::Dissonance::LocalVoicePlayerState::_ctor)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1805cb0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::Audio::Capture::IAmplitudeProvider*>(), ::i2c::type_of<::Dissonance::Rooms*>(), ::i2c::type_of<::Dissonance::RoomChannels*>(), ::i2c::type_of<::Dissonance::PlayerChannels*>(), ::i2c::type_of<::Dissonance::ILossEstimator*>(), ::i2c::type_of<::Dissonance::Networking::ICommsNetwork*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.OnLocallyEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::LocalVoicePlayerState::*)(::StringW)>(&::Dissonance::LocalVoicePlayerState::OnLocallyEnteredRoom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805caf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                        {"OnLocallyEnteredRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.OnLocallyExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::LocalVoicePlayerState::*)(::StringW)>(&::Dissonance::LocalVoicePlayerState::OnLocallyExitedRoom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805cafe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                        {"OnLocallyExitedRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::get_IsConnected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805cb3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.get_PlaybackInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::IVoicePlaybackInternal* (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::get_PlaybackInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.get_IsLocallyMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::get_IsLocallyMuted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.set_IsLocallyMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::LocalVoicePlayerState::*)(bool)>(&::Dissonance::LocalVoicePlayerState::set_IsLocallyMuted)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805cb4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.get_Rooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::get_Rooms)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805cb490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.get_Tracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::IDissonancePlayer* (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::get_Tracker)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.set_Tracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::LocalVoicePlayerState::*)(::Dissonance::IDissonancePlayer*)>(&::Dissonance::LocalVoicePlayerState::set_Tracker)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.get_Amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::get_Amplitude)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805cb390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.get_SpeakerPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Dissonance::ChannelPriority> (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::get_SpeakerPriority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::get_Volume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.set_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::LocalVoicePlayerState::*)(float_t)>(&::Dissonance::LocalVoicePlayerState::set_Volume)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805cb550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::get_IsSpeaking)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cb3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::get_PacketLoss)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cb440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.get_IsLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::get_IsLocalPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.GetSpeakingChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::LocalVoicePlayerState::*)(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*)>(&::Dissonance::LocalVoicePlayerState::GetSpeakingChannels)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1805cac80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::LocalVoicePlayerState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::LocalVoicePlayerState::*)()>(&::Dissonance::LocalVoicePlayerState::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 21}
                ));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Capture::IAmplitudeProvider*& Dissonance::LocalVoicePlayerState::__cordl_internal_get__micAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micAmplitude;
}
constexpr ::Dissonance::Audio::Capture::IAmplitudeProvider* const& Dissonance::LocalVoicePlayerState::__cordl_internal_get__micAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micAmplitude;
}
constexpr void Dissonance::LocalVoicePlayerState::__cordl_internal_set__micAmplitude(::Dissonance::Audio::Capture::IAmplitudeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micAmplitude = value;
}
constexpr ::Dissonance::Rooms*& Dissonance::LocalVoicePlayerState::__cordl_internal_get__rooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
constexpr ::Dissonance::Rooms* const& Dissonance::LocalVoicePlayerState::__cordl_internal_get__rooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
constexpr void Dissonance::LocalVoicePlayerState::__cordl_internal_set__rooms(::Dissonance::Rooms*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rooms = value;
}
constexpr ::Dissonance::RoomChannels*& Dissonance::LocalVoicePlayerState::__cordl_internal_get__roomChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomChannels;
}
constexpr ::Dissonance::RoomChannels* const& Dissonance::LocalVoicePlayerState::__cordl_internal_get__roomChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomChannels;
}
constexpr void Dissonance::LocalVoicePlayerState::__cordl_internal_set__roomChannels(::Dissonance::RoomChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomChannels = value;
}
constexpr ::Dissonance::PlayerChannels*& Dissonance::LocalVoicePlayerState::__cordl_internal_get__playerChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerChannels;
}
constexpr ::Dissonance::PlayerChannels* const& Dissonance::LocalVoicePlayerState::__cordl_internal_get__playerChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerChannels;
}
constexpr void Dissonance::LocalVoicePlayerState::__cordl_internal_set__playerChannels(::Dissonance::PlayerChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerChannels = value;
}
constexpr ::Dissonance::ILossEstimator*& Dissonance::LocalVoicePlayerState::__cordl_internal_get__loss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loss;
}
constexpr ::Dissonance::ILossEstimator* const& Dissonance::LocalVoicePlayerState::__cordl_internal_get__loss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loss;
}
constexpr void Dissonance::LocalVoicePlayerState::__cordl_internal_set__loss(::Dissonance::ILossEstimator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loss = value;
}
constexpr ::Dissonance::Networking::ICommsNetwork*& Dissonance::LocalVoicePlayerState::__cordl_internal_get__network()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr ::Dissonance::Networking::ICommsNetwork* const& Dissonance::LocalVoicePlayerState::__cordl_internal_get__network() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____network;
}
constexpr void Dissonance::LocalVoicePlayerState::__cordl_internal_set__network(::Dissonance::Networking::ICommsNetwork*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____network = value;
}
constexpr ::Dissonance::IDissonancePlayer*& Dissonance::LocalVoicePlayerState::__cordl_internal_get__Tracker_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tracker_k__BackingField;
}
constexpr ::Dissonance::IDissonancePlayer* const& Dissonance::LocalVoicePlayerState::__cordl_internal_get__Tracker_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tracker_k__BackingField;
}
constexpr void Dissonance::LocalVoicePlayerState::__cordl_internal_set__Tracker_k__BackingField(::Dissonance::IDissonancePlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Tracker_k__BackingField = value;
}
inline void Dissonance::LocalVoicePlayerState::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::LocalVoicePlayerState*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::LocalVoicePlayerState::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::LocalVoicePlayerState*>();
}
inline void Dissonance::LocalVoicePlayerState::_ctor(::StringW  name, ::Dissonance::Audio::Capture::IAmplitudeProvider*  micAmplitude, ::Dissonance::Rooms*  rooms, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::ILossEstimator*  loss, ::Dissonance::Networking::ICommsNetwork*  network)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::Audio::Capture::IAmplitudeProvider*>(), ::i2c::type_of<::Dissonance::Rooms*>(), ::i2c::type_of<::Dissonance::RoomChannels*>(), ::i2c::type_of<::Dissonance::PlayerChannels*>(), ::i2c::type_of<::Dissonance::ILossEstimator*>(), ::i2c::type_of<::Dissonance::Networking::ICommsNetwork*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, micAmplitude, rooms, roomChannels, playerChannels, loss, network);
}
template<typename TId>
inline void Dissonance::LocalVoicePlayerState::OnChannelOpened(TId  channel, ::Dissonance::ChannelProperties*  properties)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {"OnChannelOpened", {::i2c::class_of<TId>()}, {::i2c::type_of<TId>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TId>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, properties);
}
template<typename TId>
inline void Dissonance::LocalVoicePlayerState::OnChannelClosed(TId  channel, ::Dissonance::ChannelProperties*  properties)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {"OnChannelClosed", {::i2c::class_of<TId>()}, {::i2c::type_of<TId>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TId>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, properties);
}
inline void Dissonance::LocalVoicePlayerState::OnLocallyEnteredRoom(::StringW  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                        {"OnLocallyEnteredRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Dissonance::LocalVoicePlayerState::OnLocallyExitedRoom(::StringW  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                        {"OnLocallyExitedRoom", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline bool Dissonance::LocalVoicePlayerState::get_IsConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::IVoicePlaybackInternal* Dissonance::LocalVoicePlayerState::get_PlaybackInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(this, ___internal_method);
}
inline bool Dissonance::LocalVoicePlayerState::get_IsLocallyMuted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::LocalVoicePlayerState::set_IsLocallyMuted(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* Dissonance::LocalVoicePlayerState::get_Rooms()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>(this, ___internal_method);
}
inline ::Dissonance::IDissonancePlayer* Dissonance::LocalVoicePlayerState::get_Tracker()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::IDissonancePlayer*>(this, ___internal_method);
}
inline void Dissonance::LocalVoicePlayerState::set_Tracker(::Dissonance::IDissonancePlayer*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Dissonance::LocalVoicePlayerState::get_Amplitude()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Nullable_1<::Dissonance::ChannelPriority> Dissonance::LocalVoicePlayerState::get_SpeakerPriority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Dissonance::ChannelPriority>>(this, ___internal_method);
}
inline float_t Dissonance::LocalVoicePlayerState::get_Volume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::LocalVoicePlayerState::set_Volume(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::LocalVoicePlayerState::get_IsSpeaking()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<float_t> Dissonance::LocalVoicePlayerState::get_PacketLoss()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method);
}
inline bool Dissonance::LocalVoicePlayerState::get_IsLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::LocalVoicePlayerState::GetSpeakingChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channels);
}
template<typename TChannel,typename TId>
inline ::Dissonance::RemoteChannel Dissonance::LocalVoicePlayerState::CreateRemoteChannel(TChannel  item, ::StringW  name, ::Dissonance::ChannelType  type)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(),
                    {"CreateRemoteChannel", {::i2c::class_of<TChannel>(), ::i2c::class_of<TId>()}, {::i2c::type_of<TChannel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelType>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TChannel>(), ::i2c::class_of<TId>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RemoteChannel>(nullptr, ___internal_method, item, name, type);
}
inline void Dissonance::LocalVoicePlayerState::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::LocalVoicePlayerState*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::LocalVoicePlayerState* Dissonance::LocalVoicePlayerState::New_ctor(::StringW  name, ::Dissonance::Audio::Capture::IAmplitudeProvider*  micAmplitude, ::Dissonance::Rooms*  rooms, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::ILossEstimator*  loss, ::Dissonance::Networking::ICommsNetwork*  network)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::LocalVoicePlayerState*>(name, micAmplitude, rooms, roomChannels, playerChannels, loss, network));
}
// Ctor Parameters []
constexpr ::Dissonance::LocalVoicePlayerState::LocalVoicePlayerState()   {
}
