#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/EOSConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__Config_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__WrappedPlatformFlags_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EOSConfig)
namespace Epic::OnlineServices::Platform {
struct InitializeThreadAffinity;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSConfig___c;
}
namespace PlayEveryWare::EpicOnlineServices {
class SandboxDeploymentOverride;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class EOSConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSConfig___c;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSConfig*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::EOSConfig___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSConfig*, "PlayEveryWare.EpicOnlineServices", "EOSConfig");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::EOSConfig___c*, "PlayEveryWare.EpicOnlineServices", "EOSConfig/<>c");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSConfig/<>c
class CORDL_TYPE EOSConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::EOSConfig___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::EOSConfig___c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x180548d80, size 0x40, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::EOSConfig* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSConfig___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::EOSConfig___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSConfig___c(EOSConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSConfig___c(EOSConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18835};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSConfig___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies Epic.OnlineServices.Auth.AuthScopeFlags, Epic.OnlineServices.UI.InputStateButtonFlags, PlayEveryWare.EpicOnlineServices.Config, PlayEveryWare.EpicOnlineServices.WrappedPlatformFlags, System.Nullable`1<T>
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.EOSConfig
class CORDL_TYPE EOSConfig : public ::PlayEveryWare::EpicOnlineServices::Config {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::EOSConfig___c;

/// @brief Field GenerateKeyButtonAction, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_GenerateKeyButtonAction, put=__cordl_internal_set_GenerateKeyButtonAction)) ::System::Action*  GenerateKeyButtonAction;

/// @brief Field ThreadAffinity_HTTPRequestIO, offset 0xe8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_HTTPRequestIO, put=__cordl_internal_set_ThreadAffinity_HTTPRequestIO)) ::System::Nullable_1<uint64_t>  ThreadAffinity_HTTPRequestIO;

/// @brief Field ThreadAffinity_P2PIO, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_P2PIO, put=__cordl_internal_set_ThreadAffinity_P2PIO)) ::System::Nullable_1<uint64_t>  ThreadAffinity_P2PIO;

/// @brief Field ThreadAffinity_RTCIO, offset 0xf8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_RTCIO, put=__cordl_internal_set_ThreadAffinity_RTCIO)) ::System::Nullable_1<uint64_t>  ThreadAffinity_RTCIO;

/// @brief Field ThreadAffinity_networkWork, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_networkWork, put=__cordl_internal_set_ThreadAffinity_networkWork)) ::System::Nullable_1<uint64_t>  ThreadAffinity_networkWork;

/// @brief Field ThreadAffinity_storageIO, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_storageIO, put=__cordl_internal_set_ThreadAffinity_storageIO)) ::System::Nullable_1<uint64_t>  ThreadAffinity_storageIO;

/// @brief Field ThreadAffinity_webSocketIO, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_ThreadAffinity_webSocketIO, put=__cordl_internal_set_ThreadAffinity_webSocketIO)) ::System::Nullable_1<uint64_t>  ThreadAffinity_webSocketIO;

/// @brief Field alwaysSendInputToOverlay, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysSendInputToOverlay, put=__cordl_internal_set_alwaysSendInputToOverlay)) bool  alwaysSendInputToOverlay;

/// @brief Field authScopeOptionsFlags, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_authScopeOptionsFlags, put=__cordl_internal_set_authScopeOptionsFlags)) ::Epic::OnlineServices::Auth::AuthScopeFlags  authScopeOptionsFlags;

/// @brief Field clientID, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientID, put=__cordl_internal_set_clientID)) ::StringW  clientID;

/// @brief Field clientSecret, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientSecret, put=__cordl_internal_set_clientSecret)) ::StringW  clientSecret;

/// @brief Field deploymentID, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_deploymentID, put=__cordl_internal_set_deploymentID)) ::StringW  deploymentID;

/// @brief Field encryptionKey, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_encryptionKey, put=__cordl_internal_set_encryptionKey)) ::StringW  encryptionKey;

/// @brief Field initialButtonDelayForOverlay, offset 0x10c, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialButtonDelayForOverlay, put=__cordl_internal_set_initialButtonDelayForOverlay)) ::System::Nullable_1<float_t>  initialButtonDelayForOverlay;

/// @brief Field isServer, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isServer, put=__cordl_internal_set_isServer)) bool  isServer;

/// @brief Field platformOptionsFlags, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_platformOptionsFlags, put=__cordl_internal_set_platformOptionsFlags)) ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  platformOptionsFlags;

/// @brief Field productID, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_productID, put=__cordl_internal_set_productID)) ::StringW  productID;

/// @brief Field productName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_productName, put=__cordl_internal_set_productName)) ::StringW  productName;

/// @brief Field productVersion, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_productVersion, put=__cordl_internal_set_productVersion)) ::StringW  productVersion;

/// @brief Field repeatButtonDelayForOverlay, offset 0x114, size 0x8 
 __declspec(property(get=__cordl_internal_get_repeatButtonDelayForOverlay, put=__cordl_internal_set_repeatButtonDelayForOverlay)) ::System::Nullable_1<float_t>  repeatButtonDelayForOverlay;

/// @brief Field sandboxDeploymentOverrides, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_sandboxDeploymentOverrides, put=__cordl_internal_set_sandboxDeploymentOverrides)) ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*  sandboxDeploymentOverrides;

/// @brief Field sandboxID, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_sandboxID, put=__cordl_internal_set_sandboxID)) ::StringW  sandboxID;

/// @brief Field taskNetworkTimeoutSeconds, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_taskNetworkTimeoutSeconds, put=__cordl_internal_set_taskNetworkTimeoutSeconds)) double_t  taskNetworkTimeoutSeconds;

/// @brief Field tickBudgetInMilliseconds, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_tickBudgetInMilliseconds, put=__cordl_internal_set_tickBudgetInMilliseconds)) uint32_t  tickBudgetInMilliseconds;

/// @brief Field toggleFriendsButtonCombination, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_toggleFriendsButtonCombination, put=__cordl_internal_set_toggleFriendsButtonCombination)) ::Epic::OnlineServices::UI::InputStateButtonFlags  toggleFriendsButtonCombination;

/// @brief Method ConfigureOverrideThreadAffinity, addr 0x180537c20, size 0xc0, virtual false, abstract: false, final false
inline void ConfigureOverrideThreadAffinity(::by_ref<::Epic::OnlineServices::Platform::InitializeThreadAffinity>  affinity) ;

/// @brief Method EnsureConfigFileExistsAsync, addr 0x180534640, size 0x210, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* EnsureConfigFileExistsAsync() ;

/// @brief Method NeedsMigration, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool NeedsMigration() ;

static inline ::PlayEveryWare::EpicOnlineServices::EOSConfig* New_ctor() ;

/// @brief Method SetDeployment, addr 0x180537ce0, size 0x1e0, virtual false, abstract: false, final false
inline void SetDeployment(::StringW  launcherSandboxId) ;

/// @brief Method TryGetDeployment, addr 0x180537ec0, size 0xd0, virtual false, abstract: false, final false
static inline bool TryGetDeployment(::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*  deploymentOverrides, ::StringW  sandboxId, ::by_ref<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>  deploymentOverride) ;

constexpr ::System::Action* const& __cordl_internal_get_GenerateKeyButtonAction() const;

constexpr ::System::Action*& __cordl_internal_get_GenerateKeyButtonAction() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_HTTPRequestIO() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_HTTPRequestIO() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_P2PIO() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_P2PIO() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_RTCIO() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_RTCIO() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_networkWork() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_networkWork() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_storageIO() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_storageIO() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_ThreadAffinity_webSocketIO() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_ThreadAffinity_webSocketIO() ;

constexpr bool const& __cordl_internal_get_alwaysSendInputToOverlay() const;

constexpr bool& __cordl_internal_get_alwaysSendInputToOverlay() ;

constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags const& __cordl_internal_get_authScopeOptionsFlags() const;

constexpr ::Epic::OnlineServices::Auth::AuthScopeFlags& __cordl_internal_get_authScopeOptionsFlags() ;

constexpr ::StringW const& __cordl_internal_get_clientID() const;

constexpr ::StringW& __cordl_internal_get_clientID() ;

constexpr ::StringW const& __cordl_internal_get_clientSecret() const;

constexpr ::StringW& __cordl_internal_get_clientSecret() ;

constexpr ::StringW const& __cordl_internal_get_deploymentID() const;

constexpr ::StringW& __cordl_internal_get_deploymentID() ;

constexpr ::StringW const& __cordl_internal_get_encryptionKey() const;

constexpr ::StringW& __cordl_internal_get_encryptionKey() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_initialButtonDelayForOverlay() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_initialButtonDelayForOverlay() ;

constexpr bool const& __cordl_internal_get_isServer() const;

constexpr bool& __cordl_internal_get_isServer() ;

constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const& __cordl_internal_get_platformOptionsFlags() const;

constexpr ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags& __cordl_internal_get_platformOptionsFlags() ;

constexpr ::StringW const& __cordl_internal_get_productID() const;

constexpr ::StringW& __cordl_internal_get_productID() ;

constexpr ::StringW const& __cordl_internal_get_productName() const;

constexpr ::StringW& __cordl_internal_get_productName() ;

constexpr ::StringW const& __cordl_internal_get_productVersion() const;

constexpr ::StringW& __cordl_internal_get_productVersion() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_repeatButtonDelayForOverlay() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_repeatButtonDelayForOverlay() ;

constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>* const& __cordl_internal_get_sandboxDeploymentOverrides() const;

constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*& __cordl_internal_get_sandboxDeploymentOverrides() ;

constexpr ::StringW const& __cordl_internal_get_sandboxID() const;

constexpr ::StringW& __cordl_internal_get_sandboxID() ;

constexpr double_t const& __cordl_internal_get_taskNetworkTimeoutSeconds() const;

constexpr double_t& __cordl_internal_get_taskNetworkTimeoutSeconds() ;

constexpr uint32_t const& __cordl_internal_get_tickBudgetInMilliseconds() const;

constexpr uint32_t& __cordl_internal_get_tickBudgetInMilliseconds() ;

constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags const& __cordl_internal_get_toggleFriendsButtonCombination() const;

constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags& __cordl_internal_get_toggleFriendsButtonCombination() ;

constexpr void __cordl_internal_set_GenerateKeyButtonAction(::System::Action*  value) ;

constexpr void __cordl_internal_set_ThreadAffinity_HTTPRequestIO(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_ThreadAffinity_P2PIO(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_ThreadAffinity_RTCIO(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_ThreadAffinity_networkWork(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_ThreadAffinity_storageIO(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_ThreadAffinity_webSocketIO(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_alwaysSendInputToOverlay(bool  value) ;

constexpr void __cordl_internal_set_authScopeOptionsFlags(::Epic::OnlineServices::Auth::AuthScopeFlags  value) ;

constexpr void __cordl_internal_set_clientID(::StringW  value) ;

constexpr void __cordl_internal_set_clientSecret(::StringW  value) ;

constexpr void __cordl_internal_set_deploymentID(::StringW  value) ;

constexpr void __cordl_internal_set_encryptionKey(::StringW  value) ;

constexpr void __cordl_internal_set_initialButtonDelayForOverlay(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_isServer(bool  value) ;

constexpr void __cordl_internal_set_platformOptionsFlags(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  value) ;

constexpr void __cordl_internal_set_productID(::StringW  value) ;

constexpr void __cordl_internal_set_productName(::StringW  value) ;

constexpr void __cordl_internal_set_productVersion(::StringW  value) ;

constexpr void __cordl_internal_set_repeatButtonDelayForOverlay(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_sandboxDeploymentOverrides(::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*  value) ;

constexpr void __cordl_internal_set_sandboxID(::StringW  value) ;

constexpr void __cordl_internal_set_taskNetworkTimeoutSeconds(double_t  value) ;

constexpr void __cordl_internal_set_tickBudgetInMilliseconds(uint32_t  value) ;

constexpr void __cordl_internal_set_toggleFriendsButtonCombination(::Epic::OnlineServices::UI::InputStateButtonFlags  value) ;

/// @brief Method .ctor, addr 0x180538010, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSConfig(EOSConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSConfig(EOSConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18836};

/// @brief Field productName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___productName;

/// @brief Field productVersion, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___productVersion;

/// @brief Field productID, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___productID;

/// @brief Field sandboxID, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___sandboxID;

/// @brief Field deploymentID, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___deploymentID;

/// @brief Field sandboxDeploymentOverrides, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*  ___sandboxDeploymentOverrides;

/// @brief Field isServer, offset: 0x68, size: 0x1, def value: None
 bool  ___isServer;

/// @brief Field clientSecret, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___clientSecret;

/// @brief Field clientID, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___clientID;

/// @brief Field encryptionKey, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___encryptionKey;

/// @brief Field GenerateKeyButtonAction, offset: 0x88, size: 0x8, def value: None
 ::System::Action*  ___GenerateKeyButtonAction;

/// @brief Field platformOptionsFlags, offset: 0x90, size: 0x4, def value: None
 ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags  ___platformOptionsFlags;

/// @brief Field authScopeOptionsFlags, offset: 0x94, size: 0x4, def value: None
 ::Epic::OnlineServices::Auth::AuthScopeFlags  ___authScopeOptionsFlags;

/// @brief Field tickBudgetInMilliseconds, offset: 0x98, size: 0x4, def value: None
 uint32_t  ___tickBudgetInMilliseconds;

/// @brief Field taskNetworkTimeoutSeconds, offset: 0xa0, size: 0x8, def value: None
 double_t  ___taskNetworkTimeoutSeconds;

/// @brief Field ThreadAffinity_networkWork, offset: 0xa8, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_networkWork;

/// @brief Field ThreadAffinity_storageIO, offset: 0xb8, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_storageIO;

/// @brief Field ThreadAffinity_webSocketIO, offset: 0xc8, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_webSocketIO;

/// @brief Field ThreadAffinity_P2PIO, offset: 0xd8, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_P2PIO;

/// @brief Field ThreadAffinity_HTTPRequestIO, offset: 0xe8, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_HTTPRequestIO;

/// @brief Field ThreadAffinity_RTCIO, offset: 0xf8, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___ThreadAffinity_RTCIO;

/// @brief Field alwaysSendInputToOverlay, offset: 0x108, size: 0x1, def value: None
 bool  ___alwaysSendInputToOverlay;

/// @brief Field initialButtonDelayForOverlay, offset: 0x10c, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  ___initialButtonDelayForOverlay;

/// @brief Field repeatButtonDelayForOverlay, offset: 0x114, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  ___repeatButtonDelayForOverlay;

/// @brief Field toggleFriendsButtonCombination, offset: 0x11c, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::InputStateButtonFlags  ___toggleFriendsButtonCombination;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___productName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___productVersion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___productID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___sandboxID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___deploymentID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___sandboxDeploymentOverrides) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___isServer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___clientSecret) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___clientID) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___encryptionKey) == 0x80, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___GenerateKeyButtonAction) == 0x88, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___platformOptionsFlags) == 0x90, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___authScopeOptionsFlags) == 0x94, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___tickBudgetInMilliseconds) == 0x98, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___taskNetworkTimeoutSeconds) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___ThreadAffinity_networkWork) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___ThreadAffinity_storageIO) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___ThreadAffinity_webSocketIO) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___ThreadAffinity_P2PIO) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___ThreadAffinity_HTTPRequestIO) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___ThreadAffinity_RTCIO) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___alwaysSendInputToOverlay) == 0x108, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___initialButtonDelayForOverlay) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___repeatButtonDelayForOverlay) == 0x114, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::EOSConfig, ___toggleFriendsButtonCombination) == 0x11c, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::EOSConfig) == 0x120, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
