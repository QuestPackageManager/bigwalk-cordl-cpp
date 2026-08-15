#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/EventQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Networking/zzzz__TextMessage_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventQueue)
namespace Dissonance::Datastructures {
template<typename T>
class IRecycler_1;
}
namespace Dissonance::Datastructures {
template<typename T>
class Pool_1;
}
namespace Dissonance::Networking::Client {
struct EventQueue_EventType;
}
namespace Dissonance::Networking::Client {
struct EventQueue_NetworkEvent;
}
namespace Dissonance::Networking::Client {
class IVoiceEventQueue;
}
namespace Dissonance::Networking {
struct RoomEvent;
}
namespace Dissonance::Networking {
struct TextMessage;
}
namespace Dissonance::Networking {
struct VoicePacket;
}
namespace Dissonance::Threading {
template<typename T>
class ReadonlyLockedValue_1;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
struct RemoteChannel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
struct EventQueue_EventType;
}
namespace Dissonance::Networking::Client {
class EventQueue;
}
namespace Dissonance::Networking::Client {
struct EventQueue_NetworkEvent;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::Client::EventQueue_EventType);
MARK_REF_T(::Dissonance::Networking::Client::EventQueue*);
MARK_VAL_T(::Dissonance::Networking::Client::EventQueue_NetworkEvent);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Client::EventQueue_EventType, "Dissonance.Networking.Client", "EventQueue/EventType");
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Client::EventQueue*, "Dissonance.Networking.Client", "EventQueue");
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Client::EventQueue_NetworkEvent, "Dissonance.Networking.Client", "EventQueue/NetworkEvent");
// Dependencies 
namespace Dissonance::Networking::Client {
// Is value type: true
// CS Name: Dissonance.Networking.Client.EventQueue/EventType
struct CORDL_TYPE EventQueue_EventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EventQueue_EventType_Unwrapped
enum struct __EventQueue_EventType_Unwrapped : int32_t {
__E_PlayerJoined = static_cast<int32_t>(0x0),
__E_PlayerLeft = static_cast<int32_t>(0x1),
__E_PlayerEnteredRoom = static_cast<int32_t>(0x2),
__E_PlayerExitedRoom = static_cast<int32_t>(0x3),
__E_PlayerStartedSpeaking = static_cast<int32_t>(0x4),
__E_PlayerStoppedSpeaking = static_cast<int32_t>(0x5),
__E_VoiceData = static_cast<int32_t>(0x6),
__E_TextMessage = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventQueue_EventType_Unwrapped () const noexcept {
return static_cast<__EventQueue_EventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EventQueue_EventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EventQueue_EventType(int32_t  value__) noexcept;

/// @brief Field PlayerEnteredRoom value: I32(2)
static ::Dissonance::Networking::Client::EventQueue_EventType const PlayerEnteredRoom;

/// @brief Field PlayerExitedRoom value: I32(3)
static ::Dissonance::Networking::Client::EventQueue_EventType const PlayerExitedRoom;

/// @brief Field PlayerJoined value: I32(0)
static ::Dissonance::Networking::Client::EventQueue_EventType const PlayerJoined;

/// @brief Field PlayerLeft value: I32(1)
static ::Dissonance::Networking::Client::EventQueue_EventType const PlayerLeft;

/// @brief Field PlayerStartedSpeaking value: I32(4)
static ::Dissonance::Networking::Client::EventQueue_EventType const PlayerStartedSpeaking;

/// @brief Field PlayerStoppedSpeaking value: I32(5)
static ::Dissonance::Networking::Client::EventQueue_EventType const PlayerStoppedSpeaking;

/// @brief Field TextMessage value: I32(7)
static ::Dissonance::Networking::Client::EventQueue_EventType const TextMessage;

/// @brief Field VoiceData value: I32(6)
static ::Dissonance::Networking::Client::EventQueue_EventType const VoiceData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16909};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::Client::EventQueue_EventType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::Client::EventQueue_EventType) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Networking::Client
// Dependencies Dissonance.CodecSettings, Dissonance.Networking.Client.EventQueue::EventType, Dissonance.Networking.TextMessage, Dissonance.Networking.VoicePacket
namespace Dissonance::Networking::Client {
// Is value type: true
// CS Name: Dissonance.Networking.Client.EventQueue/NetworkEvent
struct CORDL_TYPE EventQueue_NetworkEvent {
public:
// Declarations
 __declspec(property(get=get_AllRooms, put=set_AllRooms)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  AllRooms;

 __declspec(property(get=get_CodecSettings, put=set_CodecSettings)) ::Dissonance::CodecSettings  CodecSettings;

 __declspec(property(get=get_PlayerName, put=set_PlayerName)) ::StringW  PlayerName;

 __declspec(property(get=get_Room, put=set_Room)) ::StringW  Room;

 __declspec(property(get=get_TextMessage)) ::Dissonance::Networking::TextMessage  TextMessage;

 __declspec(property(get=get_VoicePacket)) ::Dissonance::Networking::VoicePacket  VoicePacket;

/// @brief Method Check, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Check(::Dissonance::Networking::Client::EventQueue_EventType  type) ;

/// @brief Method Check, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Check(::Dissonance::Networking::Client::EventQueue_EventType  typeA, ::Dissonance::Networking::Client::EventQueue_EventType  typeB) ;

/// @brief Method .ctor, addr 0x1805e0e30, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::TextMessage  text) ;

/// @brief Method .ctor, addr 0x1805e0fd0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::Client::EventQueue_EventType  type) ;

/// @brief Method .ctor, addr 0x1805e0ef0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::VoicePacket  voice) ;

/// @brief Method get_AllRooms, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_AllRooms() ;

/// @brief Method get_CodecSettings, addr 0x1802f80b0, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::CodecSettings get_CodecSettings() ;

/// @brief Method get_PlayerName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_PlayerName() ;

/// @brief Method get_Room, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Room() ;

/// @brief Method get_TextMessage, addr 0x1804f6750, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TextMessage get_TextMessage() ;

/// @brief Method get_VoicePacket, addr 0x1805e1080, size 0x70, virtual false, abstract: false, final false
inline ::Dissonance::Networking::VoicePacket get_VoicePacket() ;

/// @brief Method set_AllRooms, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_AllRooms(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  value) ;

/// @brief Method set_CodecSettings, addr 0x1805e10f0, size 0x70, virtual false, abstract: false, final false
inline void set_CodecSettings(::Dissonance::CodecSettings  value) ;

/// @brief Method set_PlayerName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerName(::StringW  value) ;

/// @brief Method set_Room, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_Room(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr EventQueue_NetworkEvent() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::Dissonance::Networking::Client::EventQueue_EventType", modifiers: "", def_value: None }, CppParam { name: "_PlayerName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_codecSettings", ty: "::Dissonance::CodecSettings", modifiers: "", def_value: None }, CppParam { name: "_room", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_allRooms", ty: "::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "_voicePacket", ty: "::Dissonance::Networking::VoicePacket", modifiers: "", def_value: None }, CppParam { name: "_textMessage", ty: "::Dissonance::Networking::TextMessage", modifiers: "", def_value: None }]
constexpr EventQueue_NetworkEvent(::Dissonance::Networking::Client::EventQueue_EventType  Type, ::StringW  _PlayerName_k__BackingField, ::Dissonance::CodecSettings  _codecSettings, ::StringW  _room, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  _allRooms, ::Dissonance::Networking::VoicePacket  _voicePacket, ::Dissonance::Networking::TextMessage  _textMessage) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::Dissonance::Networking::Client::EventQueue_EventType  Type;

/// @brief Field <PlayerName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::StringW  _PlayerName_k__BackingField;

/// @brief Field _codecSettings, offset: 0x10, size: 0xc, def value: None
 ::Dissonance::CodecSettings  _codecSettings;

/// @brief Field _room, offset: 0x20, size: 0x8, def value: None
 ::StringW  _room;

/// @brief Field _allRooms, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  _allRooms;

/// @brief Field _voicePacket, offset: 0x30, size: 0x38, def value: None
 ::Dissonance::Networking::VoicePacket  _voicePacket;

/// @brief Field _textMessage, offset: 0x68, size: 0x20, def value: None
 ::Dissonance::Networking::TextMessage  _textMessage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::Client::EventQueue_NetworkEvent, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue_NetworkEvent, _PlayerName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue_NetworkEvent, _codecSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue_NetworkEvent, _room) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue_NetworkEvent, _allRooms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue_NetworkEvent, _voicePacket) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue_NetworkEvent, _textMessage) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::Client::EventQueue_NetworkEvent) == 0x88, "Size mismatch!");

} // namespace end def Dissonance::Networking::Client
// Dependencies System.DateTime, System.Object, System.TimeSpan
namespace Dissonance::Networking::Client {
// Is value type: false
// CS Name: Dissonance.Networking.Client.EventQueue
class CORDL_TYPE EventQueue : public ::System::Object {
public:
// Declarations
using EventType = ::Dissonance::Networking::Client::EventQueue_EventType;

using NetworkEvent = ::Dissonance::Networking::Client::EventQueue_NetworkEvent;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field MinWarnDispatchTimeThreshold, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MinWarnDispatchTimeThreshold, put=setStaticF_MinWarnDispatchTimeThreshold)) ::System::TimeSpan  MinWarnDispatchTimeThreshold;

