#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/PeerVoiceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeerVoiceReceiver)
namespace Dissonance::Datastructures {
template<typename T>
class ConcurrentPool_1;
}
namespace Dissonance::Networking::Client {
class IVoiceEventQueue;
}
namespace Dissonance::Networking::Client {
struct PeerVoiceReceiver_ChannelsMetadata;
}
namespace Dissonance::Networking {
struct ChannelBitField;
}
namespace Dissonance::Networking {
struct PacketReader;
}
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
class IRooms;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
struct RemoteChannel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
class PeerVoiceReceiver;
}
namespace Dissonance::Networking::Client {
struct PeerVoiceReceiver_ChannelsMetadata;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::Client::PeerVoiceReceiver*);
MARK_VAL_T(::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Client::PeerVoiceReceiver*, "Dissonance.Networking.Client", "PeerVoiceReceiver");
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata, "Dissonance.Networking.Client", "PeerVoiceReceiver/ChannelsMetadata");
// Dependencies Dissonance.ChannelPriority
namespace Dissonance::Networking::Client {
// Is value type: true
// CS Name: Dissonance.Networking.Client.PeerVoiceReceiver/ChannelsMetadata
struct CORDL_TYPE PeerVoiceReceiver_ChannelsMetadata {
public:
// Declarations
/// @brief Method CombineWith, addr 0x1805da180, size 0x80, virtual false, abstract: false, final false
inline ::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata CombineWith(::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata  other) ;

/// @brief Method .ctor, addr 0x1805da200, size 0x60, virtual false, abstract: false, final false
inline void _ctor(bool  isPositional, float_t  amplitudeMultiplier, ::Dissonance::ChannelPriority  priority) ;

// Ctor Parameters []
// @brief default ctor
constexpr PeerVoiceReceiver_ChannelsMetadata() ;

// Ctor Parameters [CppParam { name: "IsPositional", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "AmplitudeMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "::Dissonance::ChannelPriority", modifiers: "", def_value: None }]
constexpr PeerVoiceReceiver_ChannelsMetadata(bool  IsPositional, float_t  AmplitudeMultiplier, ::Dissonance::ChannelPriority  Priority) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16916};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field IsPositional, offset: 0x0, size: 0x1, def value: None
 bool  IsPositional;

/// @brief Field AmplitudeMultiplier, offset: 0x4, size: 0x4, def value: None
 float_t  AmplitudeMultiplier;

/// @brief Field Priority, offset: 0x8, size: 0x4, def value: None
 ::Dissonance::ChannelPriority  Priority;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata, IsPositional) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata, AmplitudeMultiplier) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata, Priority) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata) == 0xc, "Size mismatch!");

} // namespace end def Dissonance::Networking::Client
// Dependencies System.DateTime, System.Object
namespace Dissonance::Networking::Client {
// Is value type: false
// CS Name: Dissonance.Networking.Client.PeerVoiceReceiver
class CORDL_TYPE PeerVoiceReceiver : public ::System::Object {
public:
// Declarations
using ChannelsMetadata = ::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Open, put=set_Open)) bool  Open;

 __declspec(property(get=get_ReceiveAllVoicePackets, put=set_ReceiveAllVoicePackets)) bool  ReceiveAllVoicePackets;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Open>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__Open_k__BackingField, put=__cordl_internal_set__Open_k__BackingField)) bool  _Open_k__BackingField;

/// @brief Field <ReceiveAllVoicePackets>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__ReceiveAllVoicePackets_k__BackingField, put=__cordl_internal_set__ReceiveAllVoicePackets_k__BackingField)) bool  _ReceiveAllVoicePackets_k__BackingField;

/// @brief Field _channelListPool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__channelListPool, put=__cordl_internal_set__channelListPool)) ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  _channelListPool;

/// @brief Field _currentChannelSession, offset 0x52, size 0x2 
 __declspec(property(get=__cordl_internal_get__currentChannelSession, put=__cordl_internal_set__currentChannelSession)) uint16_t  _currentChannelSession;

/// @brief Field _events, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::Dissonance::Networking::Client::IVoiceEventQueue*  _events;

/// @brief Field _expectedPerChannelSessions, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__expectedPerChannelSessions, put=__cordl_internal_set__expectedPerChannelSessions)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  _expectedPerChannelSessions;

/// @brief Field _lastReceiptTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastReceiptTime, put=__cordl_internal_set__lastReceiptTime)) ::System::DateTime  _lastReceiptTime;

/// @brief Field _localId, offset 0x30, size 0x2 
 __declspec(property(get=__cordl_internal_get__localId, put=__cordl_internal_set__localId)) uint16_t  _localId;

/// @brief Field _localListeningRooms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__localListeningRooms, put=__cordl_internal_set__localListeningRooms)) ::Dissonance::IRooms*  _localListeningRooms;

/// @brief Field _localName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__localName, put=__cordl_internal_set__localName)) ::StringW  _localName;

