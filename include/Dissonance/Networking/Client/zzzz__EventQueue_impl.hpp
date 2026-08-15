#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/EventQueue.hpp"
#include "Dissonance/Networking/zzzz__TextMessage_impl.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_impl.hpp"
#include "Dissonance/zzzz__CodecSettings_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Dissonance/Networking/Client/zzzz__EventQueue_def.hpp"
#include "Dissonance/Datastructures/zzzz__IRecycler_1_def.hpp"
#include "Dissonance/Datastructures/zzzz__Pool_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__EventQueue_def.hpp"
#include "Dissonance/Networking/Client/zzzz__IVoiceEventQueue_def.hpp"
#include "Dissonance/Networking/zzzz__RoomEvent_def.hpp"
#include "Dissonance/Networking/zzzz__TextMessage_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/Threading/zzzz__ReadonlyLockedValue_1_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::Client::EventQueue_EventType::EventQueue_EventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::Client::EventQueue_EventType::EventQueue_EventType()   {
}
constexpr ::Dissonance::Networking::Client::EventQueue_EventType  Dissonance::Networking::Client::EventQueue_EventType::PlayerJoined{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Networking::Client::EventQueue_EventType  Dissonance::Networking::Client::EventQueue_EventType::PlayerLeft{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::Networking::Client::EventQueue_EventType  Dissonance::Networking::Client::EventQueue_EventType::PlayerEnteredRoom{static_cast<int32_t>(0x2)};
constexpr ::Dissonance::Networking::Client::EventQueue_EventType  Dissonance::Networking::Client::EventQueue_EventType::PlayerExitedRoom{static_cast<int32_t>(0x3)};
constexpr ::Dissonance::Networking::Client::EventQueue_EventType  Dissonance::Networking::Client::EventQueue_EventType::PlayerStartedSpeaking{static_cast<int32_t>(0x4)};
constexpr ::Dissonance::Networking::Client::EventQueue_EventType  Dissonance::Networking::Client::EventQueue_EventType::PlayerStoppedSpeaking{static_cast<int32_t>(0x5)};
constexpr ::Dissonance::Networking::Client::EventQueue_EventType  Dissonance::Networking::Client::EventQueue_EventType::VoiceData{static_cast<int32_t>(0x6)};
constexpr ::Dissonance::Networking::Client::EventQueue_EventType  Dissonance::Networking::Client::EventQueue_EventType::TextMessage{static_cast<int32_t>(0x7)};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.get_PlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)()>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::get_PlayerName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_PlayerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.set_PlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)(::StringW)>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::set_PlayerName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"set_PlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.get_CodecSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::CodecSettings (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)()>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::get_CodecSettings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f80b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_CodecSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.set_CodecSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)(::Dissonance::CodecSettings)>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::set_CodecSettings)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e10f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"set_CodecSettings", {}, {::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.get_Room
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)()>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::get_Room)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_Room", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.set_Room
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)(::StringW)>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::set_Room)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"set_Room", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.get_AllRooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)()>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::get_AllRooms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_AllRooms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.set_AllRooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*)>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::set_AllRooms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"set_AllRooms", {}, {::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.get_VoicePacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::VoicePacket (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)()>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::get_VoicePacket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e1080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_VoicePacket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.get_TextMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::TextMessage (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)()>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::get_TextMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804f6750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_TextMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)(::Dissonance::Networking::Client::EventQueue_EventType)>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805e0fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Client::EventQueue_EventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)(::Dissonance::Networking::VoicePacket)>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805e0ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)(::Dissonance::Networking::TextMessage)>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805e0e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::TextMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)(::Dissonance::Networking::Client::EventQueue_EventType)>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::Check)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"Check", {}, {::i2c::type_of<::Dissonance::Networking::Client::EventQueue_EventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue_NetworkEvent.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue_NetworkEvent::*)(::Dissonance::Networking::Client::EventQueue_EventType, ::Dissonance::Networking::Client::EventQueue_EventType)>(&::Dissonance::Networking::Client::EventQueue_NetworkEvent::Check)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"Check", {}, {::i2c::type_of<::Dissonance::Networking::Client::EventQueue_EventType>(), ::i2c::type_of<::Dissonance::Networking::Client::EventQueue_EventType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Dissonance::Networking::Client::EventQueue_NetworkEvent::get_PlayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_PlayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Dissonance::Networking::Client::EventQueue_NetworkEvent::set_PlayerName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"set_PlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Dissonance::CodecSettings Dissonance::Networking::Client::EventQueue_NetworkEvent::get_CodecSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_CodecSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CodecSettings>(*this, ___internal_method);
}
inline void Dissonance::Networking::Client::EventQueue_NetworkEvent::set_CodecSettings(::Dissonance::CodecSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"set_CodecSettings", {}, {::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Dissonance::Networking::Client::EventQueue_NetworkEvent::get_Room()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_Room", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Dissonance::Networking::Client::EventQueue_NetworkEvent::set_Room(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"set_Room", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* Dissonance::Networking::Client::EventQueue_NetworkEvent::get_AllRooms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_AllRooms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>(*this, ___internal_method);
}
inline void Dissonance::Networking::Client::EventQueue_NetworkEvent::set_AllRooms(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"set_AllRooms", {}, {::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Dissonance::Networking::VoicePacket Dissonance::Networking::Client::EventQueue_NetworkEvent::get_VoicePacket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_VoicePacket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::VoicePacket>(*this, ___internal_method);
}
inline ::Dissonance::Networking::TextMessage Dissonance::Networking::Client::EventQueue_NetworkEvent::get_TextMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"get_TextMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TextMessage>(*this, ___internal_method);
}
inline void Dissonance::Networking::Client::EventQueue_NetworkEvent::_ctor(::Dissonance::Networking::Client::EventQueue_EventType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Client::EventQueue_EventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type);
}
inline void Dissonance::Networking::Client::EventQueue_NetworkEvent::_ctor(::Dissonance::Networking::VoicePacket  voice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, voice);
}
inline void Dissonance::Networking::Client::EventQueue_NetworkEvent::_ctor(::Dissonance::Networking::TextMessage  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::TextMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text);
}
inline void Dissonance::Networking::Client::EventQueue_NetworkEvent::Check(::Dissonance::Networking::Client::EventQueue_EventType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"Check", {}, {::i2c::type_of<::Dissonance::Networking::Client::EventQueue_EventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type);
}
inline void Dissonance::Networking::Client::EventQueue_NetworkEvent::Check(::Dissonance::Networking::Client::EventQueue_EventType  typeA, ::Dissonance::Networking::Client::EventQueue_EventType  typeB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(),
                        {"Check", {}, {::i2c::type_of<::Dissonance::Networking::Client::EventQueue_EventType>(), ::i2c::type_of<::Dissonance::Networking::Client::EventQueue_EventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, typeA, typeB);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::Dissonance::Networking::Client::EventQueue_EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlayerName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_codecSettings", ty: "::Dissonance::CodecSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "_room", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_allRooms", ty: "::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_voicePacket", ty: "::Dissonance::Networking::VoicePacket", modifiers: "", def_value: Some("{}") }, CppParam { name: "_textMessage", ty: "::Dissonance::Networking::TextMessage", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::Client::EventQueue_NetworkEvent::EventQueue_NetworkEvent(::Dissonance::Networking::Client::EventQueue_EventType  Type, ::StringW  _PlayerName_k__BackingField, ::Dissonance::CodecSettings  _codecSettings, ::StringW  _room, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  _allRooms, ::Dissonance::Networking::VoicePacket  _voicePacket, ::Dissonance::Networking::TextMessage  _textMessage) noexcept  {
this->Type = Type;
this->_PlayerName_k__BackingField = _PlayerName_k__BackingField;
this->_codecSettings = _codecSettings;
this->_room = _room;
this->_allRooms = _allRooms;
this->_voicePacket = _voicePacket;
this->_textMessage = _textMessage;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::Client::EventQueue_NetworkEvent::EventQueue_NetworkEvent()   {
}
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.add_PlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_2<::StringW,::Dissonance::CodecSettings>*)>(&::Dissonance::Networking::Client::EventQueue::add_PlayerJoined)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805dfda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerJoined", {}, {::i2c::type_of<::System::Action_2<::StringW,::Dissonance::CodecSettings>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.remove_PlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_2<::StringW,::Dissonance::CodecSettings>*)>(&::Dissonance::Networking::Client::EventQueue::remove_PlayerJoined)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e0220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerJoined", {}, {::i2c::type_of<::System::Action_2<::StringW,::Dissonance::CodecSettings>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.add_PlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::Client::EventQueue::add_PlayerLeft)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d0870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.remove_PlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::Client::EventQueue::remove_PlayerLeft)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.add_PlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::Dissonance::Networking::RoomEvent>*)>(&::Dissonance::Networking::Client::EventQueue::add_PlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805dfc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.remove_PlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::Dissonance::Networking::RoomEvent>*)>(&::Dissonance::Networking::Client::EventQueue::remove_PlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e0100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.add_PlayerExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::Dissonance::Networking::RoomEvent>*)>(&::Dissonance::Networking::Client::EventQueue::add_PlayerExitedRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805dfd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerExitedRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.remove_PlayerExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::Dissonance::Networking::RoomEvent>*)>(&::Dissonance::Networking::Client::EventQueue::remove_PlayerExitedRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e0190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerExitedRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.add_VoicePacketReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::Dissonance::Networking::VoicePacket>*)>(&::Dissonance::Networking::Client::EventQueue::add_VoicePacketReceived)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805dffe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_VoicePacketReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.remove_VoicePacketReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::Dissonance::Networking::VoicePacket>*)>(&::Dissonance::Networking::Client::EventQueue::remove_VoicePacketReceived)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e0460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_VoicePacketReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.add_TextMessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::Dissonance::Networking::TextMessage>*)>(&::Dissonance::Networking::Client::EventQueue::add_TextMessageReceived)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805dff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_TextMessageReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.remove_TextMessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::Dissonance::Networking::TextMessage>*)>(&::Dissonance::Networking::Client::EventQueue::remove_TextMessageReceived)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e03d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_TextMessageReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.add_PlayerStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::Client::EventQueue::add_PlayerStartedSpeaking)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805dfe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.remove_PlayerStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::Client::EventQueue::remove_PlayerStartedSpeaking)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e02b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.add_PlayerStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::Client::EventQueue::add_PlayerStoppedSpeaking)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805dfec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.remove_PlayerStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::Client::EventQueue::remove_PlayerStoppedSpeaking)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e0340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.add_OnEnqueuePlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::Client::EventQueue::add_OnEnqueuePlayerLeft)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805dfbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_OnEnqueuePlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.remove_OnEnqueuePlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::Action_1<::StringW>*)>(&::Dissonance::Networking::Client::EventQueue::remove_OnEnqueuePlayerLeft)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e0070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_OnEnqueuePlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*, ::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*)>(&::Dissonance::Networking::Client::EventQueue::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805dfae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*>(), ::i2c::type_of<::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.DispatchEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::Client::EventQueue::*)(::System::Nullable_1<::System::DateTime>)>(&::Dissonance::Networking::Client::EventQueue::DispatchEvents)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x1805dd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"DispatchEvents", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.PreDispatchLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::System::DateTime)>(&::Dissonance::Networking::Client::EventQueue::PreDispatchLog)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805df930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"PreDispatchLog", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.CreateRoomEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::RoomEvent (*)(::Dissonance::Networking::Client::EventQueue_NetworkEvent, bool)>(&::Dissonance::Networking::Client::EventQueue::CreateRoomEvent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805dd8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"CreateRoomEvent", {}, {::i2c::type_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.EnqueuePlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::StringW, ::Dissonance::CodecSettings)>(&::Dissonance::Networking::Client::EventQueue::EnqueuePlayerJoined)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x1805de750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueuePlayerJoined", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.EnqueuePlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::StringW)>(&::Dissonance::Networking::Client::EventQueue::EnqueuePlayerLeft)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1805dea70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueuePlayerLeft", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.EnqueuePlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::StringW, ::StringW, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*)>(&::Dissonance::Networking::Client::EventQueue::EnqueuePlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1805de0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueuePlayerEnteredRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.EnqueuePlayerExitedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::StringW, ::StringW, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*)>(&::Dissonance::Networking::Client::EventQueue::EnqueuePlayerExitedRoom)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1805de400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueuePlayerExitedRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.EnqueueStartedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::StringW)>(&::Dissonance::Networking::Client::EventQueue::EnqueueStartedSpeaking)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1805deda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueueStartedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.EnqueueStoppedSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::StringW)>(&::Dissonance::Networking::Client::EventQueue::EnqueueStoppedSpeaking)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1805df0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueueStoppedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.EnqueueVoiceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::Dissonance::Networking::VoicePacket)>(&::Dissonance::Networking::Client::EventQueue::EnqueueVoiceData)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1805df610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueueVoiceData", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.EnqueueTextData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::EventQueue::*)(::Dissonance::Networking::TextMessage)>(&::Dissonance::Networking::Client::EventQueue::EnqueueTextData)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1805df3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueueTextData", {}, {::i2c::type_of<::Dissonance::Networking::TextMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::EventQueue.GetEventBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Dissonance::Networking::Client::EventQueue::*)()>(&::Dissonance::Networking::Client::EventQueue::GetEventBuffer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805df860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"GetEventBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::EventQueue_NetworkEvent>*>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__queuedEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedEvents;
}
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::EventQueue_NetworkEvent>*>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__queuedEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queuedEvents;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set__queuedEvents(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::EventQueue_NetworkEvent>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queuedEvents = value;
}
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__byteArrayPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteArrayPool;
}
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__byteArrayPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteArrayPool;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set__byteArrayPool(::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____byteArrayPool = value;
}
constexpr ::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__channelsListPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelsListPool;
}
constexpr ::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__channelsListPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelsListPool;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set__channelsListPool(::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelsListPool = value;
}
constexpr ::System::Action_2<::StringW,::Dissonance::CodecSettings>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerJoined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerJoined;
}
constexpr ::System::Action_2<::StringW,::Dissonance::CodecSettings>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerJoined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerJoined;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerJoined = value;
}
constexpr ::System::Action_1<::StringW>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerLeft;
}
constexpr ::System::Action_1<::StringW>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerLeft;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set_PlayerLeft(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerLeft = value;
}
constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerEnteredRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerEnteredRoom;
}
constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerEnteredRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerEnteredRoom;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerEnteredRoom = value;
}
constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerExitedRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerExitedRoom;
}
constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerExitedRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerExitedRoom;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerExitedRoom = value;
}
constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_VoicePacketReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePacketReceived;
}
constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_VoicePacketReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePacketReceived;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoicePacketReceived = value;
}
constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_TextMessageReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextMessageReceived;
}
constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_TextMessageReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextMessageReceived;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set_TextMessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TextMessageReceived = value;
}
constexpr ::System::Action_1<::StringW>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerStartedSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStartedSpeaking;
}
constexpr ::System::Action_1<::StringW>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerStartedSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStartedSpeaking;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerStartedSpeaking = value;
}
constexpr ::System::Action_1<::StringW>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerStoppedSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStoppedSpeaking;
}
constexpr ::System::Action_1<::StringW>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_PlayerStoppedSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStoppedSpeaking;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerStoppedSpeaking = value;
}
constexpr ::System::Action_1<::StringW>*& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_OnEnqueuePlayerLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnqueuePlayerLeft;
}
constexpr ::System::Action_1<::StringW>* const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get_OnEnqueuePlayerLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnqueuePlayerLeft;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set_OnEnqueuePlayerLeft(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEnqueuePlayerLeft = value;
}
constexpr int32_t& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__voicePacketWarnThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voicePacketWarnThreshold;
}
constexpr int32_t const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__voicePacketWarnThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voicePacketWarnThreshold;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set__voicePacketWarnThreshold(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voicePacketWarnThreshold = value;
}
constexpr int32_t& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__pendingVoicePackets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingVoicePackets;
}
constexpr int32_t const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__pendingVoicePackets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingVoicePackets;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set__pendingVoicePackets(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingVoicePackets = value;
}
constexpr ::System::DateTime& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__previousFlush()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousFlush;
}
constexpr ::System::DateTime const& Dissonance::Networking::Client::EventQueue::__cordl_internal_get__previousFlush() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousFlush;
}
constexpr void Dissonance::Networking::Client::EventQueue::__cordl_internal_set__previousFlush(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousFlush = value;
}
inline void Dissonance::Networking::Client::EventQueue::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::EventQueue*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Networking::Client::EventQueue::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::EventQueue*>();
}
inline void Dissonance::Networking::Client::EventQueue::setStaticF_MinWarnDispatchTimeThreshold(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "MinWarnDispatchTimeThreshold", ::Dissonance::Networking::Client::EventQueue*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Dissonance::Networking::Client::EventQueue::getStaticF_MinWarnDispatchTimeThreshold()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "MinWarnDispatchTimeThreshold", ::Dissonance::Networking::Client::EventQueue*>();
}
inline void Dissonance::Networking::Client::EventQueue::add_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerJoined", {}, {::i2c::type_of<::System::Action_2<::StringW,::Dissonance::CodecSettings>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::remove_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerJoined", {}, {::i2c::type_of<::System::Action_2<::StringW,::Dissonance::CodecSettings>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::add_PlayerLeft(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::remove_PlayerLeft(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::add_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::remove_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::add_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerExitedRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::remove_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerExitedRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::add_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_VoicePacketReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::remove_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_VoicePacketReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::add_TextMessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_TextMessageReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::remove_TextMessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_TextMessageReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::add_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::remove_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::add_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_PlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::remove_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_PlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::add_OnEnqueuePlayerLeft(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"add_OnEnqueuePlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::remove_OnEnqueuePlayerLeft(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"remove_OnEnqueuePlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Networking::Client::EventQueue::_ctor(::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  byteArrayPool, ::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelsListPool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*>(), ::i2c::type_of<::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, byteArrayPool, channelsListPool);
}
inline bool Dissonance::Networking::Client::EventQueue::DispatchEvents(::System::Nullable_1<::System::DateTime>  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"DispatchEvents", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, utcNow);
}
inline void Dissonance::Networking::Client::EventQueue::PreDispatchLog(::System::DateTime  utcNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"PreDispatchLog", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, utcNow);
}
inline ::Dissonance::Networking::RoomEvent Dissonance::Networking::Client::EventQueue::CreateRoomEvent(::Dissonance::Networking::Client::EventQueue_NetworkEvent  event, bool  joined)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"CreateRoomEvent", {}, {::i2c::type_of<::Dissonance::Networking::Client::EventQueue_NetworkEvent>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::RoomEvent>(nullptr, ___internal_method, event, joined);
}
template<typename T>
inline bool Dissonance::Networking::Client::EventQueue::InvokeEvent(T  arg, ::System::Action_1<T>*  handler)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                    {"InvokeEvent", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, arg, handler);
}
template<typename T1,typename T2>
inline bool Dissonance::Networking::Client::EventQueue::InvokeEvent(T1  arg1, T2  arg2, ::System::Action_2<T1,T2>*  handler)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                    {"InvokeEvent", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<::System::Action_2<T1,T2>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, arg1, arg2, handler);
}
inline void Dissonance::Networking::Client::EventQueue::EnqueuePlayerJoined(::StringW  playerName, ::Dissonance::CodecSettings  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueuePlayerJoined", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName, codecSettings);
}
inline void Dissonance::Networking::Client::EventQueue::EnqueuePlayerLeft(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueuePlayerLeft", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName);
}
inline void Dissonance::Networking::Client::EventQueue::EnqueuePlayerEnteredRoom(::StringW  playerName, ::StringW  room, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  allRooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueuePlayerEnteredRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName, room, allRooms);
}
inline void Dissonance::Networking::Client::EventQueue::EnqueuePlayerExitedRoom(::StringW  playerName, ::StringW  room, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  allRooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueuePlayerExitedRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName, room, allRooms);
}
inline void Dissonance::Networking::Client::EventQueue::EnqueueStartedSpeaking(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueueStartedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName);
}
inline void Dissonance::Networking::Client::EventQueue::EnqueueStoppedSpeaking(::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueueStoppedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName);
}
inline void Dissonance::Networking::Client::EventQueue::EnqueueVoiceData(::Dissonance::Networking::VoicePacket  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueueVoiceData", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Dissonance::Networking::Client::EventQueue::EnqueueTextData(::Dissonance::Networking::TextMessage  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"EnqueueTextData", {}, {::i2c::type_of<::Dissonance::Networking::TextMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t> Dissonance::Networking::Client::EventQueue::GetEventBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::EventQueue*>(),
                        {"GetEventBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Dissonance::Networking::Client::EventQueue* Dissonance::Networking::Client::EventQueue::New_ctor(::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  byteArrayPool, ::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelsListPool)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Client::EventQueue*>(byteArrayPool, channelsListPool));
}
/// @brief Convert operator to "::Dissonance::Networking::Client::IVoiceEventQueue"
constexpr  Dissonance::Networking::Client::EventQueue::operator ::Dissonance::Networking::Client::IVoiceEventQueue*() noexcept {
return static_cast<::Dissonance::Networking::Client::IVoiceEventQueue*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::Client::IVoiceEventQueue"
constexpr ::Dissonance::Networking::Client::IVoiceEventQueue* Dissonance::Networking::Client::EventQueue::i___Dissonance__Networking__Client__IVoiceEventQueue() noexcept {
return static_cast<::Dissonance::Networking::Client::IVoiceEventQueue*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::Client::EventQueue::EventQueue()   {
}