/// @brief Field OnEnqueuePlayerLeft, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnqueuePlayerLeft, put=__cordl_internal_set_OnEnqueuePlayerLeft)) ::System::Action_1<::StringW>*  OnEnqueuePlayerLeft;

/// @brief Field PlayerEnteredRoom, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerEnteredRoom, put=__cordl_internal_set_PlayerEnteredRoom)) ::System::Action_1<::Dissonance::Networking::RoomEvent>*  PlayerEnteredRoom;

/// @brief Field PlayerExitedRoom, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerExitedRoom, put=__cordl_internal_set_PlayerExitedRoom)) ::System::Action_1<::Dissonance::Networking::RoomEvent>*  PlayerExitedRoom;

/// @brief Field PlayerJoined, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerJoined, put=__cordl_internal_set_PlayerJoined)) ::System::Action_2<::StringW,::Dissonance::CodecSettings>*  PlayerJoined;

/// @brief Field PlayerLeft, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerLeft, put=__cordl_internal_set_PlayerLeft)) ::System::Action_1<::StringW>*  PlayerLeft;

/// @brief Field PlayerStartedSpeaking, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerStartedSpeaking, put=__cordl_internal_set_PlayerStartedSpeaking)) ::System::Action_1<::StringW>*  PlayerStartedSpeaking;

