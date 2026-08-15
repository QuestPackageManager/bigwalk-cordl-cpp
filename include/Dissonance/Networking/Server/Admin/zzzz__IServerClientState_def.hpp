#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/Admin/IServerClientState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IServerClientState)
namespace Dissonance::Networking {
struct VoicePacket;
}
namespace Dissonance {
struct RemoteChannel;
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
class Action;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Dissonance::Networking::Server::Admin {
class IServerClientState;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::Server::Admin::IServerClientState*);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Server::Admin::IServerClientState*, "Dissonance.Networking.Server.Admin", "IServerClientState");
// Dependencies 
namespace Dissonance::Networking::Server::Admin {
// Is value type: false
// CS Name: Dissonance.Networking.Server.Admin.IServerClientState
class CORDL_TYPE IServerClientState {
public:
// Declarations
 __declspec(property(get=get_Channels)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>*  Channels;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_LastChannelUpdateUtc)) ::System::DateTime  LastChannelUpdateUtc;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Rooms)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  Rooms;

/// @brief Method RemoveFromRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RemoveFromRoom(::StringW  roomName) ;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method add_OnStartedListeningToRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_OnStartedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value) ;

/// @brief Method add_OnStoppedListeningToRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_OnStoppedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value) ;

/// @brief Method add_OnVoicePacket, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_OnVoicePacket(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

/// @brief Method add_StartedSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_StartedSpeaking(::System::Action*  value) ;

/// @brief Method add_StoppedSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_StoppedSpeaking(::System::Action*  value) ;

/// @brief Method get_Channels, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::RemoteChannel>* get_Channels() ;

/// @brief Method get_IsConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_LastChannelUpdateUtc, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::DateTime get_LastChannelUpdateUtc() ;

/// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Rooms, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_Rooms() ;

/// @brief Method remove_OnStartedListeningToRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_OnStartedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value) ;

/// @brief Method remove_OnStoppedListeningToRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_OnStoppedListeningToRoom(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::StringW>*  value) ;

/// @brief Method remove_OnVoicePacket, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_OnVoicePacket(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value) ;

/// @brief Method remove_StartedSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_StartedSpeaking(::System::Action*  value) ;

/// @brief Method remove_StoppedSpeaking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_StoppedSpeaking(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IServerClientState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IServerClientState(IServerClientState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16899};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Server::Admin
