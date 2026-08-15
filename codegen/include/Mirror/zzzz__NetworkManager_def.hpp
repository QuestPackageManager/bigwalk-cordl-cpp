#pragma once
// IWYU pragma private; include "Mirror/NetworkManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkManagerMode_def.hpp"
#include "Mirror/zzzz__PlayerSpawnMethod_def.hpp"
#include "Mirror/zzzz__SceneOperation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkManager)
namespace Mirror {
struct AddPlayerMessage;
}
namespace Mirror {
class NetworkAuthenticator;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkConnection;
}
namespace Mirror {
struct NetworkManagerMode;
}
namespace Mirror {
class NetworkManager___c;
}
namespace Mirror {
struct NotReadyMessage;
}
namespace Mirror {
struct ReadyMessage;
}
namespace Mirror {
struct SceneMessage;
}
namespace Mirror {
struct SceneOperation;
}
namespace Mirror {
class SnapshotInterpolationSettings;
}
namespace Mirror {
struct TransportError;
}
namespace Mirror {
class Transport;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
class Uri;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Mirror {
class NetworkManager;
}
namespace Mirror {
class NetworkManager___c;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkManager*);
MARK_REF_T(::Mirror::NetworkManager___c*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkManager*, "Mirror", "NetworkManager");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkManager___c*, "Mirror", "NetworkManager/<>c");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkManager/<>c
class CORDL_TYPE NetworkManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Mirror::NetworkManager___c*  __9;

/// @brief Field <>9__28_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__28_0, put=setStaticF___9__28_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*  __9__28_0;

/// @brief Field <>9__61_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__61_0, put=setStaticF___9__61_0)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>,bool>*  __9__61_0;

/// @brief Field <>9__78_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__78_0, put=setStaticF___9__78_0)) ::System::Func_2<::UnityW<::UnityEngine::Transform>,int32_t>*  __9__78_0;

/// @brief Field <>9__80_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__80_0, put=setStaticF___9__80_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*  __9__80_0;

static inline ::Mirror::NetworkManager___c* New_ctor() ;

/// @brief Method <GetStartPosition>b__80_0, addr 0x18143d030, size 0x10, virtual false, abstract: false, final false
inline bool _GetStartPosition_b__80_0(::UnityEngine::Transform*  t) ;

/// @brief Method <RegisterClientMessages>b__61_0, addr 0x181552510, size 0x10, virtual false, abstract: false, final false
inline bool _RegisterClientMessages_b__61_0(::UnityEngine::GameObject*  t) ;

/// @brief Method <RegisterStartPosition>b__78_0, addr 0x181552520, size 0x20, virtual false, abstract: false, final false
inline int32_t _RegisterStartPosition_b__78_0(::UnityEngine::Transform*  transform) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_numPlayers>b__28_0, addr 0x1815525d0, size 0x30, virtual false, abstract: false, final false
inline bool _get_numPlayers_b__28_0(::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>  kv) ;

static inline ::Mirror::NetworkManager___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>* getStaticF___9__28_0() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>,bool>* getStaticF___9__61_0() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::Transform>,int32_t>* getStaticF___9__78_0() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>* getStaticF___9__80_0() ;

static inline void setStaticF___9(::Mirror::NetworkManager___c*  value) ;

static inline void setStaticF___9__28_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::Mirror::NetworkConnectionToClient*>,bool>*  value) ;

static inline void setStaticF___9__61_0(::System::Func_2<::UnityW<::UnityEngine::GameObject>,bool>*  value) ;

static inline void setStaticF___9__78_0(::System::Func_2<::UnityW<::UnityEngine::Transform>,int32_t>*  value) ;

static inline void setStaticF___9__80_0(::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkManager___c(NetworkManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkManager___c(NetworkManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18325};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkManager___c) == 0x10, "Size mismatch!");

} // namespace end def Mirror
// Dependencies Mirror.NetworkManagerMode, Mirror.PlayerSpawnMethod, Mirror.SceneOperation, UnityEngine.MonoBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkManager
class CORDL_TYPE NetworkManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Mirror::NetworkManager___c;

