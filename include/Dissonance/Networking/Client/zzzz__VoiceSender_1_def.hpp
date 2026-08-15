#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/VoiceSender_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceSender_1)
namespace Dissonance::Networking::Client {
class EventQueue;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
class ISendQueue_1;
}
namespace Dissonance::Networking::Client {
class ISession;
}
namespace Dissonance::Networking::Client {
struct OpenChannel;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
struct VoiceSender_1_ChannelDelta;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Dissonance::Networking {
template<typename TPeer>
class IClientCollection_1;
}
namespace Dissonance::Threading {
template<typename T>
class ReadonlyLockedValue_1_Unlocker;
}
namespace Dissonance::Threading {
template<typename T>
class ReadonlyLockedValue_1;
}
namespace Dissonance {
class ChannelProperties;
}
namespace Dissonance {
struct ChannelType;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
class PlayerChannels;
}
namespace Dissonance {
class RoomChannels;
}
namespace Dissonance {
struct RoomName;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
template<typename TPeer>
class VoiceSender_1;
}
namespace Dissonance::Networking::Client {
template<typename TPeer>
struct VoiceSender_1_ChannelDelta;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::Client::VoiceSender_1);
MARK_GEN_VAL_T(::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::Client::VoiceSender_1, "Dissonance.Networking.Client", "VoiceSender`1");
DEFINE_IL2CPP_GEN_CLASS(::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta, "Dissonance.Networking.Client", "VoiceSender`1/ChannelDelta");
// Dependencies Dissonance.ChannelType
namespace Dissonance::Networking::Client {
// cpp template
template<typename TPeer>
// Is value type: true
// CS Name: Dissonance.Networking.Client.VoiceSender`1/ChannelDelta<TPeer>
struct CORDL_TYPE VoiceSender_1_ChannelDelta {
public:
// Declarations
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(bool  open, ::Dissonance::ChannelType  type, ::Dissonance::ChannelProperties*  properties, uint16_t  recipientId, ::StringW  recipientName) ;

// Ctor Parameters []
// @brief default ctor
constexpr VoiceSender_1_ChannelDelta() ;

// Ctor Parameters [CppParam { name: "Open", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::Dissonance::ChannelType", modifiers: "", def_value: None }, CppParam { name: "Properties", ty: "::Dissonance::ChannelProperties*", modifiers: "", def_value: None }, CppParam { name: "RecipientId", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "RecipientName", ty: "::StringW", modifiers: "", def_value: None }]
constexpr VoiceSender_1_ChannelDelta(bool  Open, ::Dissonance::ChannelType  Type, ::Dissonance::ChannelProperties*  Properties, uint16_t  RecipientId, ::StringW  RecipientName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16926};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Open, offset: 0x0, size: 0x1, def value: None
 bool  Open;

/// @brief Field Type, offset: 0x4, size: 0x4, def value: None
 ::Dissonance::ChannelType  Type;

/// @brief Field Properties, offset: 0x8, size: 0x8, def value: None
 ::Dissonance::ChannelProperties*  Properties;

/// @brief Field RecipientId, offset: 0x10, size: 0x2, def value: None
 uint16_t  RecipientId;

/// @brief Field RecipientName, offset: 0x18, size: 0x8, def value: None
 ::StringW  RecipientName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
// Dependencies System.Object
namespace Dissonance::Networking::Client {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.Client.VoiceSender`1<TPeer>
class CORDL_TYPE VoiceSender_1 : public ::System::Object {
public:
// Declarations
using ChannelDelta = ::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field _channelSessionId, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__channelSessionId, put=__cordl_internal_set__channelSessionId)) uint8_t  _channelSessionId;

/// @brief Field _deltas, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__deltas, put=__cordl_internal_set__deltas)) ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>>*>*  _deltas;

/// @brief Field _events, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::Dissonance::Networking::Client::EventQueue*  _events;

/// @brief Field _hadId, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__hadId, put=__cordl_internal_set__hadId)) bool  _hadId;

/// @brief Field _noIdSendCount, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__noIdSendCount, put=__cordl_internal_set__noIdSendCount)) int32_t  _noIdSendCount;

/// @brief Field _openChannels, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__openChannels, put=__cordl_internal_set__openChannels)) ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*  _openChannels;

/// @brief Field _peers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__peers, put=__cordl_internal_set__peers)) ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  _peers;

/// @brief Field _pendingPlayerChannels, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingPlayerChannels, put=__cordl_internal_set__pendingPlayerChannels)) ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Dissonance::ChannelProperties*>>*  _pendingPlayerChannels;

/// @brief Field _playerChannels, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerChannels, put=__cordl_internal_set__playerChannels)) ::Dissonance::PlayerChannels*  _playerChannels;

/// @brief Field _roomChannels, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomChannels, put=__cordl_internal_set__roomChannels)) ::Dissonance::RoomChannels*  _roomChannels;

/// @brief Field _sender, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__sender, put=__cordl_internal_set__sender)) ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  _sender;

/// @brief Field _sequenceNumber, offset 0x60, size 0x2 
 __declspec(property(get=__cordl_internal_get__sequenceNumber, put=__cordl_internal_set__sequenceNumber)) uint16_t  _sequenceNumber;

/// @brief Field _session, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__session, put=__cordl_internal_set__session)) ::Dissonance::Networking::Client::ISession*  _session;

/// @brief Field _tmpDestsList, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpDestsList, put=__cordl_internal_set__tmpDestsList)) ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  _tmpDestsList;

/// @brief Field _tmpDestsSet, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpDestsSet, put=__cordl_internal_set__tmpDestsSet)) ::System::Collections::Generic::HashSet_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  _tmpDestsSet;

/// @brief Field _tmpRoomClientsList, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpRoomClientsList, put=__cordl_internal_set__tmpRoomClientsList)) ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  _tmpRoomClientsList;

/// @brief Method ApplyChannelDelta, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ApplyChannelDelta(::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>  d, ::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*  openChannels) ;

/// @brief Method ApplyChannelDeltas, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ApplyChannelDeltas(::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*  openChannels) ;

/// @brief Method AreAllChannelsClosing, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool AreAllChannelsClosing(::Dissonance::Threading::ReadonlyLockedValue_1_Unlocker<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*  openChannels) ;

/// @brief Method ClearClosedChannels, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearClosedChannels() ;

/// @brief Method CloseChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CloseChannel(::Dissonance::ChannelType  type, ::Dissonance::ChannelProperties*  properties, uint16_t  id) ;

/// @brief Method ClosePlayerChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClosePlayerChannel(::StringW  player, ::Dissonance::ChannelProperties*  config) ;

/// @brief Method CloseRoomChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CloseRoomChannel(::Dissonance::RoomName  room, ::Dissonance::ChannelProperties*  config) ;

/// @brief Method GetVoiceDestinations, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* GetVoiceDestinations(::System::Collections::Generic::IList_1<::Dissonance::Networking::Client::OpenChannel>*  openChannels) ;

static inline ::Dissonance::Networking::Client::VoiceSender_1<TPeer>* New_ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::RoomChannels*  roomChannels) ;

/// @brief Method OnPlayerJoined, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnPlayerJoined(::StringW  name, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method OnPlayerLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnPlayerLeft(::StringW  name) ;

/// @brief Method OpenChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OpenChannel(::Dissonance::ChannelType  type, ::Dissonance::ChannelProperties*  config, uint16_t  recipient, ::StringW  name) ;

/// @brief Method OpenPlayerChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OpenPlayerChannel(::StringW  player, ::Dissonance::ChannelProperties*  config) ;

/// @brief Method OpenRoomChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OpenRoomChannel(::Dissonance::RoomName  room, ::Dissonance::ChannelProperties*  config) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Send(::System::ArraySegment_1<uint8_t>  encodedAudio) ;

/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Stop() ;

constexpr uint8_t const& __cordl_internal_get__channelSessionId() const;

constexpr uint8_t& __cordl_internal_get__channelSessionId() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>>*>* const& __cordl_internal_get__deltas() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>>*>*& __cordl_internal_get__deltas() ;

constexpr ::Dissonance::Networking::Client::EventQueue* const& __cordl_internal_get__events() const;

constexpr ::Dissonance::Networking::Client::EventQueue*& __cordl_internal_get__events() ;

constexpr bool const& __cordl_internal_get__hadId() const;

constexpr bool& __cordl_internal_get__hadId() ;

constexpr int32_t const& __cordl_internal_get__noIdSendCount() const;

constexpr int32_t& __cordl_internal_get__noIdSendCount() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>* const& __cordl_internal_get__openChannels() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*& __cordl_internal_get__openChannels() ;

constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>* const& __cordl_internal_get__peers() const;

constexpr ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*& __cordl_internal_get__peers() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Dissonance::ChannelProperties*>>* const& __cordl_internal_get__pendingPlayerChannels() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Dissonance::ChannelProperties*>>*& __cordl_internal_get__pendingPlayerChannels() ;

constexpr ::Dissonance::PlayerChannels* const& __cordl_internal_get__playerChannels() const;

constexpr ::Dissonance::PlayerChannels*& __cordl_internal_get__playerChannels() ;

constexpr ::Dissonance::RoomChannels* const& __cordl_internal_get__roomChannels() const;

constexpr ::Dissonance::RoomChannels*& __cordl_internal_get__roomChannels() ;

constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>* const& __cordl_internal_get__sender() const;

constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*& __cordl_internal_get__sender() ;

constexpr uint16_t const& __cordl_internal_get__sequenceNumber() const;

constexpr uint16_t& __cordl_internal_get__sequenceNumber() ;

constexpr ::Dissonance::Networking::Client::ISession* const& __cordl_internal_get__session() const;

constexpr ::Dissonance::Networking::Client::ISession*& __cordl_internal_get__session() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& __cordl_internal_get__tmpDestsList() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& __cordl_internal_get__tmpDestsList() ;

constexpr ::System::Collections::Generic::HashSet_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& __cordl_internal_get__tmpDestsSet() const;

constexpr ::System::Collections::Generic::HashSet_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& __cordl_internal_get__tmpDestsSet() ;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* const& __cordl_internal_get__tmpRoomClientsList() const;

constexpr ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*& __cordl_internal_get__tmpRoomClientsList() ;

constexpr void __cordl_internal_set__channelSessionId(uint8_t  value) ;

constexpr void __cordl_internal_set__deltas(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>>*>*  value) ;

constexpr void __cordl_internal_set__events(::Dissonance::Networking::Client::EventQueue*  value) ;

constexpr void __cordl_internal_set__hadId(bool  value) ;

constexpr void __cordl_internal_set__noIdSendCount(int32_t  value) ;

constexpr void __cordl_internal_set__openChannels(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*  value) ;

constexpr void __cordl_internal_set__peers(::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  value) ;

constexpr void __cordl_internal_set__pendingPlayerChannels(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Dissonance::ChannelProperties*>>*  value) ;

constexpr void __cordl_internal_set__playerChannels(::Dissonance::PlayerChannels*  value) ;

constexpr void __cordl_internal_set__roomChannels(::Dissonance::RoomChannels*  value) ;

constexpr void __cordl_internal_set__sender(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  value) ;

constexpr void __cordl_internal_set__sequenceNumber(uint16_t  value) ;

constexpr void __cordl_internal_set__session(::Dissonance::Networking::Client::ISession*  value) ;

constexpr void __cordl_internal_set__tmpDestsList(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value) ;

constexpr void __cordl_internal_set__tmpDestsSet(::System::Collections::Generic::HashSet_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value) ;

constexpr void __cordl_internal_set__tmpRoomClientsList(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  sender, ::Dissonance::Networking::Client::ISession*  session, ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  peers, ::Dissonance::Networking::Client::EventQueue*  events, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::RoomChannels*  roomChannels) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSender_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSender_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSender_1(VoiceSender_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSender_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSender_1(VoiceSender_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16927};

/// @brief Field _sender, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*  ____sender;

/// @brief Field _session, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Networking::Client::ISession*  ____session;

/// @brief Field _peers, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Networking::IClientCollection_1<::System::Nullable_1<TPeer>>*  ____peers;

/// @brief Field _events, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Networking::Client::EventQueue*  ____events;

/// @brief Field _playerChannels, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::PlayerChannels*  ____playerChannels;

/// @brief Field _roomChannels, offset: 0x38, size: 0x8, def value: None
 ::Dissonance::RoomChannels*  ____roomChannels;

/// @brief Field _channelSessionId, offset: 0x40, size: 0x1, def value: None
 uint8_t  ____channelSessionId;

/// @brief Field _openChannels, offset: 0x48, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::OpenChannel>*>*  ____openChannels;

/// @brief Field _deltas, offset: 0x50, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::Dissonance::Networking::Client::VoiceSender_1_ChannelDelta<TPeer>>*>*  ____deltas;

/// @brief Field _pendingPlayerChannels, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Dissonance::ChannelProperties*>>*  ____pendingPlayerChannels;

/// @brief Field _sequenceNumber, offset: 0x60, size: 0x2, def value: None
 uint16_t  ____sequenceNumber;

/// @brief Field _tmpDestsSet, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  ____tmpDestsSet;

/// @brief Field _tmpDestsList, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  ____tmpDestsList;

/// @brief Field _tmpRoomClientsList, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  ____tmpRoomClientsList;

/// @brief Field _hadId, offset: 0x80, size: 0x1, def value: None
 bool  ____hadId;

/// @brief Field _noIdSendCount, offset: 0x84, size: 0x4, def value: None
 int32_t  ____noIdSendCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
