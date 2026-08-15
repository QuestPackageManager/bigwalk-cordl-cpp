#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/Admin/IServerClientState.hpp"
#include "Dissonance/Networking/Server/Admin/zzzz__IServerClientState_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::Server::Admin::IServerClientState::*)()>(&::Dissonance::Networking::Server::Admin::IServerClientState::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::Server::Admin::IServerClientState::*)()>(&::Dissonance::Networking::Server::Admin::IServerClientState::get_IsConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.add_OnStartedListeningToRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*)>(&::Dissonance::Networking::Server::Admin::IServerClientState::add_OnStartedListeningToRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.remove_OnStartedListeningToRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*)>(&::Dissonance::Networking::Server::Admin::IServerClientState::remove_OnStartedListeningToRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.add_OnStoppedListeningToRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*)>(&::Dissonance::Networking::Server::Admin::IServerClientState::add_OnStoppedListeningToRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.remove_OnStoppedListeningToRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*)>(&::Dissonance::Networking::Server::Admin::IServerClientState::remove_OnStoppedListeningToRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.get_Rooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* (::Dissonance::Networking::Server::Admin::IServerClientState::*)()>(&::Dissonance::Networking::Server::Admin::IServerClientState::get_Rooms)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.add_StartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)(::System::Action*)>(&::Dissonance::Networking::Server::Admin::IServerClientState::add_StartedSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.remove_StartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)(::System::Action*)>(&::Dissonance::Networking::Server::Admin::IServerClientState::remove_StartedSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.add_StoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)(::System::Action*)>(&::Dissonance::Networking::Server::Admin::IServerClientState::add_StoppedSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.remove_StoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)(::System::Action*)>(&::Dissonance::Networking::Server::Admin::IServerClientState::remove_StoppedSpeaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.add_OnVoicePacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)(::System::Action_1<::Dissonance::Networking::VoicePacket>*)>(&::Dissonance::Networking::Server::Admin::IServerClientState::add_OnVoicePacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.remove_OnVoicePacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)(::System::Action_1<::Dissonance::Networking::VoicePacket>*)>(&::Dissonance::Networking::Server::Admin::IServerClientState::remove_OnVoicePacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>* (::Dissonance::Networking::Server::Admin::IServerClientState::*)()>(&::Dissonance::Networking::Server::Admin::IServerClientState::get_Channels)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.get_LastChannelUpdateUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Dissonance::Networking::Server::Admin::IServerClientState::*)()>(&::Dissonance::Networking::Server::Admin::IServerClientState::get_LastChannelUpdateUtc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.RemoveFromRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)(::StringW)>(&::Dissonance::Networking::Server::Admin::IServerClientState::RemoveFromRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Server::Admin::IServerClientState.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Server::Admin::IServerClientState::*)()>(&::Dissonance::Networking::Server::Admin::IServerClientState::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(),
                    {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 16}
                ));
    return ___internal_method;
  }
};
inline ::StringW Dissonance::Networking::Server::Admin::IServerClientState::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Dissonance::Networking::Server::Admin::IServerClientState::get_IsConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::add_OnStartedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::remove_OnStartedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::add_OnStoppedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::remove_OnStoppedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* Dissonance::Networking::Server::Admin::IServerClientState::get_Rooms()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>(this, ___internal_method);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::add_StartedSpeaking(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::remove_StartedSpeaking(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::add_StoppedSpeaking(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::remove_StoppedSpeaking(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::add_OnVoicePacket(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::remove_OnVoicePacket(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>* Dissonance::Networking::Server::Admin::IServerClientState::get_Channels()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>*>(this, ___internal_method);
}
inline ::System::DateTime Dissonance::Networking::Server::Admin::IServerClientState::get_LastChannelUpdateUtc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::RemoveFromRoom(::StringW  roomName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomName);
}
inline void Dissonance::Networking::Server::Admin::IServerClientState::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::Admin::IServerClientState*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
