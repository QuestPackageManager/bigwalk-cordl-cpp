#pragma once
// IWYU pragma private; include "Dissonance/Networking/ICommsNetwork.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICommsNetwork)
namespace Dissonance::Networking {
struct ConnectionStatus;
}
namespace Dissonance::Networking {
struct NetworkMode;
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
namespace Dissonance {
struct ChannelType;
}
namespace Dissonance {
struct CodecSettings;
}
namespace Dissonance {
class PlayerChannels;
}
namespace Dissonance {
class RoomChannels;
}
namespace Dissonance {
class Rooms;
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
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Networking {
class ICommsNetwork;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::ICommsNetwork*);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::ICommsNetwork*, "Dissonance.Networking", "ICommsNetwork");
// Dependencies 
namespace Dissonance::Networking {
// Is value type: false
// CS Name: Dissonance.Networking.ICommsNetwork
class CORDL_TYPE ICommsNetwork {
public:
// Declarations
 __declspec(property(get=get_Mode)) ::Dissonance::Networking::NetworkMode  Mode;

 __declspec(property(get=get_Status)) ::Dissonance::Networking::ConnectionStatus  Status;

/// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Initialize(::StringW  playerName, ::Dissonance::Rooms*  rooms, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::CodecSettings  codecSettings) ;

/// @brief Method SendText, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendText(::StringW  data, ::Dissonance::ChannelType  recipientType, ::StringW  recipientId) ;

/// @brief Method SendVoice, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendVoice(::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method add_ModeChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_ModeChanged(::System::Action_1<::Dissonance::Networking::NetworkMode>*  value) ;

/// @brief Method add_PlayerEnteredRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method add_PlayerExitedRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method add_PlayerJoined, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value) ;

/// @brief Method add_PlayerLeft, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PlayerLeft(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_PlayerStartedSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_PlayerStoppedSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method add_TextPacketReceived, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_TextPacketReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

/// @brief Method add_VoicePacketReceived, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

/// @brief Method get_Mode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::Networking::NetworkMode get_Mode() ;

/// @brief Method get_Status, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::Networking::ConnectionStatus get_Status() ;

/// @brief Method remove_ModeChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_ModeChanged(::System::Action_1<::Dissonance::Networking::NetworkMode>*  value) ;

/// @brief Method remove_PlayerEnteredRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method remove_PlayerExitedRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value) ;

/// @brief Method remove_PlayerJoined, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value) ;

/// @brief Method remove_PlayerLeft, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PlayerLeft(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_PlayerStartedSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_PlayerStoppedSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value) ;

/// @brief Method remove_TextPacketReceived, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_TextPacketReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value) ;

/// @brief Method remove_VoicePacketReceived, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ICommsNetwork", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICommsNetwork(ICommsNetwork const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16884};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