/// @brief Field PlayerStoppedSpeaking, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerStoppedSpeaking, put=__cordl_internal_set_PlayerStoppedSpeaking)) ::System::Action_1<::StringW>*  PlayerStoppedSpeaking;

/// @brief Field TextMessageReceived, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_TextMessageReceived, put=__cordl_internal_set_TextMessageReceived)) ::System::Action_1<::Dissonance::Networking::TextMessage>*  TextMessageReceived;

/// @brief Field VoicePacketReceived, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoicePacketReceived, put=__cordl_internal_set_VoicePacketReceived)) ::System::Action_1<::Dissonance::Networking::VoicePacket>*  VoicePacketReceived;

/// @brief Field _byteArrayPool, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__byteArrayPool, put=__cordl_internal_set__byteArrayPool)) ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  _byteArrayPool;

/// @brief Field _channelsListPool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__channelsListPool, put=__cordl_internal_set__channelsListPool)) ::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  _channelsListPool;

/// @brief Field _pendingVoicePackets, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__pendingVoicePackets, put=__cordl_internal_set__pendingVoicePackets)) int32_t  _pendingVoicePackets;

/// @brief Field _previousFlush, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousFlush, put=__cordl_internal_set__previousFlush)) ::System::DateTime  _previousFlush;

/// @brief Field _queuedEvents, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__queuedEvents, put=__cordl_internal_set__queuedEvents)) ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::EventQueue_NetworkEvent>*>*  _queuedEvents;

