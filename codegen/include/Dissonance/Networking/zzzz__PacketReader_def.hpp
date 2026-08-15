#pragma once
// IWYU pragma private; include "Dissonance/Networking/PacketReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketReader)
namespace Dissonance::Networking::Client {
struct VoicePacketOptions;
}
namespace Dissonance::Networking {
struct ChannelBitField;
}
namespace Dissonance::Networking {
struct ClientInfo;
}
namespace Dissonance::Networking {
struct MessageTypes;
}
namespace Dissonance::Networking {
struct TextPacket;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
class Log;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Networking {
struct PacketReader;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::PacketReader);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::PacketReader, "Dissonance.Networking", "PacketReader");
// Dependencies System.ArraySegment`1<T>
namespace Dissonance::Networking {
// Is value type: true
// CS Name: Dissonance.Networking.PacketReader
struct CORDL_TYPE PacketReader {
public:
// Declarations
 __declspec(property(get=get_All)) ::System::ArraySegment_1<uint8_t>  All;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Read)) ::System::ArraySegment_1<uint8_t>  Read;

 __declspec(property(get=get_Unread)) ::System::ArraySegment_1<uint8_t>  Unread;

/// @brief Method Check, addr 0x1805e1f00, size 0xa0, virtual false, abstract: false, final false
inline void Check(int32_t  count, ::StringW  type) ;

/// @brief Method FastReadByte, addr 0x1805e1fa0, size 0x40, virtual false, abstract: false, final false
inline uint8_t FastReadByte() ;

/// @brief Method ReadByte, addr 0x1805e2110, size 0x60, virtual false, abstract: false, final false
inline uint8_t ReadByte() ;

/// @brief Method ReadByteSegment, addr 0x1805e1fe0, size 0x130, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> ReadByteSegment() ;

/// @brief Method ReadClientInfo, addr 0x1805e2170, size 0x190, virtual false, abstract: false, final false
inline ::Dissonance::Networking::ClientInfo ReadClientInfo() ;

/// @brief Method ReadClientStateHeader, addr 0x1805e2300, size 0xe0, virtual false, abstract: false, final false
inline ::Dissonance::Networking::ClientInfo ReadClientStateHeader() ;

/// @brief Method ReadClientStateRooms, addr 0x1805e23e0, size 0xe0, virtual false, abstract: false, final false
inline void ReadClientStateRooms(::System::Collections::Generic::List_1<::StringW>*  rooms) ;

/// @brief Method ReadCodecSettings, addr 0x1805e24c0, size 0xe0, virtual false, abstract: false, final false
inline ::Dissonance::CodecSettings ReadCodecSettings() ;

/// @brief Method ReadDeltaChannelState, addr 0x1805e25a0, size 0x160, virtual false, abstract: false, final false
inline void ReadDeltaChannelState(::by_ref<bool>  joined, ::by_ref<uint16_t>  peer, ::by_ref<::StringW>  name) ;

/// @brief Method ReadErrorWrongSession, addr 0x1805e2700, size 0x20, virtual false, abstract: false, final false
inline uint32_t ReadErrorWrongSession() ;

/// @brief Method ReadHandshakeRequest, addr 0x1805e2720, size 0xf0, virtual false, abstract: false, final false
inline void ReadHandshakeRequest(::by_ref<::StringW>  name, ::by_ref<::Dissonance::CodecSettings>  codecSettings) ;

/// @brief Method ReadHandshakeResponseBody, addr 0x1805e2810, size 0x550, virtual false, abstract: false, final false
inline void ReadHandshakeResponseBody(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo>*  clients, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<uint16_t>*>*  outputRoomsToPeerId) ;

/// @brief Method ReadHandshakeResponseHeader, addr 0x1805e2d60, size 0xa0, virtual false, abstract: false, final false
inline void ReadHandshakeResponseHeader(::by_ref<uint32_t>  session, ::by_ref<uint16_t>  clientId) ;

/// @brief Method ReadPacketHeader, addr 0x1805e2e00, size 0xe0, virtual false, abstract: false, final false
inline bool ReadPacketHeader(::by_ref<::Dissonance::Networking::MessageTypes>  messageType) ;

/// @brief Method ReadRelay, addr 0x1805e2ee0, size 0x210, virtual false, abstract: false, final false
inline void ReadRelay(::System::Collections::Generic::List_1<uint16_t>*  destinations, ::by_ref<::System::ArraySegment_1<uint8_t>>  data) ;

/// @brief Method ReadRemoveClient, addr 0x1805e30f0, size 0x90, virtual false, abstract: false, final false
inline void ReadRemoveClient(::by_ref<uint16_t>  clientId) ;

/// @brief Method ReadString, addr 0x1805e3180, size 0x190, virtual false, abstract: false, final false
inline ::StringW ReadString() ;

/// @brief Method ReadTextPacket, addr 0x1805e3310, size 0x190, virtual false, abstract: false, final false
inline ::Dissonance::Networking::TextPacket ReadTextPacket() ;

/// @brief Method ReadUInt16, addr 0x1805e34a0, size 0x80, virtual false, abstract: false, final false
inline uint16_t ReadUInt16() ;

/// @brief Method ReadUInt32, addr 0x1805e3520, size 0xc0, virtual false, abstract: false, final false
inline uint32_t ReadUInt32() ;

/// @brief Method ReadVoicePacketChannel, addr 0x1805e35e0, size 0x100, virtual false, abstract: false, final false
inline void ReadVoicePacketChannel(::by_ref<::Dissonance::Networking::ChannelBitField>  bitfield, ::by_ref<uint16_t>  recipient) ;

/// @brief Method ReadVoicePacketHeader1, addr 0x1805e30f0, size 0x90, virtual false, abstract: false, final false
inline void ReadVoicePacketHeader1(::by_ref<uint16_t>  senderId) ;

/// @brief Method ReadVoicePacketHeader2, addr 0x1805e36e0, size 0x160, virtual false, abstract: false, final false
inline void ReadVoicePacketHeader2(::by_ref<::Dissonance::Networking::Client::VoicePacketOptions>  options, ::by_ref<uint16_t>  sequenceNumber, ::by_ref<uint16_t>  numChannels) ;

/// @brief Method ReadhandshakeP2P, addr 0x1805e30f0, size 0x90, virtual false, abstract: false, final false
inline void ReadhandshakeP2P(::by_ref<uint16_t>  peerId) ;

/// @brief Method .ctor, addr 0x1805e38f0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  array) ;

/// @brief Method .ctor, addr 0x1805e3890, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::ArraySegment_1<uint8_t>  array) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_All, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_All() ;

/// @brief Method get_Read, addr 0x1805e3960, size 0x60, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_Read() ;

/// @brief Method get_Unread, addr 0x1805e39c0, size 0xa0, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_Unread() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PacketReader() ;

// Ctor Parameters [CppParam { name: "_array", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PacketReader(::System::ArraySegment_1<uint8_t>  _array, int32_t  _count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16887};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _array, offset: 0x0, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  _array;

/// @brief Field _count, offset: 0x10, size: 0x4, def value: None
 int32_t  _count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::PacketReader, _array) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::PacketReader, _count) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::PacketReader) == 0x18, "Size mismatch!");

} // namespace end def Dissonance::Networking