/// @brief Field <mode>k__BackingField, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode_k__BackingField, put=__cordl_internal_set__mode_k__BackingField)) ::Mirror::NetworkManagerMode  _mode_k__BackingField;

/// @brief Field <networkSceneName>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__networkSceneName_k__BackingField, put=setStaticF__networkSceneName_k__BackingField)) ::StringW  _networkSceneName_k__BackingField;

/// @brief Field <singleton>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__singleton_k__BackingField, put=setStaticF__singleton_k__BackingField)) ::UnityW<::Mirror::NetworkManager>  _singleton_k__BackingField;

/// @brief Field authenticator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_authenticator, put=__cordl_internal_set_authenticator)) ::UnityW<::Mirror::NetworkAuthenticator>  authenticator;

/// @brief Field autoConnectClientBuild, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoConnectClientBuild, put=__cordl_internal_set_autoConnectClientBuild)) bool  autoConnectClientBuild;

/// @brief Field autoCreatePlayer, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoCreatePlayer, put=__cordl_internal_set_autoCreatePlayer)) bool  autoCreatePlayer;

/// @brief Field autoStartServerBuild, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoStartServerBuild, put=__cordl_internal_set_autoStartServerBuild)) bool  autoStartServerBuild;

/// @brief Field clientLoadedScene, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientLoadedScene, put=__cordl_internal_set_clientLoadedScene)) bool  clientLoadedScene;

/// @brief Field clientReadyConnection, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_clientReadyConnection, put=setStaticF_clientReadyConnection)) ::Mirror::NetworkConnection*  clientReadyConnection;

/// @brief Field clientSceneOperation, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientSceneOperation, put=__cordl_internal_set_clientSceneOperation)) ::Mirror::SceneOperation  clientSceneOperation;

/// @brief Field dontDestroyOnLoad, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontDestroyOnLoad, put=__cordl_internal_set_dontDestroyOnLoad)) bool  dontDestroyOnLoad;

/// @brief Field finishStartHostPending, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_finishStartHostPending, put=__cordl_internal_set_finishStartHostPending)) bool  finishStartHostPending;

 __declspec(property(get=get_isNetworkActive)) bool  isNetworkActive;

/// @brief Field loadingSceneAsync, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loadingSceneAsync, put=setStaticF_loadingSceneAsync)) ::UnityEngine::AsyncOperation*  loadingSceneAsync;

/// @brief Field maxConnections, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxConnections, put=__cordl_internal_set_maxConnections)) int32_t  maxConnections;

 __declspec(property(get=get_mode, put=set_mode)) ::Mirror::NetworkManagerMode  mode;

/// @brief Field networkAddress, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkAddress, put=__cordl_internal_set_networkAddress)) ::StringW  networkAddress;

 __declspec(property(get=get_numPlayers)) int32_t  numPlayers;

/// @brief Field offlineScene, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_offlineScene, put=__cordl_internal_set_offlineScene)) ::StringW  offlineScene;

/// @brief Field onlineScene, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onlineScene, put=__cordl_internal_set_onlineScene)) ::StringW  onlineScene;

/// @brief Field playerPrefab, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerPrefab, put=__cordl_internal_set_playerPrefab)) ::UnityW<::UnityEngine::GameObject>  playerPrefab;

/// @brief Field playerSpawnMethod, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerSpawnMethod, put=__cordl_internal_set_playerSpawnMethod)) ::Mirror::PlayerSpawnMethod  playerSpawnMethod;

/// @brief Field runInBackground, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_runInBackground, put=__cordl_internal_set_runInBackground)) bool  runInBackground;

/// @brief Field sendRate, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_sendRate, put=__cordl_internal_set_sendRate)) int32_t  sendRate;

 __declspec(property(get=get_serverTickInterval)) float_t  serverTickInterval;

 __declspec(property(get=get_serverTickRate)) int32_t  serverTickRate;

