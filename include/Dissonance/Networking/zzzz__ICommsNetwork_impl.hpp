#pragma once
// IWYU pragma private; include "Dissonance/Networking/ICommsNetwork.hpp"
#include "Dissonance/Networking/zzzz__ICommsNetwork_def.hpp"
#include "Dissonance/Networking/zzzz__ConnectionStatus_def.hpp"
#include "Dissonance/Networking/zzzz__NetworkMode_def.hpp"
#include "Dissonance/Networking/zzzz__RoomEvent_def.hpp"
#include "Dissonance/Networking/zzzz__TextMessage_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
#include "Dissonance/zzzz__Rooms_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::ConnectionStatus (::Dissonance::Networking::ICommsNetwork::*)()>(&::Dissonance::Networking::ICommsNetwork::get_Status)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::StringW, ::Dissonance::Rooms*, ::Dissonance::PlayerChannels*, ::Dissonance::RoomChannels*, ::Dissonance::CodecSettings)>(&::Dissonance::Networking::ICommsNetwork::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.add_ModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::Dissonance::Networking::NetworkMode>*)>(&::Dissonance::Networking::ICommsNetwork::add_ModeChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.remove_ModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::Dissonance::Networking::NetworkMode>*)>(&::Dissonance::Networking::ICommsNetwork::remove_ModeChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.get_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::NetworkMode (::Dissonance::Networking::ICommsNetwork::*)()>(&::Dissonance::Networking::ICommsNetwork::get_Mode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.add_PlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_2<::StringW,::Dissonance::CodecSettings>*)>(&::Dissonance::Networking::ICommsNetwork::add_PlayerJoined)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.remove_PlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_2<::StringW,::Dissonance::CodecSettings>*)>(&::Dissonance::Networking::ICommsNetwork::remove_PlayerJoined)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.add_PlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::ICommsNetwork::add_PlayerLeft)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.remove_PlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::ICommsNetwork::remove_PlayerLeft)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.add_VoicePacketReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::Dissonance::Networking::VoicePacket>*)>(&::Dissonance::Networking::ICommsNetwork::add_VoicePacketReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.remove_VoicePacketReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::Dissonance::Networking::VoicePacket>*)>(&::Dissonance::Networking::ICommsNetwork::remove_VoicePacketReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.add_TextPacketReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::Dissonance::Networking::TextMessage>*)>(&::Dissonance::Networking::ICommsNetwork::add_TextPacketReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.remove_TextPacketReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::Dissonance::Networking::TextMessage>*)>(&::Dissonance::Networking::ICommsNetwork::remove_TextPacketReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.add_PlayerStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::ICommsNetwork::add_PlayerStartedSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.remove_PlayerStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::ICommsNetwork::remove_PlayerStartedSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.add_PlayerStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::ICommsNetwork::add_PlayerStoppedSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.remove_PlayerStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::ICommsNetwork::remove_PlayerStoppedSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.add_PlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::Dissonance::Networking::RoomEvent>*)>(&::Dissonance::Networking::ICommsNetwork::add_PlayerEnteredRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.remove_PlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::Dissonance::Networking::RoomEvent>*)>(&::Dissonance::Networking::ICommsNetwork::remove_PlayerEnteredRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.add_PlayerExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::Dissonance::Networking::RoomEvent>*)>(&::Dissonance::Networking::ICommsNetwork::add_PlayerExitedRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.remove_PlayerExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::Action_1<::Dissonance::Networking::RoomEvent>*)>(&::Dissonance::Networking::ICommsNetwork::remove_PlayerExitedRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.SendVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Networking::ICommsNetwork::SendVoice)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetwork.SendText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ICommsNetwork::*)(::StringW, ::Dissonance::ChannelType, ::StringW)>(&::Dissonance::Networking::ICommsNetwork::SendText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 22}
                ));
    return ___internal_method;
  }
};
inline ::Dissonance::Networking::ConnectionStatus Dissonance::Networking::ICommsNetwork::get_Status()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::ConnectionStatus>(this, ___internal_method);
}
inline void Dissonance::Networking::ICommsNetwork::Initialize(::StringW  playerName, ::Dissonance::Rooms*  rooms, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::CodecSettings  codecSettings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName, rooms, playerChannels, roomChannels, codecSettings);
}
inline void Dissonance::Networking::ICommsNetwork::add_ModeChanged(::System::Action_1<::Dissonance::Networking::NetworkMode>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::remove_ModeChanged(::System::Action_1<::Dissonance::Networking::NetworkMode>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Dissonance::Networking::NetworkMode Dissonance::Networking::ICommsNetwork::get_Mode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::NetworkMode>(this, ___internal_method);
}
inline void Dissonance::Networking::ICommsNetwork::add_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::remove_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::add_PlayerLeft(::System::Action_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::remove_PlayerLeft(::System::Action_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::add_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::remove_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::add_TextPacketReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::remove_TextPacketReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::add_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::remove_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::add_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::remove_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::add_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::remove_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::add_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::remove_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::ICommsNetwork::SendVoice(::System::ArraySegment_1<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Dissonance::Networking::ICommsNetwork::SendText(::StringW  data, ::Dissonance::ChannelType  recipientType, ::StringW  recipientId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetwork*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, recipientType, recipientId);
}
