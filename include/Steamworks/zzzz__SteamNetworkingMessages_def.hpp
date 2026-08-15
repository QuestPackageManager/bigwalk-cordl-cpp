#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingMessages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingMessages)
namespace Steamworks {
struct EResult;
}
namespace Steamworks {
struct ESteamNetworkingConnectionState;
}
namespace Steamworks {
struct SteamNetConnectionInfo_t;
}
namespace Steamworks {
struct SteamNetConnectionRealTimeStatus_t;
}
namespace Steamworks {
struct SteamNetworkingIdentity;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class SteamNetworkingMessages;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamNetworkingMessages*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingMessages*, "Steamworks", "SteamNetworkingMessages");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamNetworkingMessages
class CORDL_TYPE SteamNetworkingMessages : public ::System::Object {
public:
// Declarations
/// @brief Method AcceptSessionWithUser, addr 0x1805b4dd0, size 0x40, virtual false, abstract: false, final false
static inline bool AcceptSessionWithUser(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote) ;

/// @brief Method CloseChannelWithUser, addr 0x1805b4e10, size 0x50, virtual false, abstract: false, final false
static inline bool CloseChannelWithUser(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, int32_t  nLocalChannel) ;

/// @brief Method CloseSessionWithUser, addr 0x1805b4e60, size 0x40, virtual false, abstract: false, final false
static inline bool CloseSessionWithUser(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote) ;

/// @brief Method GetSessionConnectionInfo, addr 0x1805b4ea0, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingConnectionState GetSessionConnectionInfo(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>  pConnectionInfo, ::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>  pQuickStatus) ;

/// @brief Method ReceiveMessagesOnChannel, addr 0x1805b4f00, size 0x60, virtual false, abstract: false, final false
static inline int32_t ReceiveMessagesOnChannel(int32_t  nLocalChannel, ::ArrayW<::System::IntPtr>  ppOutMessages, int32_t  nMaxMessages) ;

/// @brief Method SendMessageToUser, addr 0x1805b4f60, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::EResult SendMessageToUser(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, ::System::IntPtr  pubData, uint32_t  cubData, int32_t  nSendFlags, int32_t  nRemoteChannel) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingMessages() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamNetworkingMessages", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamNetworkingMessages(SteamNetworkingMessages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamNetworkingMessages", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamNetworkingMessages(SteamNetworkingMessages const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamNetworkingMessages) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