/// @brief Field snapshotSettings, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapshotSettings, put=__cordl_internal_set_snapshotSettings)) ::Mirror::SnapshotInterpolationSettings*  snapshotSettings;

/// @brief Field spawnPrefabs, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPrefabs, put=__cordl_internal_set_spawnPrefabs)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  spawnPrefabs;

/// @brief Field startPositionIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_startPositionIndex, put=setStaticF_startPositionIndex)) int32_t  startPositionIndex;

/// @brief Field startPositions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_startPositions, put=setStaticF_startPositions)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  startPositions;

/// @brief Field timeInterpolationGui, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_timeInterpolationGui, put=__cordl_internal_set_timeInterpolationGui)) bool  timeInterpolationGui;

/// @brief Field transport, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::UnityW<::Mirror::Transport>  transport;

/// @brief Method ApplyConfiguration, addr 0x1815465a0, size 0xa0, virtual false, abstract: false, final false
inline void ApplyConfiguration() ;

/// @brief Method Awake, addr 0x181546640, size 0xb0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClientChangeScene, addr 0x1815466f0, size 0x270, virtual false, abstract: false, final false
inline void ClientChangeScene(::StringW  newSceneName, ::Mirror::SceneOperation  sceneOperation, bool  customHandling) ;

/// @brief Method ConfigureHeadlessFrameRate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ConfigureHeadlessFrameRate() ;

/// @brief Method FinishLoadScene, addr 0x181546bf0, size 0x250, virtual false, abstract: false, final false
inline void FinishLoadScene() ;

/// @brief Method FinishLoadSceneClientOnly, addr 0x181546960, size 0xc0, virtual false, abstract: false, final false
inline void FinishLoadSceneClientOnly() ;

/// @brief Method FinishLoadSceneHost, addr 0x181546a20, size 0x170, virtual false, abstract: false, final false
inline void FinishLoadSceneHost() ;

/// @brief Method FinishLoadSceneServerOnly, addr 0x181546b90, size 0x60, virtual false, abstract: false, final false
inline void FinishLoadSceneServerOnly() ;

/// @brief Method FinishStartHost, addr 0x181546e40, size 0x1b0, virtual false, abstract: false, final false
inline void FinishStartHost() ;

/// @brief Method GetStartPosition, addr 0x181546ff0, size 0x170, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetStartPosition() ;

/// @brief Method InitializeSingleton, addr 0x181547160, size 0x260, virtual false, abstract: false, final false
inline bool InitializeSingleton() ;

/// @brief Method IsSceneActive, addr 0x1815473c0, size 0x10, virtual false, abstract: false, final false
static inline bool IsSceneActive(::StringW  scene) ;

/// @brief Method IsServerOnlineSceneChangeNeeded, addr 0x1815473d0, size 0x50, virtual false, abstract: false, final false
inline bool IsServerOnlineSceneChangeNeeded() ;

/// @brief Method LateUpdate, addr 0x181547420, size 0x10, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::Mirror::NetworkManager* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x181547430, size 0x90, virtual true, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnClientAuthenticated, addr 0x1815474c0, size 0x120, virtual false, abstract: false, final false
inline void OnClientAuthenticated() ;

/// @brief Method OnClientChangeScene, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnClientChangeScene(::StringW  newSceneName, ::Mirror::SceneOperation  sceneOperation, bool  customHandling) ;

/// @brief Method OnClientConnect, addr 0x181547740, size 0x60, virtual true, abstract: false, final false
inline void OnClientConnect() ;

/// @brief Method OnClientConnectInternal, addr 0x1815475e0, size 0x160, virtual false, abstract: false, final false
inline void OnClientConnectInternal() ;

/// @brief Method OnClientDisconnect, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnClientDisconnect() ;

/// @brief Method OnClientDisconnectInternal, addr 0x1815477a0, size 0x290, virtual false, abstract: false, final false
inline void OnClientDisconnectInternal() ;

