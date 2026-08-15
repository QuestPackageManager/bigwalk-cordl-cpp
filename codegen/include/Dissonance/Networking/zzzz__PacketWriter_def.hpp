#pragma once
// IWYU pragma private; include "Dissonance/Networking/PacketWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketWriter)
namespace Dissonance::Networking::Client {
struct OpenChannel;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
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
class Rooms;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
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
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Networking {
struct PacketWriter;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::PacketWriter);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::PacketWriter, "Dissonance.Networking", "PacketWriter");
// Dependencies System.ArraySegment`1<T>
namespace Dissonance::Networking {
// Is value type: true
// CS Name: Dissonance.Networking.PacketWriter
struct CORDL_TYPE PacketWriter {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Written)) ::System::ArraySegment_1<uint8_t>  Written;

/// @brief Method Check, addr 0x1805e3a60, size 0xa0, virtual false, abstract: false, final false
inline void Check(int32_t  count, ::StringW  type) ;

/// @brief Method FastWriteByte, addr 0x1805e3b00, size 0x80, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter FastWriteByte(uint8_t  b) ;

/// @brief Method Write, addr 0x1805e5c90, size 0xb0, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter Write(uint8_t  b) ;

/// @brief Method Write, addr 0x1805e5d40, size 0xf0, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter Write(::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method Write, addr 0x1805e5b50, size 0x140, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter Write(::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method Write, addr 0x1805e5800, size 0x180, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter Write(::StringW  playerName, uint16_t  playerId, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method Write, addr 0x1805e5980, size 0x1d0, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter Write(::StringW  s) ;

/// @brief Method Write, addr 0x1805e55a0, size 0xd0, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter Write(uint16_t  u) ;

/// @brief Method Write, addr 0x1805e5670, size 0x190, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter Write(uint32_t  u) ;

/// @brief Method WriteClientState, addr 0x1805e3e30, size 0x110, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter WriteClientState(uint32_t  session, ::StringW  name, uint16_t  clientId, ::Dissonance::CodecSettings  codecSettings, ::Dissonance::Rooms*  rooms) ;

/// @brief Method WriteClientState, addr 0x1805e3b80, size 0x2b0, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter WriteClientState(uint32_t  session, ::StringW  name, uint16_t  clientId, ::Dissonance::CodecSettings  codecSettings, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  rooms) ;

/// @brief Method WriteDeltaChannelState, addr 0x1805e3f40, size 0x210, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter WriteDeltaChannelState(uint32_t  session, bool  joined, uint16_t  peer, ::StringW  name) ;

/// @brief Method WriteErrorWrongSession, addr 0x1805e4150, size 0x110, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter WriteErrorWrongSession(uint32_t  session) ;

/// @brief Method WriteHandshakeP2P, addr 0x1805e4260, size 0x190, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter WriteHandshakeP2P(uint32_t  session, uint16_t  peerId) ;

/// @brief Method WriteHandshakeRequest, addr 0x1805e43f0, size 0x300, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter WriteHandshakeRequest(::StringW  name, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method WriteHandshakeResponse, addr 0x1805e46f0, size 0x290, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter WriteHandshakeResponse(uint32_t  session, uint16_t  clientId) ;

/// @brief Method WriteHandshakeResponse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPeer>
inline ::Dissonance::Networking::PacketWriter WriteHandshakeResponse(uint32_t  session, uint16_t  clientId, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  clients, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>*  peersByRoom) ;

/// @brief Method WriteMagic, addr 0x1805e4980, size 0x60, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter WriteMagic() ;

/// @brief Method WriteRelay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPeer>
inline ::Dissonance::Networking::PacketWriter WriteRelay(uint32_t  session, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  destinations, ::System::ArraySegment_1<uint8_t>  segment, bool  reliable) ;

/// @brief Method WriteRemoveClient, addr 0x1805e49e0, size 0x190, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter WriteRemoveClient(uint32_t  session, uint16_t  clientId) ;

/// @brief Method WriteTextPacket, addr 0x1805e4b70, size 0x3c0, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter WriteTextPacket(uint32_t  session, uint16_t  senderId, ::Dissonance::ChannelType  recipient, uint16_t  target, ::StringW  data) ;

/// @brief Method WriteVoiceData, addr 0x1805e4f30, size 0x670, virtual false, abstract: false, final false
inline ::Dissonance::Networking::PacketWriter WriteVoiceData(uint32_t  session, uint16_t  senderId, uint16_t  sequenceNumber, uint8_t  channelSession, ::System::Collections::Generic::IList_1<::Dissonance::Networking::Client::OpenChannel>*  channels, ::System::ArraySegment_1<uint8_t>  encodedAudio) ;

/// @brief Method .ctor, addr 0x1805e38f0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  array) ;

/// @brief Method .ctor, addr 0x1805e3890, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::ArraySegment_1<uint8_t>  array) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Written, addr 0x1805e3960, size 0x60, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_Written() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PacketWriter() ;

// Ctor Parameters [CppParam { name: "_array", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PacketWriter(::System::ArraySegment_1<uint8_t>  _array, int32_t  _count) noexcept;

/// @brief Field Magic offset 0xffffffff size 0x2
static constexpr uint16_t  Magic{static_cast<uint16_t>(0x8bc7u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16888};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _array, offset: 0x0, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  _array;

/// @brief Field _count, offset: 0x10, size: 0x4, def value: None
 int32_t  _count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::PacketWriter, _array) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::PacketWriter, _count) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::PacketWriter) == 0x18, "Size mismatch!");

} // namespace end def Dissonance::Networking
