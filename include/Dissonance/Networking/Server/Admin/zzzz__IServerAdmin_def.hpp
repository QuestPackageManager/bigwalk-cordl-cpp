#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/Admin/IServerAdmin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IServerAdmin)
namespace Dissonance::Networking::Server::Admin {
class IServerClientState;
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
// Forward declare root types
namespace Dissonance::Networking::Server::Admin {
class IServerAdmin;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::Server::Admin::IServerAdmin*);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Server::Admin::IServerAdmin*, "Dissonance.Networking.Server.Admin", "IServerAdmin");
// Dependencies 
namespace Dissonance::Networking::Server::Admin {
// Is value type: false
// CS Name: Dissonance.Networking.Server.Admin.IServerAdmin
class CORDL_TYPE IServerAdmin {
public:
// Declarations
 __declspec(property(get=get_Clients)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  Clients;

 __declspec(property(get=get_EnableChannelMonitoring, put=set_EnableChannelMonitoring)) bool  EnableChannelMonitoring;

/// @brief Method add_ClientJoined, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_ClientJoined(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

/// @brief Method add_ClientLeft, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_ClientLeft(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

/// @brief Method add_VoicePacketSpoofed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_VoicePacketSpoofed(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

/// @brief Method get_Clients, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Dissonance::Networking::Server::Admin::IServerClientState*>* get_Clients() ;

/// @brief Method get_EnableChannelMonitoring, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_EnableChannelMonitoring() ;

/// @brief Method remove_ClientJoined, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_ClientJoined(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

/// @brief Method remove_ClientLeft, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_ClientLeft(::System::Action_1<::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

/// @brief Method remove_VoicePacketSpoofed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_VoicePacketSpoofed(::System::Action_2<::Dissonance::Networking::Server::Admin::IServerClientState*,::Dissonance::Networking::Server::Admin::IServerClientState*>*  value) ;

/// @brief Method set_EnableChannelMonitoring, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_EnableChannelMonitoring(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IServerAdmin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IServerAdmin(IServerAdmin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16898};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Server::Admin