/// @brief Field _localSequenceNumber, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__localSequenceNumber, put=__cordl_internal_set__localSequenceNumber)) uint32_t  _localSequenceNumber;

/// @brief Field _receivedInitialPacket, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__receivedInitialPacket, put=__cordl_internal_set__receivedInitialPacket)) bool  _receivedInitialPacket;

/// @brief Field _remoteSequenceNumber, offset 0x48, size 0x2 
 __declspec(property(get=__cordl_internal_get__remoteSequenceNumber, put=__cordl_internal_set__remoteSequenceNumber)) uint16_t  _remoteSequenceNumber;

/// @brief Field _tmpCompositeIdBuffer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpCompositeIdBuffer, put=__cordl_internal_set__tmpCompositeIdBuffer)) ::System::Collections::Generic::List_1<int32_t>*  _tmpCompositeIdBuffer;

/// @brief Method CheckTimeout, addr 0x1805e5eb0, size 0x100, virtual false, abstract: false, final false
inline void CheckTimeout(::System::DateTime  utcNow, ::System::TimeSpan  activeTimeout, ::System::TimeSpan  inactiveTimeout) ;

/// @brief Method HasChannelSessionChanged, addr 0x1805e5fb0, size 0x90, virtual false, abstract: false, final false
inline bool HasChannelSessionChanged(int32_t  compositeId, int32_t  expectedValue) ;

/// @brief Method IsChannelToLocalPlayer, addr 0x1805e6040, size 0x210, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Dissonance::RemoteChannel> IsChannelToLocalPlayer(::Dissonance::Networking::ChannelBitField  channel, uint16_t  recipient) ;

/// @brief Method IsPacketFromPreviousSession, addr 0x1805e6250, size 0x40, virtual false, abstract: false, final false
static inline bool IsPacketFromPreviousSession(uint16_t  currentChannelSession, uint16_t  packetChannelSession, bool  isExtendedRange) ;

static inline ::Dissonance::Networking::Client::PeerVoiceReceiver* New_ctor(::StringW  remoteName, uint16_t  localId, ::StringW  localName, ::Dissonance::Networking::Client::IVoiceEventQueue*  events, ::Dissonance::IRooms*  listeningRooms, ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelListPool) ;

/// @brief Method ReadChannels, addr 0x1805e6290, size 0x490, virtual false, abstract: false, final false
inline void ReadChannels(::by_ref<::Dissonance::Networking::PacketReader>  reader, uint16_t  numChannels, ::by_ref<bool>  allClosing, ::by_ref<bool>  forceReset, ::by_ref<::Dissonance::Networking::Client::PeerVoiceReceiver_ChannelsMetadata>  channelsMetadata, ::System::Collections::Generic::ICollection_1<::Dissonance::RemoteChannel>*  channelsOut) ;

/// @brief Method ReceivePacket, addr 0x1805e6720, size 0x3e0, virtual false, abstract: false, final false
inline void ReceivePacket(::by_ref<::Dissonance::Networking::PacketReader>  reader, ::System::DateTime  utcNow) ;

/// @brief Method RemoveChannelsExcept, addr 0x1805e6b00, size 0x170, virtual false, abstract: false, final false
inline void RemoveChannelsExcept(::System::Collections::Generic::List_1<int32_t>*  keys) ;

/// @brief Method StartSpeaking, addr 0x1805e6c70, size 0xd0, virtual false, abstract: false, final false
inline void StartSpeaking(uint16_t  startSequenceNumber, uint16_t  channelSession, ::System::DateTime  utcNow) ;

/// @brief Method StopSpeaking, addr 0x1805e6d40, size 0x90, virtual false, abstract: false, final false
inline void StopSpeaking() ;

/// @brief Method UpdateSequenceNumber, addr 0x1805e6dd0, size 0x50, virtual false, abstract: false, final false
inline bool UpdateSequenceNumber(uint16_t  sequenceNumber, ::System::DateTime  utcNow) ;

/// @brief Method UpdateSpeakerState, addr 0x1805e6e20, size 0x1c0, virtual false, abstract: false, final false
inline bool UpdateSpeakerState(bool  allClosing, bool  forceReset, uint16_t  channelSession, uint16_t  sequenceNumber, ::System::DateTime  utcNow) ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Open_k__BackingField() const;

constexpr bool& __cordl_internal_get__Open_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ReceiveAllVoicePackets_k__BackingField() const;

constexpr bool& __cordl_internal_get__ReceiveAllVoicePackets_k__BackingField() ;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>* const& __cordl_internal_get__channelListPool() const;

constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*& __cordl_internal_get__channelListPool() ;

constexpr uint16_t const& __cordl_internal_get__currentChannelSession() const;

constexpr uint16_t& __cordl_internal_get__currentChannelSession() ;

constexpr ::Dissonance::Networking::Client::IVoiceEventQueue* const& __cordl_internal_get__events() const;

constexpr ::Dissonance::Networking::Client::IVoiceEventQueue*& __cordl_internal_get__events() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get__expectedPerChannelSessions() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get__expectedPerChannelSessions() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastReceiptTime() const;

