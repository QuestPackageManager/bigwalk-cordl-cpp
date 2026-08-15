#pragma once
// IWYU pragma private; include "Dissonance/VoicePlayerState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__VoicePlayerState_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVoicePlaybackInternal_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVoicePlayback_def.hpp"
#include "Dissonance/Networking/zzzz__RoomEvent_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__IDissonancePlayer_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::VoicePlayerState.add_OnStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::VoicePlayerState::add_OnStartedSpeaking)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d3fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"add_OnStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.remove_OnStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::VoicePlayerState::remove_OnStartedSpeaking)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"remove_OnStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.add_OnStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::VoicePlayerState::add_OnStoppedSpeaking)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d4050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"add_OnStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.remove_OnStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::VoicePlayerState::remove_OnStoppedSpeaking)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d4340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"remove_OnStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.add_OnEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*)>(&::Dissonance::VoicePlayerState::add_OnEnteredRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d3e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"add_OnEnteredRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.remove_OnEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*)>(&::Dissonance::VoicePlayerState::remove_OnEnteredRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d4100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"remove_OnEnteredRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.add_OnExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*)>(&::Dissonance::VoicePlayerState::add_OnExitedRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d3ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"add_OnExitedRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.remove_OnExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*)>(&::Dissonance::VoicePlayerState::remove_OnExitedRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d4190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"remove_OnExitedRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.add_OnLeftSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::VoicePlayerState::add_OnLeftSession)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d3f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"add_OnLeftSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.remove_OnLeftSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::System::Action_1<::Dissonance::VoicePlayerState*>*)>(&::Dissonance::VoicePlayerState::remove_OnLeftSession)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d4220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"remove_OnLeftSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::StringW)>(&::Dissonance::VoicePlayerState::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_IsConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_IsSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_Amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_Amplitude)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_SpeakerPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Dissonance::ChannelPriority> (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_SpeakerPriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_Volume)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.set_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(float_t)>(&::Dissonance::VoicePlayerState::set_Volume)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_IsLocallyMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_IsLocallyMuted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.set_IsLocallyMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(bool)>(&::Dissonance::VoicePlayerState::set_IsLocallyMuted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_Rooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_Rooms)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_Playback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::IVoicePlayback* (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_Playback)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d40e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"get_Playback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_PlaybackInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::IVoicePlaybackInternal* (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_PlaybackInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_Tracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::IDissonancePlayer* (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_Tracker)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.set_Tracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::Dissonance::IDissonancePlayer*)>(&::Dissonance::VoicePlayerState::set_Tracker)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_PacketLoss)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.get_IsLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::get_IsLocalPlayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.InvokeOnStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::InvokeOnStoppedSpeaking)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805d3d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"InvokeOnStoppedSpeaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.InvokeOnStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::InvokeOnStartedSpeaking)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805d3cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"InvokeOnStartedSpeaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.InvokeOnLeftSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::InvokeOnLeftSession)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d3ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"InvokeOnLeftSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.InvokeOnEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::Dissonance::Networking::RoomEvent)>(&::Dissonance::VoicePlayerState::InvokeOnEnteredRoom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805d3b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.InvokeOnExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::Dissonance::Networking::RoomEvent)>(&::Dissonance::VoicePlayerState::InvokeOnExitedRoom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805d3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.GetSpeakingChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*)>(&::Dissonance::VoicePlayerState::GetSpeakingChannels)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::VoicePlayerState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::VoicePlayerState::*)()>(&::Dissonance::VoicePlayerState::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 21}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Dissonance::VoicePlayerState::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Dissonance::VoicePlayerState::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Dissonance::VoicePlayerState::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& Dissonance::VoicePlayerState::__cordl_internal_get_OnStartedSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartedSpeaking;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& Dissonance::VoicePlayerState::__cordl_internal_get_OnStartedSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartedSpeaking;
}
constexpr void Dissonance::VoicePlayerState::__cordl_internal_set_OnStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStartedSpeaking = value;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& Dissonance::VoicePlayerState::__cordl_internal_get_OnStoppedSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStoppedSpeaking;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& Dissonance::VoicePlayerState::__cordl_internal_get_OnStoppedSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStoppedSpeaking;
}
constexpr void Dissonance::VoicePlayerState::__cordl_internal_set_OnStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStoppedSpeaking = value;
}
constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*& Dissonance::VoicePlayerState::__cordl_internal_get_OnEnteredRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnteredRoom;
}
constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>* const& Dissonance::VoicePlayerState::__cordl_internal_get_OnEnteredRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnteredRoom;
}
constexpr void Dissonance::VoicePlayerState::__cordl_internal_set_OnEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEnteredRoom = value;
}
constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*& Dissonance::VoicePlayerState::__cordl_internal_get_OnExitedRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnExitedRoom;
}
constexpr ::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>* const& Dissonance::VoicePlayerState::__cordl_internal_get_OnExitedRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnExitedRoom;
}
constexpr void Dissonance::VoicePlayerState::__cordl_internal_set_OnExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnExitedRoom = value;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>*& Dissonance::VoicePlayerState::__cordl_internal_get_OnLeftSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLeftSession;
}
constexpr ::System::Action_1<::Dissonance::VoicePlayerState*>* const& Dissonance::VoicePlayerState::__cordl_internal_get_OnLeftSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLeftSession;
}
constexpr void Dissonance::VoicePlayerState::__cordl_internal_set_OnLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLeftSession = value;
}
inline void Dissonance::VoicePlayerState::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::VoicePlayerState*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::VoicePlayerState::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::VoicePlayerState*>();
}
inline void Dissonance::VoicePlayerState::add_OnStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"add_OnStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VoicePlayerState::remove_OnStartedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"remove_OnStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VoicePlayerState::add_OnStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"add_OnStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VoicePlayerState::remove_OnStoppedSpeaking(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"remove_OnStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VoicePlayerState::add_OnEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"add_OnEnteredRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VoicePlayerState::remove_OnEnteredRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"remove_OnEnteredRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VoicePlayerState::add_OnExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"add_OnExitedRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VoicePlayerState::remove_OnExitedRoom(::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"remove_OnExitedRoom", {}, {::i2c::type_of<::System::Action_2<::Dissonance::VoicePlayerState*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VoicePlayerState::add_OnLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"add_OnLeftSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VoicePlayerState::remove_OnLeftSession(::System::Action_1<::Dissonance::VoicePlayerState*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"remove_OnLeftSession", {}, {::i2c::type_of<::System::Action_1<::Dissonance::VoicePlayerState*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::VoicePlayerState::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW Dissonance::VoicePlayerState::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Dissonance::VoicePlayerState::get_IsConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::VoicePlayerState::get_IsSpeaking()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Dissonance::VoicePlayerState::get_Amplitude()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Nullable_1<::Dissonance::ChannelPriority> Dissonance::VoicePlayerState::get_SpeakerPriority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Dissonance::ChannelPriority>>(this, ___internal_method);
}
inline float_t Dissonance::VoicePlayerState::get_Volume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::VoicePlayerState::set_Volume(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::VoicePlayerState::get_IsLocallyMuted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoicePlayerState::set_IsLocallyMuted(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* Dissonance::VoicePlayerState::get_Rooms()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::IVoicePlayback* Dissonance::VoicePlayerState::get_Playback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"get_Playback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::IVoicePlayback*>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::IVoicePlaybackInternal* Dissonance::VoicePlayerState::get_PlaybackInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(this, ___internal_method);
}
inline ::Dissonance::IDissonancePlayer* Dissonance::VoicePlayerState::get_Tracker()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::IDissonancePlayer*>(this, ___internal_method);
}
inline void Dissonance::VoicePlayerState::set_Tracker(::Dissonance::IDissonancePlayer*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<float_t> Dissonance::VoicePlayerState::get_PacketLoss()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method);
}
inline bool Dissonance::VoicePlayerState::get_IsLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::VoicePlayerState::InvokeOnStoppedSpeaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"InvokeOnStoppedSpeaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoicePlayerState::InvokeOnStartedSpeaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"InvokeOnStartedSpeaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoicePlayerState::InvokeOnLeftSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::VoicePlayerState*>(),
                        {"InvokeOnLeftSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::VoicePlayerState::InvokeOnEnteredRoom(::Dissonance::Networking::RoomEvent  evtData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evtData);
}
inline void Dissonance::VoicePlayerState::InvokeOnExitedRoom(::Dissonance::Networking::RoomEvent  evtData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evtData);
}
inline void Dissonance::VoicePlayerState::GetSpeakingChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void Dissonance::VoicePlayerState::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::VoicePlayerState*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::VoicePlayerState* Dissonance::VoicePlayerState::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::VoicePlayerState*>(name));
}
// Ctor Parameters []
constexpr ::Dissonance::VoicePlayerState::VoicePlayerState()   {
}
