#pragma once
// IWYU pragma private; include "Dissonance/RemoteVoicePlayerState.hpp"
#include "Dissonance/zzzz__VoicePlayerState_impl.hpp"
#include "Dissonance/zzzz__RemoteVoicePlayerState_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVoicePlaybackInternal_def.hpp"
#include "Dissonance/Networking/zzzz__RoomEvent_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__IDissonancePlayer_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RemoteVoicePlayerState::*)(::Dissonance::Audio::Playback::IVoicePlaybackInternal*)>(&::Dissonance::RemoteVoicePlayerState::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805cebf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_IsConnected)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805cecc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_IsSpeaking)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ced80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_Amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_Amplitude)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_Volume)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cf000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.set_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RemoteVoicePlayerState::*)(float_t)>(&::Dissonance::RemoteVoicePlayerState::set_Volume)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805cf280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_SpeakerPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Dissonance::ChannelPriority> (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_SpeakerPriority)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805cef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_PlaybackInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::IVoicePlaybackInternal* (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_PlaybackInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ceef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_IsLocallyMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_IsLocallyMuted)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805ced30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.set_IsLocallyMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RemoteVoicePlayerState::*)(bool)>(&::Dissonance::RemoteVoicePlayerState::set_IsLocallyMuted)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805cf040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_Rooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_Rooms)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_Tracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::IDissonancePlayer* (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_Tracker)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.set_Tracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RemoteVoicePlayerState::*)(::Dissonance::IDissonancePlayer*)>(&::Dissonance::RemoteVoicePlayerState::set_Tracker)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805cf110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_PacketLoss)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805cee30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_IsLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_IsLocalPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.get_Jitter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::get_Jitter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805cedd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                        {"get_Jitter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RemoteVoicePlayerState::*)()>(&::Dissonance::RemoteVoicePlayerState::Update)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1805ce870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.GetSpeakingChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RemoteVoicePlayerState::*)(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*)>(&::Dissonance::RemoteVoicePlayerState::GetSpeakingChannels)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805ce590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.InvokeOnEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RemoteVoicePlayerState::*)(::Dissonance::Networking::RoomEvent)>(&::Dissonance::RemoteVoicePlayerState::InvokeOnEnteredRoom)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805ce6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteVoicePlayerState.InvokeOnExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RemoteVoicePlayerState::*)(::Dissonance::Networking::RoomEvent)>(&::Dissonance::RemoteVoicePlayerState::InvokeOnExitedRoom)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805ce7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                    {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 19}
                ));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Playback::IVoicePlaybackInternal*& Dissonance::RemoteVoicePlayerState::__cordl_internal_get__playback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playback;
}
constexpr ::Dissonance::Audio::Playback::IVoicePlaybackInternal* const& Dissonance::RemoteVoicePlayerState::__cordl_internal_get__playback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playback;
}
constexpr void Dissonance::RemoteVoicePlayerState::__cordl_internal_set__playback(::Dissonance::Audio::Playback::IVoicePlaybackInternal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playback = value;
}
constexpr ::Dissonance::IDissonancePlayer*& Dissonance::RemoteVoicePlayerState::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr ::Dissonance::IDissonancePlayer* const& Dissonance::RemoteVoicePlayerState::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr void Dissonance::RemoteVoicePlayerState::__cordl_internal_set__player(::Dissonance::IDissonancePlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____player = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*& Dissonance::RemoteVoicePlayerState::__cordl_internal_get__rooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* const& Dissonance::RemoteVoicePlayerState::__cordl_internal_get__rooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rooms;
}
constexpr void Dissonance::RemoteVoicePlayerState::__cordl_internal_set__rooms(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rooms = value;
}
inline void Dissonance::RemoteVoicePlayerState::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::RemoteVoicePlayerState*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::RemoteVoicePlayerState::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::RemoteVoicePlayerState*>();
}
inline void Dissonance::RemoteVoicePlayerState::setStaticF_EmptyRoomsList(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*, "EmptyRoomsList", ::Dissonance::RemoteVoicePlayerState*>(std::forward<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>(value));
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* Dissonance::RemoteVoicePlayerState::getStaticF_EmptyRoomsList()  {
return ::cordl_internals::getStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*, "EmptyRoomsList", ::Dissonance::RemoteVoicePlayerState*>();
}
inline void Dissonance::RemoteVoicePlayerState::_ctor(::Dissonance::Audio::Playback::IVoicePlaybackInternal*  playback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playback);
}
inline bool Dissonance::RemoteVoicePlayerState::get_IsConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Dissonance::RemoteVoicePlayerState::get_IsSpeaking()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Dissonance::RemoteVoicePlayerState::get_Amplitude()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Dissonance::RemoteVoicePlayerState::get_Volume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Dissonance::RemoteVoicePlayerState::set_Volume(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::Dissonance::ChannelPriority> Dissonance::RemoteVoicePlayerState::get_SpeakerPriority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Dissonance::ChannelPriority>>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::IVoicePlaybackInternal* Dissonance::RemoteVoicePlayerState::get_PlaybackInternal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::IVoicePlaybackInternal*>(this, ___internal_method);
}
inline bool Dissonance::RemoteVoicePlayerState::get_IsLocallyMuted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::RemoteVoicePlayerState::set_IsLocallyMuted(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* Dissonance::RemoteVoicePlayerState::get_Rooms()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>(this, ___internal_method);
}
inline ::Dissonance::IDissonancePlayer* Dissonance::RemoteVoicePlayerState::get_Tracker()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::IDissonancePlayer*>(this, ___internal_method);
}
inline void Dissonance::RemoteVoicePlayerState::set_Tracker(::Dissonance::IDissonancePlayer*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<float_t> Dissonance::RemoteVoicePlayerState::get_PacketLoss()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method);
}
inline bool Dissonance::RemoteVoicePlayerState::get_IsLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<float_t> Dissonance::RemoteVoicePlayerState::get_Jitter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(),
                        {"get_Jitter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method);
}
inline void Dissonance::RemoteVoicePlayerState::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::RemoteVoicePlayerState::GetSpeakingChannels(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channels);
}
inline void Dissonance::RemoteVoicePlayerState::InvokeOnEnteredRoom(::Dissonance::Networking::RoomEvent  evtData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evtData);
}
inline void Dissonance::RemoteVoicePlayerState::InvokeOnExitedRoom(::Dissonance::Networking::RoomEvent  evtData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RemoteVoicePlayerState*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evtData);
}
inline ::Dissonance::RemoteVoicePlayerState* Dissonance::RemoteVoicePlayerState::New_ctor(::Dissonance::Audio::Playback::IVoicePlaybackInternal*  playback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::RemoteVoicePlayerState*>(playback));
}
// Ctor Parameters []
constexpr ::Dissonance::RemoteVoicePlayerState::RemoteVoicePlayerState()   {
}
