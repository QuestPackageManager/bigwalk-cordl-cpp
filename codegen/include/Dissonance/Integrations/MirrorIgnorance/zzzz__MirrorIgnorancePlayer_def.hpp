#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/MirrorIgnorancePlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MirrorIgnorancePlayer)
namespace Dissonance {
class DissonanceComms;
}
namespace Dissonance {
class IDissonancePlayer;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
struct NetworkPlayerType;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Dissonance::Integrations::MirrorIgnorance {
class MirrorIgnorancePlayer;
}
// Write type traits
MARK_REF_T(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*);
DEFINE_IL2CPP_CLASS(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer*, "Dissonance.Integrations.MirrorIgnorance", "MirrorIgnorancePlayer");
// Dependencies Mirror.NetworkBehaviour
namespace Dissonance::Integrations::MirrorIgnorance {
// Is value type: false
// CS Name: Dissonance.Integrations.MirrorIgnorance.MirrorIgnorancePlayer
class CORDL_TYPE MirrorIgnorancePlayer : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsTracking, put=set_IsTracking)) bool  IsTracking;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Network_playerId, put=set_Network_playerId)) ::StringW  Network_playerId;

 __declspec(property(get=get_PlayerId)) ::StringW  PlayerId;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Rotation)) ::UnityEngine::Quaternion  Rotation;

 __declspec(property(get=get_Type)) ::Dissonance::NetworkPlayerType  Type;

/// @brief Field <IsTracking>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsTracking_k__BackingField, put=__cordl_internal_set__IsTracking_k__BackingField)) bool  _IsTracking_k__BackingField;

/// @brief Field _comms, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__comms, put=__cordl_internal_set__comms)) ::UnityW<::Dissonance::DissonanceComms>  _comms;

/// @brief Field _player, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::UnityW<::GlobalNamespace::PlayerCharacter>  _player;

/// @brief Field _playerId, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerId, put=__cordl_internal_set__playerId)) ::StringW  _playerId;

/// @brief Convert operator to "::Dissonance::IDissonancePlayer"
constexpr operator  ::Dissonance::IDissonancePlayer*() noexcept;

/// @brief Method CmdSetPlayerName, addr 0x1803ce870, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetPlayerName(::StringW  playerName) ;

/// @brief Method DeserializeSyncVars, addr 0x1803ce930, size 0x70, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method InvokeUserCode_CmdSetPlayerName__String, addr 0x1803ce9a0, size 0x170, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetPlayerName__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcSetPlayerName__String, addr 0x1803ceb10, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcSetPlayerName__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803cebf0, size 0x80, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1803cec70, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803cec80, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnStartClient, addr 0x1803cecd0, size 0x30, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartLocalPlayer, addr 0x1803ced00, size 0x140, virtual true, abstract: false, final false
inline void OnStartLocalPlayer() ;

/// @brief Method RpcSetPlayerName, addr 0x1803cee40, size 0xc0, virtual false, abstract: false, final false
inline void RpcSetPlayerName(::StringW  playerName) ;

/// @brief Method SerializeSyncVars, addr 0x1803cef00, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method SetPlayerName, addr 0x1803cef50, size 0x100, virtual false, abstract: false, final false
inline void SetPlayerName(::StringW  playerName) ;

/// @brief Method StartTracking, addr 0x1803cf050, size 0xc0, virtual false, abstract: false, final false
inline void StartTracking() ;

/// @brief Method StopTracking, addr 0x1803cf110, size 0xc0, virtual false, abstract: false, final false
inline void StopTracking() ;

/// @brief Method UserCode_CmdSetPlayerName__String, addr 0x1803cf1d0, size 0xd0, virtual false, abstract: false, final false
inline void UserCode_CmdSetPlayerName__String(::StringW  playerName) ;

/// @brief Method UserCode_RpcSetPlayerName__String, addr 0x1803cf2a0, size 0x40, virtual false, abstract: false, final false
inline void UserCode_RpcSetPlayerName__String(::StringW  playerName) ;

constexpr bool const& __cordl_internal_get__IsTracking_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsTracking_k__BackingField() ;

constexpr ::UnityW<::Dissonance::DissonanceComms> const& __cordl_internal_get__comms() const;

constexpr ::UnityW<::Dissonance::DissonanceComms>& __cordl_internal_get__comms() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get__player() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get__player() ;

constexpr ::StringW const& __cordl_internal_get__playerId() const;

constexpr ::StringW& __cordl_internal_get__playerId() ;

constexpr void __cordl_internal_set__IsTracking_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__comms(::UnityW<::Dissonance::DissonanceComms>  value) ;

constexpr void __cordl_internal_set__player(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set__playerId(::StringW  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_IsTracking, addr 0x1803cf3d0, size 0x10, virtual true, abstract: false, final true
inline bool get_IsTracking() ;

/// @brief Method get_Network_playerId, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Network_playerId() ;

/// @brief Method get_PlayerId, addr 0x1802ec4c0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_PlayerId() ;

/// @brief Method get_Position, addr 0x1803cf3e0, size 0x80, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Rotation, addr 0x1803cf460, size 0x40, virtual true, abstract: false, final true
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_Type, addr 0x1803cf4a0, size 0x70, virtual true, abstract: false, final true
inline ::Dissonance::NetworkPlayerType get_Type() ;

/// @brief Convert to "::Dissonance::IDissonancePlayer"
constexpr ::Dissonance::IDissonancePlayer* i___Dissonance__IDissonancePlayer() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_IsTracking, addr 0x1803cf510, size 0x10, virtual false, abstract: false, final false
inline void set_IsTracking(bool  value) ;

/// @brief Method set_Network_playerId, addr 0x1803cf520, size 0x90, virtual false, abstract: false, final false
inline void set_Network_playerId(::ByRefConst<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MirrorIgnorancePlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnorancePlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirrorIgnorancePlayer(MirrorIgnorancePlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirrorIgnorancePlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirrorIgnorancePlayer(MirrorIgnorancePlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5824};

/// @brief Field _comms, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Dissonance::DissonanceComms>  ____comms;

/// @brief Field _player, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ____player;

/// @brief Field <IsTracking>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____IsTracking_k__BackingField;

/// @brief Field _playerId, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____playerId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer, ____comms) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer, ____player) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer, ____IsTracking_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer, ____playerId) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnorancePlayer) == 0x88, "Size mismatch!");

} // namespace end def Dissonance::Integrations::MirrorIgnorance
