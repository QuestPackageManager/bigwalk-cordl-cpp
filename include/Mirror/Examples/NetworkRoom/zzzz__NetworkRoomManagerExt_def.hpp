#pragma once
// IWYU pragma private; include "Mirror/Examples/NetworkRoom/NetworkRoomManagerExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkRoomManager_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkRoomManagerExt)
namespace Mirror {
class NetworkConnectionToClient;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror::Examples::NetworkRoom {
class NetworkRoomManagerExt;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*, "Mirror.Examples.NetworkRoom", "NetworkRoomManagerExt");
// Dependencies Mirror.NetworkRoomManager
namespace Mirror::Examples::NetworkRoom {
// Is value type: false
// CS Name: Mirror.Examples.NetworkRoom.NetworkRoomManagerExt
class CORDL_TYPE NetworkRoomManagerExt : public ::Mirror::NetworkRoomManager {
public:
// Declarations
/// @brief Field <singleton>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__singleton_k__BackingField, put=setStaticF__singleton_k__BackingField)) ::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt>  _singleton_k__BackingField;

/// @brief Field rewardPrefab, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rewardPrefab, put=__cordl_internal_set_rewardPrefab)) ::UnityW<::UnityEngine::GameObject>  rewardPrefab;

/// @brief Field showStartButton, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_showStartButton, put=__cordl_internal_set_showStartButton)) bool  showStartButton;

/// @brief Method Awake, addr 0x18155e340, size 0x40, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt* New_ctor() ;

/// @brief Method OnGUI, addr 0x18155e380, size 0x90, virtual true, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnRoomServerPlayersReady, addr 0x18155e410, size 0x10, virtual true, abstract: false, final false
inline void OnRoomServerPlayersReady() ;

/// @brief Method OnRoomServerSceneChanged, addr 0x18155e420, size 0x70, virtual true, abstract: false, final false
inline void OnRoomServerSceneChanged(::StringW  sceneName) ;

/// @brief Method OnRoomServerSceneLoadedForPlayer, addr 0x18155e490, size 0xc0, virtual true, abstract: false, final false
inline bool OnRoomServerSceneLoadedForPlayer(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  roomPlayer, ::UnityEngine::GameObject*  gamePlayer) ;

/// @brief Method OnRoomStopClient, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomStopClient() ;

/// @brief Method OnRoomStopServer, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnRoomStopServer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rewardPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rewardPrefab() ;

constexpr bool const& __cordl_internal_get_showStartButton() const;

constexpr bool& __cordl_internal_get_showStartButton() ;

constexpr void __cordl_internal_set_rewardPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_showStartButton(bool  value) ;

/// @brief Method .ctor, addr 0x18155e550, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt> getStaticF__singleton_k__BackingField() ;

/// @brief Method get_singleton, addr 0x18155e560, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt> get_singleton() ;

static inline void setStaticF__singleton_k__BackingField(::UnityW<::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt>  value) ;

/// @brief Method set_singleton, addr 0x18155e580, size 0x30, virtual false, abstract: false, final false
static inline void set_singleton(::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRoomManagerExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRoomManagerExt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRoomManagerExt(NetworkRoomManagerExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRoomManagerExt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRoomManagerExt(NetworkRoomManagerExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19280};

/// @brief Field rewardPrefab, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rewardPrefab;

/// @brief Field showStartButton, offset: 0xc8, size: 0x1, def value: None
 bool  ___showStartButton;

/// @brief Size padding 0xd8 - 0xd0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt, ___rewardPrefab) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt, ___showStartButton) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::NetworkRoom::NetworkRoomManagerExt) == 0xd8, "Size mismatch!");

} // namespace end def Mirror::Examples::NetworkRoom