constexpr ::System::DateTime& __cordl_internal_get__lastReceiptTime() ;

constexpr uint16_t const& __cordl_internal_get__localId() const;

constexpr uint16_t& __cordl_internal_get__localId() ;

constexpr ::Dissonance::IRooms* const& __cordl_internal_get__localListeningRooms() const;

constexpr ::Dissonance::IRooms*& __cordl_internal_get__localListeningRooms() ;

constexpr ::StringW const& __cordl_internal_get__localName() const;

constexpr ::StringW& __cordl_internal_get__localName() ;

constexpr uint32_t const& __cordl_internal_get__localSequenceNumber() const;

constexpr uint32_t& __cordl_internal_get__localSequenceNumber() ;

constexpr bool const& __cordl_internal_get__receivedInitialPacket() const;

constexpr bool& __cordl_internal_get__receivedInitialPacket() ;

constexpr uint16_t const& __cordl_internal_get__remoteSequenceNumber() const;

constexpr uint16_t& __cordl_internal_get__remoteSequenceNumber() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__tmpCompositeIdBuffer() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__tmpCompositeIdBuffer() ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Open_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ReceiveAllVoicePackets_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__channelListPool(::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  value) ;

constexpr void __cordl_internal_set__currentChannelSession(uint16_t  value) ;

constexpr void __cordl_internal_set__events(::Dissonance::Networking::Client::IVoiceEventQueue*  value) ;

constexpr void __cordl_internal_set__expectedPerChannelSessions(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set__lastReceiptTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__localId(uint16_t  value) ;

constexpr void __cordl_internal_set__localListeningRooms(::Dissonance::IRooms*  value) ;

constexpr void __cordl_internal_set__localName(::StringW  value) ;

constexpr void __cordl_internal_set__localSequenceNumber(uint32_t  value) ;

constexpr void __cordl_internal_set__receivedInitialPacket(bool  value) ;

constexpr void __cordl_internal_set__remoteSequenceNumber(uint16_t  value) ;

constexpr void __cordl_internal_set__tmpCompositeIdBuffer(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x1805e7030, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::StringW  remoteName, uint16_t  localId, ::StringW  localName, ::Dissonance::Networking::Client::IVoiceEventQueue*  events, ::Dissonance::IRooms*  listeningRooms, ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  channelListPool) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Name, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Open, addr 0x1802f8060, size 0x10, virtual false, abstract: false, final false
inline bool get_Open() ;

/// @brief Method get_ReceiveAllVoicePackets, addr 0x180347a60, size 0xe0, virtual false, abstract: false, final false
inline bool get_ReceiveAllVoicePackets() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_Open, addr 0x1802f8090, size 0x10, virtual false, abstract: false, final false
inline void set_Open(bool  value) ;

/// @brief Method set_ReceiveAllVoicePackets, addr 0x180452bb0, size 0x10, virtual false, abstract: false, final false
inline void set_ReceiveAllVoicePackets(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeerVoiceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeerVoiceReceiver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeerVoiceReceiver(PeerVoiceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeerVoiceReceiver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeerVoiceReceiver(PeerVoiceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16917};

/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// @brief Field _events, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Networking::Client::IVoiceEventQueue*  ____events;

/// @brief Field _localListeningRooms, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::IRooms*  ____localListeningRooms;

/// @brief Field _channelListPool, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*>*  ____channelListPool;

/// @brief Field _localId, offset: 0x30, size: 0x2, def value: None
 uint16_t  ____localId;

/// @brief Field _localName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____localName;

/// @brief Field _lastReceiptTime, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ____lastReceiptTime;

/// @brief Field _remoteSequenceNumber, offset: 0x48, size: 0x2, def value: None
 uint16_t  ____remoteSequenceNumber;

/// @brief Field _localSequenceNumber, offset: 0x4c, size: 0x4, def value: None
 uint32_t  ____localSequenceNumber;

/// @brief Field <Open>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____Open_k__BackingField;

/// @brief Field _receivedInitialPacket, offset: 0x51, size: 0x1, def value: None
 bool  ____receivedInitialPacket;

/// @brief Field _currentChannelSession, offset: 0x52, size: 0x2, def value: None
 uint16_t  ____currentChannelSession;

/// @brief Field _expectedPerChannelSessions, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ____expectedPerChannelSessions;

/// @brief Field _tmpCompositeIdBuffer, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____tmpCompositeIdBuffer;

/// @brief Field <ReceiveAllVoicePackets>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____ReceiveAllVoicePackets_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____events) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____localListeningRooms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____channelListPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____localId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____localName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____lastReceiptTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____remoteSequenceNumber) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____localSequenceNumber) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____Open_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____receivedInitialPacket) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____currentChannelSession) == 0x52, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____expectedPerChannelSessions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____tmpCompositeIdBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::PeerVoiceReceiver, ____ReceiveAllVoicePackets_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::Client::PeerVoiceReceiver) == 0x70, "Size mismatch!");

} // namespace end def Dissonance::Networking::Client