/// @brief Field _voicePacketWarnThreshold, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__voicePacketWarnThreshold, put=__cordl_internal_set__voicePacketWarnThreshold)) int32_t  _voicePacketWarnThreshold;

/// @brief Convert operator to "::Dissonance::Networking::Client::IVoiceEventQueue"
constexpr operator  ::Dissonance::Networking::Client::IVoiceEventQueue*() noexcept;

/// @brief Method CreateRoomEvent, addr 0x1805dd8a0, size 0x70, virtual false, abstract: false, final false
static inline ::Dissonance::Networking::RoomEvent CreateRoomEvent(::Dissonance::Networking::Client::EventQueue_NetworkEvent  event, bool  joined) ;

/// @brief Method DispatchEvents, addr 0x1805dd910, size 0x7a0, virtual false, abstract: false, final false
inline bool DispatchEvents(::System::Nullable_1<::System::DateTime>  utcNow) ;

/// @brief Method EnqueuePlayerEnteredRoom, addr 0x1805de0b0, size 0x350, virtual false, abstract: false, final false
inline void EnqueuePlayerEnteredRoom(::StringW  playerName, ::StringW  room, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  allRooms) ;

/// @brief Method EnqueuePlayerExitedRoom, addr 0x1805de400, size 0x350, virtual false, abstract: false, final false
inline void EnqueuePlayerExitedRoom(::StringW  playerName, ::StringW  room, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  allRooms) ;

