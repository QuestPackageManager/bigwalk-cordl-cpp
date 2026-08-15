#pragma once
// IWYU pragma private; include "Mirror/GeneratedNetworkCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GeneratedNetworkCode)
namespace GlobalNamespace {
struct GourdFlag_GourdState;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct Platforms;
}
namespace GlobalNamespace {
struct PlayerCount;
}
namespace GlobalNamespace {
struct PlayerHeldInformation_HeldType;
}
namespace GlobalNamespace {
struct PlayerHeldInformation;
}
namespace GlobalNamespace {
struct PlayerLooks_LookPart;
}
namespace GlobalNamespace {
struct SeaShell_ShellReference;
}
namespace GlobalNamespace {
struct ShellReferenceWithActionNumber;
}
namespace HouseHouse::Dream {
struct DreamController_LookIdTrio;
}
namespace Mirror::Authenticators {
struct HouseAuthenticator_AuthResponseMessage;
}
namespace Mirror::Authenticators {
struct HouseAuthenticator_InitialialAuthRequestMessage;
}
namespace Mirror::Authenticators {
struct HouseAuthenticator_PasswordResponseMessage;
}
namespace Mirror::Authenticators {
struct HouseAuthenticator_WelcomeMessage;
}
namespace Mirror {
struct AddPlayerMessage;
}
namespace Mirror {
struct ChangeOwnerMessage;
}
namespace Mirror {
struct CommandMessage;
}
namespace Mirror {
struct EntityStateMessage;
}
namespace Mirror {
struct NetworkPingMessage;
}
namespace Mirror {
struct NetworkPongMessage;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
struct NotReadyMessage;
}
namespace Mirror {
struct ObjectDestroyMessage;
}
namespace Mirror {
struct ObjectHideMessage;
}
namespace Mirror {
struct ObjectSpawnFinishedMessage;
}
namespace Mirror {
struct ObjectSpawnStartedMessage;
}
namespace Mirror {
struct ReadyMessage;
}
namespace Mirror {
struct RpcBufferMessage;
}
namespace Mirror {
struct RpcMessage;
}
namespace Mirror {
struct SceneMessage;
}
namespace Mirror {
struct SceneOperation;
}
namespace Mirror {
struct SpawnMessage;
}
namespace Mirror {
struct TimeSnapshotMessage;
}
// Forward declare root types
namespace Mirror {
class GeneratedNetworkCode;
}
// Write type traits
MARK_REF_T(::Mirror::GeneratedNetworkCode*);
DEFINE_IL2CPP_CLASS(::Mirror::GeneratedNetworkCode*, "Mirror", "GeneratedNetworkCode");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.GeneratedNetworkCode
class CORDL_TYPE GeneratedNetworkCode : public ::System::Object {
public:
// Declarations
/// @brief Method InitReadWriters, addr 0x1803c27f0, size 0x3a30, virtual false, abstract: false, final false
static inline void InitReadWriters() ;

/// @brief Method _Read_GourdFlag/GourdState, addr 0x1803c6220, size 0x10, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GourdFlag_GourdState _Read_GourdFlag_GourdState(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_HouseHouse.Dream.DreamController/LookIdTrio, addr 0x1803c6230, size 0x50, virtual false, abstract: false, final false
static inline ::HouseHouse::Dream::DreamController_LookIdTrio _Read_HouseHouse_Dream_DreamController_LookIdTrio(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.AddPlayerMessage, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline ::Mirror::AddPlayerMessage _Read_Mirror_AddPlayerMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.Authenticators.HouseAuthenticator/AuthResponseMessage, addr 0x1803c6280, size 0x50, virtual false, abstract: false, final false
static inline ::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage _Read_Mirror_Authenticators_HouseAuthenticator_AuthResponseMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.Authenticators.HouseAuthenticator/InitialialAuthRequestMessage, addr 0x1803c62d0, size 0x60, virtual false, abstract: false, final false
static inline ::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage _Read_Mirror_Authenticators_HouseAuthenticator_InitialialAuthRequestMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.Authenticators.HouseAuthenticator/PasswordResponseMessage, addr 0x1803c6330, size 0x30, virtual false, abstract: false, final false
static inline ::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage _Read_Mirror_Authenticators_HouseAuthenticator_PasswordResponseMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.Authenticators.HouseAuthenticator/WelcomeMessage, addr 0x1803c6360, size 0x40, virtual false, abstract: false, final false
static inline ::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage _Read_Mirror_Authenticators_HouseAuthenticator_WelcomeMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.ChangeOwnerMessage, addr 0x1803c63a0, size 0x50, virtual false, abstract: false, final false
static inline ::Mirror::ChangeOwnerMessage _Read_Mirror_ChangeOwnerMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.CommandMessage, addr 0x1803c63f0, size 0x80, virtual false, abstract: false, final false
static inline ::Mirror::CommandMessage _Read_Mirror_CommandMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.EntityStateMessage, addr 0x1803c6470, size 0x60, virtual false, abstract: false, final false
static inline ::Mirror::EntityStateMessage _Read_Mirror_EntityStateMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.NetworkPingMessage, addr 0x1803c64d0, size 0x20, virtual false, abstract: false, final false
static inline ::Mirror::NetworkPingMessage _Read_Mirror_NetworkPingMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.NetworkPongMessage, addr 0x1803c64d0, size 0x20, virtual false, abstract: false, final false
static inline ::Mirror::NetworkPongMessage _Read_Mirror_NetworkPongMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.NotReadyMessage, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline ::Mirror::NotReadyMessage _Read_Mirror_NotReadyMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.ObjectDestroyMessage, addr 0x1803c64f0, size 0x10, virtual false, abstract: false, final false
static inline ::Mirror::ObjectDestroyMessage _Read_Mirror_ObjectDestroyMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.ObjectHideMessage, addr 0x1803c64f0, size 0x10, virtual false, abstract: false, final false
static inline ::Mirror::ObjectHideMessage _Read_Mirror_ObjectHideMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.ObjectSpawnFinishedMessage, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline ::Mirror::ObjectSpawnFinishedMessage _Read_Mirror_ObjectSpawnFinishedMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.ObjectSpawnStartedMessage, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline ::Mirror::ObjectSpawnStartedMessage _Read_Mirror_ObjectSpawnStartedMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.ReadyMessage, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline ::Mirror::ReadyMessage _Read_Mirror_ReadyMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.RpcBufferMessage, addr 0x1803c6500, size 0x40, virtual false, abstract: false, final false
static inline ::Mirror::RpcBufferMessage _Read_Mirror_RpcBufferMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.RpcMessage, addr 0x1803c63f0, size 0x80, virtual false, abstract: false, final false
static inline ::Mirror::RpcMessage _Read_Mirror_RpcMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.SceneMessage, addr 0x1803c6540, size 0x60, virtual false, abstract: false, final false
static inline ::Mirror::SceneMessage _Read_Mirror_SceneMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.SceneOperation, addr 0x1803c65a0, size 0x10, virtual false, abstract: false, final false
static inline ::Mirror::SceneOperation _Read_Mirror_SceneOperation(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.SpawnMessage, addr 0x1803c65b0, size 0xf0, virtual false, abstract: false, final false
static inline ::Mirror::SpawnMessage _Read_Mirror_SpawnMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Mirror.TimeSnapshotMessage, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline ::Mirror::TimeSnapshotMessage _Read_Mirror_TimeSnapshotMessage(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_PeckContext, addr 0x1803c66a0, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PeckContext _Read_PeckContext(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_Platforms, addr 0x1803c65a0, size 0x10, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Platforms _Read_Platforms(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_PlayerCount, addr 0x1803c6220, size 0x10, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PlayerCount _Read_PlayerCount(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_PlayerHeldInformation, addr 0x1803c6720, size 0xd0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PlayerHeldInformation _Read_PlayerHeldInformation(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_PlayerHeldInformation/HeldType, addr 0x1803c6220, size 0x10, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PlayerHeldInformation_HeldType _Read_PlayerHeldInformation_HeldType(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_PlayerLooks/LookPart, addr 0x1803c6220, size 0x10, virtual false, abstract: false, final false
static inline ::GlobalNamespace::PlayerLooks_LookPart _Read_PlayerLooks_LookPart(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_SeaShell/ShellReference, addr 0x1803c67f0, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SeaShell_ShellReference _Read_SeaShell_ShellReference(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Read_ShellReferenceWithActionNumber, addr 0x1803c6840, size 0x70, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ShellReferenceWithActionNumber _Read_ShellReferenceWithActionNumber(::Mirror::NetworkReader*  reader) ;

/// @brief Method _Write_GourdFlag/GourdState, addr 0x1803c68b0, size 0x10, virtual false, abstract: false, final false
static inline void _Write_GourdFlag_GourdState(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::GourdFlag_GourdState  value) ;

/// @brief Method _Write_HouseHouse.Dream.DreamController/LookIdTrio, addr 0x1803c68c0, size 0x50, virtual false, abstract: false, final false
static inline void _Write_HouseHouse_Dream_DreamController_LookIdTrio(::Mirror::NetworkWriter*  writer, ::HouseHouse::Dream::DreamController_LookIdTrio  value) ;

/// @brief Method _Write_Mirror.AddPlayerMessage, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_AddPlayerMessage(::Mirror::NetworkWriter*  writer, ::Mirror::AddPlayerMessage  value) ;

/// @brief Method _Write_Mirror.Authenticators.HouseAuthenticator/AuthResponseMessage, addr 0x1803c6910, size 0x40, virtual false, abstract: false, final false
static inline void _Write_Mirror_Authenticators_HouseAuthenticator_AuthResponseMessage(::Mirror::NetworkWriter*  writer, ::Mirror::Authenticators::HouseAuthenticator_AuthResponseMessage  value) ;

/// @brief Method _Write_Mirror.Authenticators.HouseAuthenticator/InitialialAuthRequestMessage, addr 0x1803c6950, size 0x40, virtual false, abstract: false, final false
static inline void _Write_Mirror_Authenticators_HouseAuthenticator_InitialialAuthRequestMessage(::Mirror::NetworkWriter*  writer, ::Mirror::Authenticators::HouseAuthenticator_InitialialAuthRequestMessage  value) ;

/// @brief Method _Write_Mirror.Authenticators.HouseAuthenticator/PasswordResponseMessage, addr 0x1803c6990, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_Authenticators_HouseAuthenticator_PasswordResponseMessage(::Mirror::NetworkWriter*  writer, ::Mirror::Authenticators::HouseAuthenticator_PasswordResponseMessage  value) ;

/// @brief Method _Write_Mirror.Authenticators.HouseAuthenticator/WelcomeMessage, addr 0x1803c69a0, size 0x30, virtual false, abstract: false, final false
static inline void _Write_Mirror_Authenticators_HouseAuthenticator_WelcomeMessage(::Mirror::NetworkWriter*  writer, ::Mirror::Authenticators::HouseAuthenticator_WelcomeMessage  value) ;

/// @brief Method _Write_Mirror.ChangeOwnerMessage, addr 0x1803c69d0, size 0x40, virtual false, abstract: false, final false
static inline void _Write_Mirror_ChangeOwnerMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ChangeOwnerMessage  value) ;

/// @brief Method _Write_Mirror.CommandMessage, addr 0x1803c6a10, size 0x60, virtual false, abstract: false, final false
static inline void _Write_Mirror_CommandMessage(::Mirror::NetworkWriter*  writer, ::Mirror::CommandMessage  value) ;

/// @brief Method _Write_Mirror.EntityStateMessage, addr 0x1803c6a70, size 0x40, virtual false, abstract: false, final false
static inline void _Write_Mirror_EntityStateMessage(::Mirror::NetworkWriter*  writer, ::Mirror::EntityStateMessage  value) ;

/// @brief Method _Write_Mirror.NetworkPingMessage, addr 0x1803c6ab0, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_NetworkPingMessage(::Mirror::NetworkWriter*  writer, ::Mirror::NetworkPingMessage  value) ;

/// @brief Method _Write_Mirror.NetworkPongMessage, addr 0x1803c6ab0, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_NetworkPongMessage(::Mirror::NetworkWriter*  writer, ::Mirror::NetworkPongMessage  value) ;

/// @brief Method _Write_Mirror.NotReadyMessage, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_NotReadyMessage(::Mirror::NetworkWriter*  writer, ::Mirror::NotReadyMessage  value) ;

/// @brief Method _Write_Mirror.ObjectDestroyMessage, addr 0x1803c68b0, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_ObjectDestroyMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ObjectDestroyMessage  value) ;

/// @brief Method _Write_Mirror.ObjectHideMessage, addr 0x1803c68b0, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_ObjectHideMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ObjectHideMessage  value) ;

/// @brief Method _Write_Mirror.ObjectSpawnFinishedMessage, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_ObjectSpawnFinishedMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ObjectSpawnFinishedMessage  value) ;

/// @brief Method _Write_Mirror.ObjectSpawnStartedMessage, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_ObjectSpawnStartedMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ObjectSpawnStartedMessage  value) ;

/// @brief Method _Write_Mirror.ReadyMessage, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_ReadyMessage(::Mirror::NetworkWriter*  writer, ::Mirror::ReadyMessage  value) ;

/// @brief Method _Write_Mirror.RpcBufferMessage, addr 0x1803c6ac0, size 0x20, virtual false, abstract: false, final false
static inline void _Write_Mirror_RpcBufferMessage(::Mirror::NetworkWriter*  writer, ::Mirror::RpcBufferMessage  value) ;

/// @brief Method _Write_Mirror.RpcMessage, addr 0x1803c6a10, size 0x60, virtual false, abstract: false, final false
static inline void _Write_Mirror_RpcMessage(::Mirror::NetworkWriter*  writer, ::Mirror::RpcMessage  value) ;

/// @brief Method _Write_Mirror.SceneMessage, addr 0x1803c6ae0, size 0x50, virtual false, abstract: false, final false
static inline void _Write_Mirror_SceneMessage(::Mirror::NetworkWriter*  writer, ::Mirror::SceneMessage  value) ;

/// @brief Method _Write_Mirror.SceneOperation, addr 0x1803c6b30, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_SceneOperation(::Mirror::NetworkWriter*  writer, ::Mirror::SceneOperation  value) ;

/// @brief Method _Write_Mirror.SpawnMessage, addr 0x1803c6b40, size 0xe0, virtual false, abstract: false, final false
static inline void _Write_Mirror_SpawnMessage(::Mirror::NetworkWriter*  writer, ::Mirror::SpawnMessage  value) ;

/// @brief Method _Write_Mirror.TimeSnapshotMessage, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Mirror_TimeSnapshotMessage(::Mirror::NetworkWriter*  writer, ::Mirror::TimeSnapshotMessage  value) ;

/// @brief Method _Write_PeckContext, addr 0x1803c6c20, size 0x60, virtual false, abstract: false, final false
static inline void _Write_PeckContext(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::PeckContext  value) ;

/// @brief Method _Write_Platforms, addr 0x1803c6b30, size 0x10, virtual false, abstract: false, final false
static inline void _Write_Platforms(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::Platforms  value) ;

/// @brief Method _Write_PlayerCount, addr 0x1803c68b0, size 0x10, virtual false, abstract: false, final false
static inline void _Write_PlayerCount(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::PlayerCount  value) ;

/// @brief Method _Write_PlayerHeldInformation, addr 0x1803c6c80, size 0xb0, virtual false, abstract: false, final false
static inline void _Write_PlayerHeldInformation(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::PlayerHeldInformation  value) ;

/// @brief Method _Write_PlayerHeldInformation/HeldType, addr 0x1803c68b0, size 0x10, virtual false, abstract: false, final false
static inline void _Write_PlayerHeldInformation_HeldType(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::PlayerHeldInformation_HeldType  value) ;

/// @brief Method _Write_PlayerLooks/LookPart, addr 0x1803c68b0, size 0x10, virtual false, abstract: false, final false
static inline void _Write_PlayerLooks_LookPart(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::PlayerLooks_LookPart  value) ;

/// @brief Method _Write_SeaShell/ShellReference, addr 0x1803c6d30, size 0x50, virtual false, abstract: false, final false
static inline void _Write_SeaShell_ShellReference(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::SeaShell_ShellReference  value) ;

/// @brief Method _Write_ShellReferenceWithActionNumber, addr 0x1803c6d80, size 0x60, virtual false, abstract: false, final false
static inline void _Write_ShellReferenceWithActionNumber(::Mirror::NetworkWriter*  writer, ::GlobalNamespace::ShellReferenceWithActionNumber  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeneratedNetworkCode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeneratedNetworkCode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeneratedNetworkCode(GeneratedNetworkCode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeneratedNetworkCode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeneratedNetworkCode(GeneratedNetworkCode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5833};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::GeneratedNetworkCode) == 0x10, "Size mismatch!");

} // namespace end def Mirror
