#pragma once
// IWYU pragma private; include "EpicTransport/EOSSDKComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__LoginCredentialType_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogLevel_def.hpp"
#include "Epic/OnlineServices/zzzz__ExternalCredentialType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EOSSDKComponent)
namespace Epic::OnlineServices::Achievements {
class AchievementsInterface;
}
namespace Epic::OnlineServices::Auth {
class AuthInterface;
}
namespace Epic::OnlineServices::Auth {
struct LoginCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct AuthExpirationCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
class ConnectInterface;
}
namespace Epic::OnlineServices::Connect {
struct CreateDeviceIdCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct CreateUserCallbackInfo;
}
namespace Epic::OnlineServices::Connect {
struct LoginCallbackInfo;
}
namespace Epic::OnlineServices::Ecom {
class EcomInterface;
}
namespace Epic::OnlineServices::Friends {
class FriendsInterface;
}
namespace Epic::OnlineServices::Leaderboards {
class LeaderboardsInterface;
}
namespace Epic::OnlineServices::Lobby {
class LobbyInterface;
}
namespace Epic::OnlineServices::Logging {
class LogMessageFunc;
}
namespace Epic::OnlineServices::Logging {
struct LogMessage;
}
namespace Epic::OnlineServices::Metrics {
class MetricsInterface;
}
namespace Epic::OnlineServices::Mods {
class ModsInterface;
}
namespace Epic::OnlineServices::P2P {
class P2PInterface;
}
namespace Epic::OnlineServices::Platform {
class PlatformInterface;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class PlayerDataStorageInterface;
}
namespace Epic::OnlineServices::Presence {
class PresenceInterface;
}
namespace Epic::OnlineServices::Sessions {
class SessionsInterface;
}
namespace Epic::OnlineServices::TitleStorage {
class TitleStorageInterface;
}
namespace Epic::OnlineServices::UI {
class UIInterface;
}
namespace Epic::OnlineServices::UserInfo {
class UserInfoInterface;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace EpicTransport {
class EOSSDKComponent___c;
}
namespace GlobalNamespace {
class EosApiKey;
}
// Forward declare root types
namespace EpicTransport {
class EOSSDKComponent;
}
namespace EpicTransport {
class EOSSDKComponent___c;
}
// Write type traits
MARK_REF_T(::EpicTransport::EOSSDKComponent*);
MARK_REF_T(::EpicTransport::EOSSDKComponent___c*);
DEFINE_IL2CPP_CLASS(::EpicTransport::EOSSDKComponent*, "EpicTransport", "EOSSDKComponent");
DEFINE_IL2CPP_CLASS(::EpicTransport::EOSSDKComponent___c*, "EpicTransport", "EOSSDKComponent/<>c");
// Dependencies System.Object
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.EOSSDKComponent/<>c
class CORDL_TYPE EOSSDKComponent___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::EpicTransport::EOSSDKComponent___c*  __9;

/// @brief Field <>9__68_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__68_0, put=setStaticF___9__68_0)) ::Epic::OnlineServices::Logging::LogMessageFunc*  __9__68_0;

static inline ::EpicTransport::EOSSDKComponent___c* New_ctor() ;

/// @brief Method <InitializeImplementation>b__68_0, addr 0x18158e8f0, size 0x1a0, virtual false, abstract: false, final false
inline void _InitializeImplementation_b__68_0(::by_ref<::Epic::OnlineServices::Logging::LogMessage>  message) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::EpicTransport::EOSSDKComponent___c* getStaticF___9() ;

static inline ::Epic::OnlineServices::Logging::LogMessageFunc* getStaticF___9__68_0() ;

static inline void setStaticF___9(::EpicTransport::EOSSDKComponent___c*  value) ;

static inline void setStaticF___9__68_0(::Epic::OnlineServices::Logging::LogMessageFunc*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSDKComponent___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSDKComponent___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSDKComponent___c(EOSSDKComponent___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSDKComponent___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSDKComponent___c(EOSSDKComponent___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19050};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::EpicTransport::EOSSDKComponent___c) == 0x10, "Size mismatch!");

} // namespace end def EpicTransport
// Dependencies Epic.OnlineServices.Auth.LoginCredentialType, Epic.OnlineServices.ExternalCredentialType, Epic.OnlineServices.Logging.LogLevel, UnityEngine.MonoBehaviour
namespace EpicTransport {
// Is value type: false
// CS Name: EpicTransport.EOSSDKComponent
class CORDL_TYPE EOSSDKComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::EpicTransport::EOSSDKComponent___c;

/// @brief Field EOS, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_EOS, put=__cordl_internal_set_EOS)) ::Epic::OnlineServices::Platform::PlatformInterface*  EOS;

/// @brief Field apiKeys, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_apiKeys, put=__cordl_internal_set_apiKeys)) ::UnityW<::GlobalNamespace::EosApiKey>  apiKeys;

/// @brief Field authExpirationHandle, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_authExpirationHandle, put=__cordl_internal_set_authExpirationHandle)) uint64_t  authExpirationHandle;

/// @brief Field authInterfaceCredentialToken, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_authInterfaceCredentialToken, put=__cordl_internal_set_authInterfaceCredentialToken)) ::StringW  authInterfaceCredentialToken;

/// @brief Field authInterfaceCredentialType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_authInterfaceCredentialType, put=__cordl_internal_set_authInterfaceCredentialType)) ::Epic::OnlineServices::Auth::LoginCredentialType  authInterfaceCredentialType;

/// @brief Field authInterfaceLogin, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_authInterfaceLogin, put=__cordl_internal_set_authInterfaceLogin)) bool  authInterfaceLogin;

/// @brief Field authInterfaceLoginCredentialId, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_authInterfaceLoginCredentialId, put=__cordl_internal_set_authInterfaceLoginCredentialId)) ::StringW  authInterfaceLoginCredentialId;

/// @brief Field checkForEpicLauncherAndRestart, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get_checkForEpicLauncherAndRestart, put=__cordl_internal_set_checkForEpicLauncherAndRestart)) bool  checkForEpicLauncherAndRestart;

/// @brief Field collectPlayerMetrics, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_collectPlayerMetrics, put=__cordl_internal_set_collectPlayerMetrics)) bool  collectPlayerMetrics;

/// @brief Field connectInterfaceCredentialToken, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectInterfaceCredentialToken, put=__cordl_internal_set_connectInterfaceCredentialToken)) ::StringW  connectInterfaceCredentialToken;

/// @brief Field connectInterfaceCredentialType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_connectInterfaceCredentialType, put=__cordl_internal_set_connectInterfaceCredentialType)) ::Epic::OnlineServices::ExternalCredentialType  connectInterfaceCredentialType;

/// @brief Field delayedInitialization, offset 0x5e, size 0x1 
 __declspec(property(get=__cordl_internal_get_delayedInitialization, put=__cordl_internal_set_delayedInitialization)) bool  delayedInitialization;

/// @brief Field devAuthToolCredentialName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_devAuthToolCredentialName, put=__cordl_internal_set_devAuthToolCredentialName)) ::StringW  devAuthToolCredentialName;

/// @brief Field devAuthToolPort, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_devAuthToolPort, put=__cordl_internal_set_devAuthToolPort)) uint32_t  devAuthToolPort;

/// @brief Field deviceModel, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_deviceModel, put=__cordl_internal_set_deviceModel)) ::StringW  deviceModel;

/// @brief Field displayName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

/// @brief Field epicLoggerLevel, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_epicLoggerLevel, put=__cordl_internal_set_epicLoggerLevel)) ::Epic::OnlineServices::Logging::LogLevel  epicLoggerLevel;

/// @brief Field initialized, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::EpicTransport::EOSSDKComponent>  instance;

/// @brief Field isConnecting, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_isConnecting, put=__cordl_internal_set_isConnecting)) bool  isConnecting;

/// @brief Field localUserAccountId, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_localUserAccountId, put=__cordl_internal_set_localUserAccountId)) ::Epic::OnlineServices::EpicAccountId*  localUserAccountId;

/// @brief Field localUserAccountIdString, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_localUserAccountIdString, put=__cordl_internal_set_localUserAccountIdString)) ::StringW  localUserAccountIdString;

/// @brief Field localUserProductId, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_localUserProductId, put=__cordl_internal_set_localUserProductId)) ::Epic::OnlineServices::ProductUserId*  localUserProductId;

/// @brief Field localUserProductIdString, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_localUserProductIdString, put=__cordl_internal_set_localUserProductIdString)) ::StringW  localUserProductIdString;

/// @brief Field platformTickIntervalInSeconds, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_platformTickIntervalInSeconds, put=__cordl_internal_set_platformTickIntervalInSeconds)) float_t  platformTickIntervalInSeconds;

/// @brief Field platformTickTimer, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_platformTickTimer, put=__cordl_internal_set_platformTickTimer)) float_t  platformTickTimer;

/// @brief Field tickBudgetInMilliseconds, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_tickBudgetInMilliseconds, put=__cordl_internal_set_tickBudgetInMilliseconds)) uint32_t  tickBudgetInMilliseconds;

/// @brief Method Awake, addr 0x181583500, size 0x230, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ConnectInterfaceLogin, addr 0x181583730, size 0x250, virtual false, abstract: false, final false
inline void ConnectInterfaceLogin() ;

/// @brief Method GetAchievementsInterface, addr 0x181583980, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Achievements::AchievementsInterface* GetAchievementsInterface() ;

/// @brief Method GetAuthInterface, addr 0x1815839b0, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Auth::AuthInterface* GetAuthInterface() ;

/// @brief Method GetConnectInterface, addr 0x1815839e0, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Connect::ConnectInterface* GetConnectInterface() ;

/// @brief Method GetEcomInterface, addr 0x181583a10, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Ecom::EcomInterface* GetEcomInterface() ;

/// @brief Method GetFriendsInterface, addr 0x181583a40, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Friends::FriendsInterface* GetFriendsInterface() ;

/// @brief Method GetLeaderboardsInterface, addr 0x181583a70, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* GetLeaderboardsInterface() ;

/// @brief Method GetLobbyInterface, addr 0x181583aa0, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::LobbyInterface* GetLobbyInterface() ;

/// @brief Method GetMetricsInterface, addr 0x181583ad0, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Metrics::MetricsInterface* GetMetricsInterface() ;

/// @brief Method GetModsInterface, addr 0x181583b00, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Mods::ModsInterface* GetModsInterface() ;

/// @brief Method GetP2PInterface, addr 0x181583b30, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::P2P::P2PInterface* GetP2PInterface() ;

/// @brief Method GetPlayerDataStorageInterface, addr 0x181583b60, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* GetPlayerDataStorageInterface() ;

/// @brief Method GetPresenceInterface, addr 0x181583b90, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Presence::PresenceInterface* GetPresenceInterface() ;

/// @brief Method GetSessionsInterface, addr 0x181583bc0, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::SessionsInterface* GetSessionsInterface() ;

/// @brief Method GetTitleStorageInterface, addr 0x181583bf0, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::TitleStorage::TitleStorageInterface* GetTitleStorageInterface() ;

/// @brief Method GetUIInterface, addr 0x181583c20, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UI::UIInterface* GetUIInterface() ;

/// @brief Method GetUserInfoInterface, addr 0x181583c50, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UserInfo::UserInfoInterface* GetUserInfoInterface() ;

/// @brief Method Initialize, addr 0x181584410, size 0x60, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method InitializeImplementation, addr 0x181583c80, size 0x790, virtual false, abstract: false, final false
inline void InitializeImplementation() ;

/// @brief Method LateUpdate, addr 0x181584470, size 0x70, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::EpicTransport::EOSSDKComponent* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x1815844e0, size 0x70, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnAuthExpiration, addr 0x181584550, size 0x60, virtual false, abstract: false, final false
inline void OnAuthExpiration(::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfo>  authExpirationCallbackInfo) ;

/// @brief Method OnAuthInterfaceLogin, addr 0x1815845b0, size 0x130, virtual false, abstract: false, final false
inline void OnAuthInterfaceLogin(::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfo>  loginCallbackInfo) ;

/// @brief Method OnConnectInterfaceLogin, addr 0x1815846e0, size 0x240, virtual false, abstract: false, final false
inline void OnConnectInterfaceLogin(::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfo>  loginCallbackInfo) ;

/// @brief Method OnCreateDeviceId, addr 0x181584920, size 0x80, virtual false, abstract: false, final false
inline void OnCreateDeviceId(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfo>  createDeviceIdCallbackInfo) ;

/// @brief Method ResetConnection, addr 0x1815849a0, size 0x40, virtual false, abstract: false, final false
static inline void ResetConnection() ;

/// @brief Method SetAuthInterfaceCredentialToken, addr 0x1815849e0, size 0x40, virtual false, abstract: false, final false
static inline void SetAuthInterfaceCredentialToken(::StringW  credentialToken) ;

/// @brief Method SetAuthInterfaceLoginCredentialId, addr 0x181584a20, size 0x30, virtual false, abstract: false, final false
static inline void SetAuthInterfaceLoginCredentialId(::StringW  credentialId) ;

/// @brief Method SetConnectInterfaceCredentialToken, addr 0x181584a50, size 0x40, virtual false, abstract: false, final false
static inline void SetConnectInterfaceCredentialToken(::StringW  credentialToken) ;

/// @brief Method Tick, addr 0x181584a90, size 0x70, virtual false, abstract: false, final false
static inline void Tick() ;

/// @brief Method <OnConnectInterfaceLogin>b__73_0, addr 0x181584b00, size 0x60, virtual false, abstract: false, final false
inline void _OnConnectInterfaceLogin_b__73_0(::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfo>  cb) ;

constexpr ::Epic::OnlineServices::Platform::PlatformInterface* const& __cordl_internal_get_EOS() const;

constexpr ::Epic::OnlineServices::Platform::PlatformInterface*& __cordl_internal_get_EOS() ;

constexpr ::UnityW<::GlobalNamespace::EosApiKey> const& __cordl_internal_get_apiKeys() const;

constexpr ::UnityW<::GlobalNamespace::EosApiKey>& __cordl_internal_get_apiKeys() ;

constexpr uint64_t const& __cordl_internal_get_authExpirationHandle() const;

constexpr uint64_t& __cordl_internal_get_authExpirationHandle() ;

constexpr ::StringW const& __cordl_internal_get_authInterfaceCredentialToken() const;

constexpr ::StringW& __cordl_internal_get_authInterfaceCredentialToken() ;

constexpr ::Epic::OnlineServices::Auth::LoginCredentialType const& __cordl_internal_get_authInterfaceCredentialType() const;

constexpr ::Epic::OnlineServices::Auth::LoginCredentialType& __cordl_internal_get_authInterfaceCredentialType() ;

constexpr bool const& __cordl_internal_get_authInterfaceLogin() const;

constexpr bool& __cordl_internal_get_authInterfaceLogin() ;

constexpr ::StringW const& __cordl_internal_get_authInterfaceLoginCredentialId() const;

constexpr ::StringW& __cordl_internal_get_authInterfaceLoginCredentialId() ;

constexpr bool const& __cordl_internal_get_checkForEpicLauncherAndRestart() const;

constexpr bool& __cordl_internal_get_checkForEpicLauncherAndRestart() ;

constexpr bool const& __cordl_internal_get_collectPlayerMetrics() const;

constexpr bool& __cordl_internal_get_collectPlayerMetrics() ;

constexpr ::StringW const& __cordl_internal_get_connectInterfaceCredentialToken() const;

constexpr ::StringW& __cordl_internal_get_connectInterfaceCredentialToken() ;

constexpr ::Epic::OnlineServices::ExternalCredentialType const& __cordl_internal_get_connectInterfaceCredentialType() const;

constexpr ::Epic::OnlineServices::ExternalCredentialType& __cordl_internal_get_connectInterfaceCredentialType() ;

constexpr bool const& __cordl_internal_get_delayedInitialization() const;

constexpr bool& __cordl_internal_get_delayedInitialization() ;

constexpr ::StringW const& __cordl_internal_get_devAuthToolCredentialName() const;

constexpr ::StringW& __cordl_internal_get_devAuthToolCredentialName() ;

constexpr uint32_t const& __cordl_internal_get_devAuthToolPort() const;

constexpr uint32_t& __cordl_internal_get_devAuthToolPort() ;

constexpr ::StringW const& __cordl_internal_get_deviceModel() const;

constexpr ::StringW& __cordl_internal_get_deviceModel() ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr ::Epic::OnlineServices::Logging::LogLevel const& __cordl_internal_get_epicLoggerLevel() const;

constexpr ::Epic::OnlineServices::Logging::LogLevel& __cordl_internal_get_epicLoggerLevel() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr bool const& __cordl_internal_get_isConnecting() const;

constexpr bool& __cordl_internal_get_isConnecting() ;

constexpr ::Epic::OnlineServices::EpicAccountId* const& __cordl_internal_get_localUserAccountId() const;

constexpr ::Epic::OnlineServices::EpicAccountId*& __cordl_internal_get_localUserAccountId() ;

constexpr ::StringW const& __cordl_internal_get_localUserAccountIdString() const;

constexpr ::StringW& __cordl_internal_get_localUserAccountIdString() ;

constexpr ::Epic::OnlineServices::ProductUserId* const& __cordl_internal_get_localUserProductId() const;

constexpr ::Epic::OnlineServices::ProductUserId*& __cordl_internal_get_localUserProductId() ;

constexpr ::StringW const& __cordl_internal_get_localUserProductIdString() const;

constexpr ::StringW& __cordl_internal_get_localUserProductIdString() ;

constexpr float_t const& __cordl_internal_get_platformTickIntervalInSeconds() const;

constexpr float_t& __cordl_internal_get_platformTickIntervalInSeconds() ;

constexpr float_t const& __cordl_internal_get_platformTickTimer() const;

constexpr float_t& __cordl_internal_get_platformTickTimer() ;

constexpr uint32_t const& __cordl_internal_get_tickBudgetInMilliseconds() const;

constexpr uint32_t& __cordl_internal_get_tickBudgetInMilliseconds() ;

constexpr void __cordl_internal_set_EOS(::Epic::OnlineServices::Platform::PlatformInterface*  value) ;

constexpr void __cordl_internal_set_apiKeys(::UnityW<::GlobalNamespace::EosApiKey>  value) ;

constexpr void __cordl_internal_set_authExpirationHandle(uint64_t  value) ;

constexpr void __cordl_internal_set_authInterfaceCredentialToken(::StringW  value) ;

constexpr void __cordl_internal_set_authInterfaceCredentialType(::Epic::OnlineServices::Auth::LoginCredentialType  value) ;

constexpr void __cordl_internal_set_authInterfaceLogin(bool  value) ;

constexpr void __cordl_internal_set_authInterfaceLoginCredentialId(::StringW  value) ;

constexpr void __cordl_internal_set_checkForEpicLauncherAndRestart(bool  value) ;

constexpr void __cordl_internal_set_collectPlayerMetrics(bool  value) ;

constexpr void __cordl_internal_set_connectInterfaceCredentialToken(::StringW  value) ;

constexpr void __cordl_internal_set_connectInterfaceCredentialType(::Epic::OnlineServices::ExternalCredentialType  value) ;

constexpr void __cordl_internal_set_delayedInitialization(bool  value) ;

constexpr void __cordl_internal_set_devAuthToolCredentialName(::StringW  value) ;

constexpr void __cordl_internal_set_devAuthToolPort(uint32_t  value) ;

constexpr void __cordl_internal_set_deviceModel(::StringW  value) ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

constexpr void __cordl_internal_set_epicLoggerLevel(::Epic::OnlineServices::Logging::LogLevel  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_isConnecting(bool  value) ;

constexpr void __cordl_internal_set_localUserAccountId(::Epic::OnlineServices::EpicAccountId*  value) ;

constexpr void __cordl_internal_set_localUserAccountIdString(::StringW  value) ;

constexpr void __cordl_internal_set_localUserProductId(::Epic::OnlineServices::ProductUserId*  value) ;

constexpr void __cordl_internal_set_localUserProductIdString(::StringW  value) ;

constexpr void __cordl_internal_set_platformTickIntervalInSeconds(float_t  value) ;

constexpr void __cordl_internal_set_platformTickTimer(float_t  value) ;

constexpr void __cordl_internal_set_tickBudgetInMilliseconds(uint32_t  value) ;

/// @brief Method .ctor, addr 0x181584b60, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::EpicTransport::EOSSDKComponent> getStaticF_instance() ;

/// @brief Method get_CollectPlayerMetrics, addr 0x181584bf0, size 0x20, virtual false, abstract: false, final false
static inline bool get_CollectPlayerMetrics() ;

/// @brief Method get_DisplayName, addr 0x181584c10, size 0x20, virtual false, abstract: false, final false
static inline ::StringW get_DisplayName() ;

/// @brief Method get_Initialized, addr 0x181584c30, size 0x30, virtual false, abstract: false, final false
static inline bool get_Initialized() ;

/// @brief Method get_Instance, addr 0x181584c60, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::EpicTransport::EOSSDKComponent> get_Instance() ;

/// @brief Method get_IsConnecting, addr 0x181584ce0, size 0x30, virtual false, abstract: false, final false
static inline bool get_IsConnecting() ;

/// @brief Method get_LocalUserAccountId, addr 0x181584d40, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserAccountId() ;

/// @brief Method get_LocalUserAccountIdString, addr 0x181584d10, size 0x30, virtual false, abstract: false, final false
static inline ::StringW get_LocalUserAccountIdString() ;

/// @brief Method get_LocalUserProductId, addr 0x181584da0, size 0x30, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::ProductUserId* get_LocalUserProductId() ;

/// @brief Method get_LocalUserProductIdString, addr 0x181584d70, size 0x30, virtual false, abstract: false, final false
static inline ::StringW get_LocalUserProductIdString() ;

static inline void setStaticF_instance(::UnityW<::EpicTransport::EOSSDKComponent>  value) ;

/// @brief Method set_DisplayName, addr 0x181584dd0, size 0x30, virtual false, abstract: false, final false
static inline void set_DisplayName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSSDKComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSSDKComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSSDKComponent(EOSSDKComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSSDKComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSSDKComponent(EOSSDKComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19051};

/// @brief Field apiKeys, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EosApiKey>  ___apiKeys;

/// @brief Field authInterfaceLogin, offset: 0x28, size: 0x1, def value: None
 bool  ___authInterfaceLogin;

/// @brief Field authInterfaceCredentialType, offset: 0x2c, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::LoginCredentialType  ___authInterfaceCredentialType;

/// @brief Field devAuthToolPort, offset: 0x30, size: 0x4, def value: None
 uint32_t  ___devAuthToolPort;

/// @brief Field devAuthToolCredentialName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___devAuthToolCredentialName;

/// @brief Field connectInterfaceCredentialType, offset: 0x40, size: 0x4, def value: None
 ::Epic::OnlineServices::ExternalCredentialType  ___connectInterfaceCredentialType;

/// @brief Field deviceModel, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___deviceModel;

/// @brief Field displayName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___displayName;

/// @brief Field epicLoggerLevel, offset: 0x58, size: 0x4, def value: None
 ::Epic::OnlineServices::Logging::LogLevel  ___epicLoggerLevel;

/// @brief Field collectPlayerMetrics, offset: 0x5c, size: 0x1, def value: None
 bool  ___collectPlayerMetrics;

/// @brief Field checkForEpicLauncherAndRestart, offset: 0x5d, size: 0x1, def value: None
 bool  ___checkForEpicLauncherAndRestart;

/// @brief Field delayedInitialization, offset: 0x5e, size: 0x1, def value: None
 bool  ___delayedInitialization;

/// @brief Field platformTickIntervalInSeconds, offset: 0x60, size: 0x4, def value: None
 float_t  ___platformTickIntervalInSeconds;

/// @brief Field platformTickTimer, offset: 0x64, size: 0x4, def value: None
 float_t  ___platformTickTimer;

/// @brief Field tickBudgetInMilliseconds, offset: 0x68, size: 0x4, def value: None
 uint32_t  ___tickBudgetInMilliseconds;

/// @brief Field authExpirationHandle, offset: 0x70, size: 0x8, def value: None
 uint64_t  ___authExpirationHandle;

/// @brief Field authInterfaceLoginCredentialId, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___authInterfaceLoginCredentialId;

/// @brief Field authInterfaceCredentialToken, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___authInterfaceCredentialToken;

/// @brief Field connectInterfaceCredentialToken, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___connectInterfaceCredentialToken;

/// @brief Field EOS, offset: 0x90, size: 0x8, def value: None
 ::Epic::OnlineServices::Platform::PlatformInterface*  ___EOS;

/// @brief Field localUserAccountId, offset: 0x98, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  ___localUserAccountId;

/// @brief Field localUserAccountIdString, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___localUserAccountIdString;

/// @brief Field localUserProductId, offset: 0xa8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  ___localUserProductId;

/// @brief Field localUserProductIdString, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___localUserProductIdString;

/// @brief Field initialized, offset: 0xb8, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field isConnecting, offset: 0xb9, size: 0x1, def value: None
 bool  ___isConnecting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___apiKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___authInterfaceLogin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___authInterfaceCredentialType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___devAuthToolPort) == 0x30, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___devAuthToolCredentialName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___connectInterfaceCredentialType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___deviceModel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___displayName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___epicLoggerLevel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___collectPlayerMetrics) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___checkForEpicLauncherAndRestart) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___delayedInitialization) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___platformTickIntervalInSeconds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___platformTickTimer) == 0x64, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___tickBudgetInMilliseconds) == 0x68, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___authExpirationHandle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___authInterfaceLoginCredentialId) == 0x78, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___authInterfaceCredentialToken) == 0x80, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___connectInterfaceCredentialToken) == 0x88, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___EOS) == 0x90, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___localUserAccountId) == 0x98, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___localUserAccountIdString) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___localUserProductId) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___localUserProductIdString) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___initialized) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::EpicTransport::EOSSDKComponent, ___isConnecting) == 0xb9, "Offset mismatch!");

static_assert(sizeof(::EpicTransport::EOSSDKComponent) == 0xc0, "Size mismatch!");

} // namespace end def EpicTransport