/// @brief Method EnqueuePlayerJoined, addr 0x1805de750, size 0x320, virtual false, abstract: false, final false
inline void EnqueuePlayerJoined(::StringW  playerName, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method EnqueuePlayerLeft, addr 0x1805dea70, size 0x330, virtual false, abstract: false, final false
inline void EnqueuePlayerLeft(::StringW  playerName) ;

/// @brief Method EnqueueStartedSpeaking, addr 0x1805deda0, size 0x310, virtual true, abstract: false, final true
inline void EnqueueStartedSpeaking(::StringW  playerName) ;

/// @brief Method EnqueueStoppedSpeaking, addr 0x1805df0b0, size 0x310, virtual true, abstract: false, final true
inline void EnqueueStoppedSpeaking(::StringW  playerName) ;

/// @brief Method EnqueueTextData, addr 0x1805df3c0, size 0x250, virtual false, abstract: false, final false
inline void EnqueueTextData(::Dissonance::Networking::TextMessage  data) ;

/// @brief Method EnqueueVoiceData, addr 0x1805df610, size 0x250, virtual true, abstract: false, final true
inline void EnqueueVoiceData(::Dissonance::Networking::VoicePacket  data) ;

/// @brief Method GetEventBuffer, addr 0x1805df860, size 0xd0, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> GetEventBuffer() ;

/// @brief Method InvokeEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool InvokeEvent(T  arg, ::System::Action_1<T>*  handler) ;

/// @brief Method InvokeEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline bool InvokeEvent(T1  arg1, T2  arg2, ::System::Action_2<T1,T2>*  handler) ;

static inline ::Dissonance::Networking::Client::EventQueue* New_ctor(::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  byteArrayPool, ::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelsListPool) ;

/// @brief Method PreDispatchLog, addr 0x1805df930, size 0x140, virtual false, abstract: false, final false
inline void PreDispatchLog(::System::DateTime  utcNow) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnEnqueuePlayerLeft() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnEnqueuePlayerLeft() ;

constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>* const& __cordl_internal_get_PlayerEnteredRoom() const;

constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>*& __cordl_internal_get_PlayerEnteredRoom() ;

constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>* const& __cordl_internal_get_PlayerExitedRoom() const;

constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>*& __cordl_internal_get_PlayerExitedRoom() ;

constexpr ::System::Action_2<::StringW,::Dissonance::CodecSettings>* const& __cordl_internal_get_PlayerJoined() const;

constexpr ::System::Action_2<::StringW,::Dissonance::CodecSettings>*& __cordl_internal_get_PlayerJoined() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PlayerLeft() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PlayerLeft() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PlayerStartedSpeaking() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PlayerStartedSpeaking() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PlayerStoppedSpeaking() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PlayerStoppedSpeaking() ;

constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>* const& __cordl_internal_get_TextMessageReceived() const;

constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>*& __cordl_internal_get_TextMessageReceived() ;

constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>* const& __cordl_internal_get_VoicePacketReceived() const;

constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>*& __cordl_internal_get_VoicePacketReceived() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>* const& __cordl_internal_get__byteArrayPool() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*& __cordl_internal_get__byteArrayPool() ;

constexpr ::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* const& __cordl_internal_get__channelsListPool() const;

constexpr ::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*& __cordl_internal_get__channelsListPool() ;

constexpr int32_t const& __cordl_internal_get__pendingVoicePackets() const;

constexpr int32_t& __cordl_internal_get__pendingVoicePackets() ;

constexpr ::System::DateTime const& __cordl_internal_get__previousFlush() const;

constexpr ::System::DateTime& __cordl_internal_get__previousFlush() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::EventQueue_NetworkEvent>*>* const& __cordl_internal_get__queuedEvents() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::EventQueue_NetworkEvent>*>*& __cordl_internal_get__queuedEvents() ;

constexpr int32_t const& __cordl_internal_get__voicePacketWarnThreshold() const;

constexpr int32_t& __cordl_internal_get__voicePacketWarnThreshold() ;

constexpr void __cordl_internal_set_OnEnqueuePlayerLeft(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

constexpr void __cordl_internal_set_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

constexpr void __cordl_internal_set_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value) ;

constexpr void __cordl_internal_set_PlayerLeft(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_TextMessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

constexpr void __cordl_internal_set_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

constexpr void __cordl_internal_set__byteArrayPool(::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  value) ;

constexpr void __cordl_internal_set__channelsListPool(::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value) ;

constexpr void __cordl_internal_set__pendingVoicePackets(int32_t  value) ;

constexpr void __cordl_internal_set__previousFlush(::System::DateTime  value) ;

constexpr void __cordl_internal_set__queuedEvents(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::EventQueue_NetworkEvent>*>*  value) ;

constexpr void __cordl_internal_set__voicePacketWarnThreshold(int32_t  value) ;

/// @brief Method .ctor, addr 0x1805dfae0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  byteArrayPool, ::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelsListPool) ;

/// @brief Method add_OnEnqueuePlayerLeft, addr 0x1805dfbf0, size 0x90, virtual false, abstract: false, final false
inline void add_OnEnqueuePlayerLeft(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_PlayerEnteredRoom, addr 0x1805dfc80, size 0x90, virtual false, abstract: false, final false
inline void add_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method add_PlayerExitedRoom, addr 0x1805dfd10, size 0x90, virtual false, abstract: false, final false
inline void add_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method add_PlayerJoined, addr 0x1805dfda0, size 0x90, virtual false, abstract: false, final false
inline void add_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value) ;

/// @brief Method add_PlayerLeft, addr 0x1805d0870, size 0x90, virtual false, abstract: false, final false
inline void add_PlayerLeft(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_PlayerStartedSpeaking, addr 0x1805dfe30, size 0x90, virtual false, abstract: false, final false
inline void add_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_PlayerStoppedSpeaking, addr 0x1805dfec0, size 0x90, virtual false, abstract: false, final false
inline void add_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_TextMessageReceived, addr 0x1805dff50, size 0x90, virtual false, abstract: false, final false
inline void add_TextMessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

/// @brief Method add_VoicePacketReceived, addr 0x1805dffe0, size 0x90, virtual false, abstract: false, final false
inline void add_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline ::System::TimeSpan getStaticF_MinWarnDispatchTimeThreshold() ;

/// @brief Convert to "::Dissonance::Networking::Client::IVoiceEventQueue"
constexpr ::Dissonance::Networking::Client::IVoiceEventQueue* i___Dissonance__Networking__Client__IVoiceEventQueue() noexcept;

/// @brief Method remove_OnEnqueuePlayerLeft, addr 0x1805e0070, size 0x90, virtual false, abstract: false, final false
inline void remove_OnEnqueuePlayerLeft(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_PlayerEnteredRoom, addr 0x1805e0100, size 0x90, virtual false, abstract: false, final false
inline void remove_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method remove_PlayerExitedRoom, addr 0x1805e0190, size 0x90, virtual false, abstract: false, final false
inline void remove_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method remove_PlayerJoined, addr 0x1805e0220, size 0x90, virtual false, abstract: false, final false
inline void remove_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value) ;

/// @brief Method remove_PlayerLeft, addr 0x1805d09d0, size 0x90, virtual false, abstract: false, final false
inline void remove_PlayerLeft(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_PlayerStartedSpeaking, addr 0x1805e02b0, size 0x90, virtual false, abstract: false, final false
inline void remove_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_PlayerStoppedSpeaking, addr 0x1805e0340, size 0x90, virtual false, abstract: false, final false
inline void remove_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_TextMessageReceived, addr 0x1805e03d0, size 0x90, virtual false, abstract: false, final false
inline void remove_TextMessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

/// @brief Method remove_VoicePacketReceived, addr 0x1805e0460, size 0x90, virtual false, abstract: false, final false
inline void remove_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

static inline void setStaticF_MinWarnDispatchTimeThreshold(::System::TimeSpan  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventQueue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventQueue(EventQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventQueue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventQueue(EventQueue const& ) = delete;

/// @brief Field MinWarnPacketCountThreshold offset 0xffffffff size 0x4
static constexpr int32_t  MinWarnPacketCountThreshold{static_cast<int32_t>(0xc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16911};

/// @brief Field _queuedEvents, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::EventQueue_NetworkEvent>*>*  ____queuedEvents;

/// @brief Field _byteArrayPool, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  ____byteArrayPool;

/// @brief Field _channelsListPool, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Datastructures::IRecycler_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  ____channelsListPool;

/// @brief Field PlayerJoined, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<::StringW,::Dissonance::CodecSettings>*  ___PlayerJoined;

/// @brief Field PlayerLeft, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___PlayerLeft;

/// @brief Field PlayerEnteredRoom, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::RoomEvent>*  ___PlayerEnteredRoom;

/// @brief Field PlayerExitedRoom, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::RoomEvent>*  ___PlayerExitedRoom;

/// @brief Field VoicePacketReceived, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::VoicePacket>*  ___VoicePacketReceived;

/// @brief Field TextMessageReceived, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::Dissonance::Networking::TextMessage>*  ___TextMessageReceived;

/// @brief Field PlayerStartedSpeaking, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___PlayerStartedSpeaking;

/// @brief Field PlayerStoppedSpeaking, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___PlayerStoppedSpeaking;

/// @brief Field OnEnqueuePlayerLeft, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnEnqueuePlayerLeft;

/// @brief Field _voicePacketWarnThreshold, offset: 0x70, size: 0x4, def value: None
 int32_t  ____voicePacketWarnThreshold;

/// @brief Field _pendingVoicePackets, offset: 0x74, size: 0x4, def value: None
 int32_t  ____pendingVoicePackets;

/// @brief Field _previousFlush, offset: 0x78, size: 0x8, def value: None
 ::System::DateTime  ____previousFlush;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ____queuedEvents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ____byteArrayPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ____channelsListPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ___PlayerJoined) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ___PlayerLeft) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ___PlayerEnteredRoom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ___PlayerExitedRoom) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ___VoicePacketReceived) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ___TextMessageReceived) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ___PlayerStartedSpeaking) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ___PlayerStoppedSpeaking) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ___OnEnqueuePlayerLeft) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ____voicePacketWarnThreshold) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ____pendingVoicePackets) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::EventQueue, ____previousFlush) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::Client::EventQueue) == 0x80, "Size mismatch!");

} // namespace end def Dissonance::Networking::Client