/// @brief Method OnClientError, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnClientError(::Mirror::TransportError  error, ::StringW  reason) ;

/// @brief Method OnClientNotReady, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnClientNotReady() ;

/// @brief Method OnClientNotReadyMessageInternal, addr 0x181547a30, size 0x50, virtual false, abstract: false, final false
inline void OnClientNotReadyMessageInternal(::Mirror::NotReadyMessage  msg) ;

/// @brief Method OnClientSceneChanged, addr 0x181547a80, size 0xf0, virtual true, abstract: false, final false
inline void OnClientSceneChanged() ;

/// @brief Method OnClientSceneInternal, addr 0x181547b70, size 0x70, virtual false, abstract: false, final false
inline void OnClientSceneInternal(::Mirror::SceneMessage  msg) ;

/// @brief Method OnDestroy, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGUI, addr 0x181547be0, size 0x10, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnSceneLoaded, addr 0x181547bf0, size 0x80, virtual false, abstract: false, final false
inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method OnServerAddPlayer, addr 0x181547d60, size 0x150, virtual true, abstract: false, final false
inline void OnServerAddPlayer(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerAddPlayerInternal, addr 0x181547c70, size 0xf0, virtual false, abstract: false, final false
inline void OnServerAddPlayerInternal(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::AddPlayerMessage  msg) ;

/// @brief Method OnServerAuthenticated, addr 0x181547eb0, size 0x130, virtual false, abstract: false, final false
inline void OnServerAuthenticated(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerChangeScene, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnServerChangeScene(::StringW  newSceneName) ;

/// @brief Method OnServerConnect, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnServerConnect(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerConnectInternal, addr 0x181547fe0, size 0x170, virtual false, abstract: false, final false
inline void OnServerConnectInternal(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerDisconnect, addr 0x181548150, size 0x10, virtual true, abstract: false, final false
inline void OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerError, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnServerError(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::TransportError  error, ::StringW  reason) ;

/// @brief Method OnServerReady, addr 0x181548160, size 0x50, virtual true, abstract: false, final false
inline void OnServerReady(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerReadyMessageInternal, addr 0x1810f80a0, size 0x8520, virtual false, abstract: false, final false
inline void OnServerReadyMessageInternal(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::ReadyMessage  msg) ;

/// @brief Method OnServerSceneChanged, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnServerSceneChanged(::StringW  sceneName) ;

/// @brief Method OnStartClient, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartHost, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStartHost() ;

/// @brief Method OnStartServer, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnStopClient, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStopClient() ;

/// @brief Method OnStopHost, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStopHost() ;

/// @brief Method OnStopServer, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnStopServer() ;

/// @brief Method OnValidate, addr 0x1815481b0, size 0xe0, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RegisterClientMessages, addr 0x181548290, size 0x3c0, virtual false, abstract: false, final false
inline void RegisterClientMessages() ;

/// @brief Method RegisterServerMessages, addr 0x181548650, size 0x1a0, virtual false, abstract: false, final false
inline void RegisterServerMessages() ;

/// @brief Method RegisterStartPosition, addr 0x1815487f0, size 0x180, virtual false, abstract: false, final false
static inline void RegisterStartPosition(::UnityEngine::Transform*  start) ;

/// @brief Method Reset, addr 0x181548b70, size 0x100, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetStatics, addr 0x181548970, size 0x200, virtual false, abstract: false, final false
static inline void ResetStatics() ;

/// @brief Method ServerChangeScene, addr 0x181548c70, size 0x360, virtual true, abstract: false, final false
inline void ServerChangeScene(::StringW  newSceneName) ;

/// @brief Method SetupClient, addr 0x181548fd0, size 0xc0, virtual false, abstract: false, final false
inline void SetupClient() ;

/// @brief Method SetupServer, addr 0x181549090, size 0x3f0, virtual false, abstract: false, final false
inline void SetupServer() ;

/// @brief Method Start, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StartClient, addr 0x181549480, size 0x1a0, virtual false, abstract: false, final false
inline void StartClient() ;

/// @brief Method StartClient, addr 0x181549620, size 0x190, virtual false, abstract: false, final false
inline void StartClient(::System::Uri*  uri) ;

/// @brief Method StartHost, addr 0x1815497b0, size 0x100, virtual false, abstract: false, final false
inline void StartHost() ;

/// @brief Method StartServer, addr 0x1815498b0, size 0xd0, virtual false, abstract: false, final false
inline void StartServer() ;

/// @brief Method StopClient, addr 0x181549980, size 0x100, virtual false, abstract: false, final false
inline void StopClient() ;

/// @brief Method StopHost, addr 0x181549a80, size 0x40, virtual false, abstract: false, final false
inline void StopHost() ;

/// @brief Method StopServer, addr 0x181549ac0, size 0x260, virtual false, abstract: false, final false
inline void StopServer() ;

/// @brief Method UnRegisterStartPosition, addr 0x181549d20, size 0x60, virtual false, abstract: false, final false
static inline void UnRegisterStartPosition(::UnityEngine::Transform*  start) ;

/// @brief Method Update, addr 0x181549e10, size 0x10, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateScene, addr 0x181549d80, size 0x90, virtual false, abstract: false, final false
inline void UpdateScene() ;

constexpr ::Mirror::NetworkManagerMode const& __cordl_internal_get__mode_k__BackingField() const;

constexpr ::Mirror::NetworkManagerMode& __cordl_internal_get__mode_k__BackingField() ;

constexpr ::UnityW<::Mirror::NetworkAuthenticator> const& __cordl_internal_get_authenticator() const;

constexpr ::UnityW<::Mirror::NetworkAuthenticator>& __cordl_internal_get_authenticator() ;

constexpr bool const& __cordl_internal_get_autoConnectClientBuild() const;

constexpr bool& __cordl_internal_get_autoConnectClientBuild() ;

constexpr bool const& __cordl_internal_get_autoCreatePlayer() const;

constexpr bool& __cordl_internal_get_autoCreatePlayer() ;

constexpr bool const& __cordl_internal_get_autoStartServerBuild() const;

constexpr bool& __cordl_internal_get_autoStartServerBuild() ;

constexpr bool const& __cordl_internal_get_clientLoadedScene() const;

constexpr bool& __cordl_internal_get_clientLoadedScene() ;

constexpr ::Mirror::SceneOperation const& __cordl_internal_get_clientSceneOperation() const;

constexpr ::Mirror::SceneOperation& __cordl_internal_get_clientSceneOperation() ;

constexpr bool const& __cordl_internal_get_dontDestroyOnLoad() const;

constexpr bool& __cordl_internal_get_dontDestroyOnLoad() ;

constexpr bool const& __cordl_internal_get_finishStartHostPending() const;

constexpr bool& __cordl_internal_get_finishStartHostPending() ;

constexpr int32_t const& __cordl_internal_get_maxConnections() const;

constexpr int32_t& __cordl_internal_get_maxConnections() ;

constexpr ::StringW const& __cordl_internal_get_networkAddress() const;

constexpr ::StringW& __cordl_internal_get_networkAddress() ;

constexpr ::StringW const& __cordl_internal_get_offlineScene() const;

constexpr ::StringW& __cordl_internal_get_offlineScene() ;

constexpr ::StringW const& __cordl_internal_get_onlineScene() const;

constexpr ::StringW& __cordl_internal_get_onlineScene() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerPrefab() ;

constexpr ::Mirror::PlayerSpawnMethod const& __cordl_internal_get_playerSpawnMethod() const;

constexpr ::Mirror::PlayerSpawnMethod& __cordl_internal_get_playerSpawnMethod() ;

constexpr bool const& __cordl_internal_get_runInBackground() const;

constexpr bool& __cordl_internal_get_runInBackground() ;

constexpr int32_t const& __cordl_internal_get_sendRate() const;

constexpr int32_t& __cordl_internal_get_sendRate() ;

constexpr ::Mirror::SnapshotInterpolationSettings* const& __cordl_internal_get_snapshotSettings() const;

constexpr ::Mirror::SnapshotInterpolationSettings*& __cordl_internal_get_snapshotSettings() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_spawnPrefabs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_spawnPrefabs() ;

constexpr bool const& __cordl_internal_get_timeInterpolationGui() const;

constexpr bool& __cordl_internal_get_timeInterpolationGui() ;

constexpr ::UnityW<::Mirror::Transport> const& __cordl_internal_get_transport() const;

constexpr ::UnityW<::Mirror::Transport>& __cordl_internal_get_transport() ;

constexpr void __cordl_internal_set__mode_k__BackingField(::Mirror::NetworkManagerMode  value) ;

constexpr void __cordl_internal_set_authenticator(::UnityW<::Mirror::NetworkAuthenticator>  value) ;

constexpr void __cordl_internal_set_autoConnectClientBuild(bool  value) ;

constexpr void __cordl_internal_set_autoCreatePlayer(bool  value) ;

constexpr void __cordl_internal_set_autoStartServerBuild(bool  value) ;

constexpr void __cordl_internal_set_clientLoadedScene(bool  value) ;

constexpr void __cordl_internal_set_clientSceneOperation(::Mirror::SceneOperation  value) ;

constexpr void __cordl_internal_set_dontDestroyOnLoad(bool  value) ;

constexpr void __cordl_internal_set_finishStartHostPending(bool  value) ;

constexpr void __cordl_internal_set_maxConnections(int32_t  value) ;

constexpr void __cordl_internal_set_networkAddress(::StringW  value) ;

constexpr void __cordl_internal_set_offlineScene(::StringW  value) ;

constexpr void __cordl_internal_set_onlineScene(::StringW  value) ;

constexpr void __cordl_internal_set_playerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_playerSpawnMethod(::Mirror::PlayerSpawnMethod  value) ;

constexpr void __cordl_internal_set_runInBackground(bool  value) ;

constexpr void __cordl_internal_set_sendRate(int32_t  value) ;

constexpr void __cordl_internal_set_snapshotSettings(::Mirror::SnapshotInterpolationSettings*  value) ;

constexpr void __cordl_internal_set_spawnPrefabs(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_timeInterpolationGui(bool  value) ;

constexpr void __cordl_internal_set_transport(::UnityW<::Mirror::Transport>  value) ;

/// @brief Method .ctor, addr 0x181549eb0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF__networkSceneName_k__BackingField() ;

static inline ::UnityW<::Mirror::NetworkManager> getStaticF__singleton_k__BackingField() ;

static inline ::Mirror::NetworkConnection* getStaticF_clientReadyConnection() ;

static inline ::UnityEngine::AsyncOperation* getStaticF_loadingSceneAsync() ;

static inline int32_t getStaticF_startPositionIndex() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* getStaticF_startPositions() ;

/// @brief Method get_isNetworkActive, addr 0x181549fa0, size 0x70, virtual false, abstract: false, final false
inline bool get_isNetworkActive() ;

/// @brief Method get_mode, addr 0x180371740, size 0x10, virtual false, abstract: false, final false
inline ::Mirror::NetworkManagerMode get_mode() ;

/// @brief Method get_networkSceneName, addr 0x18154a010, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_networkSceneName() ;

/// @brief Method get_numPlayers, addr 0x18154a050, size 0xe0, virtual false, abstract: false, final false
inline int32_t get_numPlayers() ;

/// @brief Method get_serverTickInterval, addr 0x18154a130, size 0x60, virtual false, abstract: false, final false
inline float_t get_serverTickInterval() ;

/// @brief Method get_serverTickRate, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_serverTickRate() ;

/// @brief Method get_singleton, addr 0x180379040, size 0x8a0, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::NetworkManager> get_singleton() ;

static inline void setStaticF__networkSceneName_k__BackingField(::StringW  value) ;

static inline void setStaticF__singleton_k__BackingField(::UnityW<::Mirror::NetworkManager>  value) ;

static inline void setStaticF_clientReadyConnection(::Mirror::NetworkConnection*  value) ;

static inline void setStaticF_loadingSceneAsync(::UnityEngine::AsyncOperation*  value) ;

static inline void setStaticF_startPositionIndex(int32_t  value) ;

static inline void setStaticF_startPositions(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// @brief Method set_mode, addr 0x18154a190, size 0x10, virtual false, abstract: false, final false
inline void set_mode(::Mirror::NetworkManagerMode  value) ;

/// @brief Method set_networkSceneName, addr 0x181535880, size 0x60, virtual false, abstract: false, final false
static inline void set_networkSceneName(::StringW  value) ;

/// @brief Method set_singleton, addr 0x18154a1a0, size 0x60, virtual false, abstract: false, final false
static inline void set_singleton(::Mirror::NetworkManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkManager(NetworkManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkManager(NetworkManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18326};

/// @brief Field dontDestroyOnLoad, offset: 0x20, size: 0x1, def value: None
 bool  ___dontDestroyOnLoad;

/// @brief Field runInBackground, offset: 0x21, size: 0x1, def value: None
 bool  ___runInBackground;

/// @brief Field autoStartServerBuild, offset: 0x22, size: 0x1, def value: None
 bool  ___autoStartServerBuild;

/// @brief Field autoConnectClientBuild, offset: 0x23, size: 0x1, def value: None
 bool  ___autoConnectClientBuild;

/// @brief Field sendRate, offset: 0x24, size: 0x4, def value: None
 int32_t  ___sendRate;

/// @brief Field offlineScene, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___offlineScene;

/// @brief Field onlineScene, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___onlineScene;

/// @brief Field transport, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Mirror::Transport>  ___transport;

/// @brief Field networkAddress, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___networkAddress;

/// @brief Field maxConnections, offset: 0x48, size: 0x4, def value: None
 int32_t  ___maxConnections;

/// @brief Field authenticator, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkAuthenticator>  ___authenticator;

/// @brief Field playerPrefab, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerPrefab;

/// @brief Field autoCreatePlayer, offset: 0x60, size: 0x1, def value: None
 bool  ___autoCreatePlayer;

/// @brief Field playerSpawnMethod, offset: 0x64, size: 0x4, def value: None
 ::Mirror::PlayerSpawnMethod  ___playerSpawnMethod;

/// @brief Field spawnPrefabs, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___spawnPrefabs;

/// @brief Field snapshotSettings, offset: 0x70, size: 0x8, def value: None
 ::Mirror::SnapshotInterpolationSettings*  ___snapshotSettings;

/// @brief Field timeInterpolationGui, offset: 0x78, size: 0x1, def value: None
 bool  ___timeInterpolationGui;

/// @brief Field clientLoadedScene, offset: 0x79, size: 0x1, def value: None
 bool  ___clientLoadedScene;

/// @brief Field <mode>k__BackingField, offset: 0x7c, size: 0x4, def value: None
 ::Mirror::NetworkManagerMode  ____mode_k__BackingField;

/// @brief Field finishStartHostPending, offset: 0x80, size: 0x1, def value: None
 bool  ___finishStartHostPending;

/// @brief Field clientSceneOperation, offset: 0x81, size: 0x1, def value: None
 ::Mirror::SceneOperation  ___clientSceneOperation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkManager, ___dontDestroyOnLoad) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___runInBackground) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___autoStartServerBuild) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___autoConnectClientBuild) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___sendRate) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___offlineScene) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___onlineScene) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___transport) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___networkAddress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___maxConnections) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___authenticator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___playerPrefab) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___autoCreatePlayer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___playerSpawnMethod) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___spawnPrefabs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___snapshotSettings) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___timeInterpolationGui) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___clientLoadedScene) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ____mode_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___finishStartHostPending) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManager, ___clientSceneOperation) == 0x81, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkManager) == 0x88, "Size mismatch!");

} // namespace end def Mirror
