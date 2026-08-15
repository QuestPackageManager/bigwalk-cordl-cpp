#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ProductConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__Config_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProductConfig)
namespace PlayEveryWare::Common {
template<typename T>
class Named_1;
}
namespace PlayEveryWare::Common {
template<typename T>
class SetOfNamed_1;
}
namespace PlayEveryWare::EpicOnlineServices {
class EOSClientCredentials;
}
namespace PlayEveryWare::EpicOnlineServices {
struct PlatformManager_Platform;
}
namespace PlayEveryWare::EpicOnlineServices {
class PreviousEOSConfig_ProductConfig___c;
}
namespace PlayEveryWare::EpicOnlineServices {
class ProductConfig_PlatformConfigsUpdatedEventArgs;
}
namespace PlayEveryWare::EpicOnlineServices {
class ProductConfig_PreviousEOSConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class ProductConfig___c;
}
namespace PlayEveryWare::EpicOnlineServices {
class ProductionEnvironments;
}
namespace PlayEveryWare::EpicOnlineServices {
class SandboxDeploymentOverride;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class PreviousEOSConfig_ProductConfig___c;
}
namespace PlayEveryWare::EpicOnlineServices {
class ProductConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class ProductConfig_PlatformConfigsUpdatedEventArgs;
}
namespace PlayEveryWare::EpicOnlineServices {
class ProductConfig_PreviousEOSConfig;
}
namespace PlayEveryWare::EpicOnlineServices {
class ProductConfig___c;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ProductConfig*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*);
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ProductConfig___c*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*, "PlayEveryWare.EpicOnlineServices", "ProductConfig/PreviousEOSConfig/<>c");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ProductConfig*, "PlayEveryWare.EpicOnlineServices", "ProductConfig");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*, "PlayEveryWare.EpicOnlineServices", "ProductConfig/PlatformConfigsUpdatedEventArgs");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*, "PlayEveryWare.EpicOnlineServices", "ProductConfig/PreviousEOSConfig");
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ProductConfig___c*, "PlayEveryWare.EpicOnlineServices", "ProductConfig/<>c");
// Dependencies System.EventArgs
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ProductConfig/PlatformConfigsUpdatedEventArgs
class CORDL_TYPE ProductConfig_PlatformConfigsUpdatedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field PlatformConfigsUpdated, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlatformConfigsUpdated, put=__cordl_internal_set_PlatformConfigsUpdated)) ::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*  PlatformConfigsUpdated;

static inline ::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs* New_ctor(::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*  platformConfigsUpdated) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>* const& __cordl_internal_get_PlatformConfigsUpdated() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*& __cordl_internal_get_PlatformConfigsUpdated() ;

constexpr void __cordl_internal_set_PlatformConfigsUpdated(::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*  platformConfigsUpdated) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProductConfig_PlatformConfigsUpdatedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProductConfig_PlatformConfigsUpdatedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProductConfig_PlatformConfigsUpdatedEventArgs(ProductConfig_PlatformConfigsUpdatedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProductConfig_PlatformConfigsUpdatedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProductConfig_PlatformConfigsUpdatedEventArgs(ProductConfig_PlatformConfigsUpdatedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18852};

/// @brief Field PlatformConfigsUpdated, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::PlayEveryWare::EpicOnlineServices::PlatformManager_Platform>*  ___PlatformConfigsUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs, ___PlatformConfigsUpdated) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ProductConfig/PreviousEOSConfig/<>c
class CORDL_TYPE PreviousEOSConfig_ProductConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c* New_ctor() ;

/// @brief Method <.cctor>b__9_0, addr 0x180549000, size 0x40, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig* __cctor_b__9_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreviousEOSConfig_ProductConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreviousEOSConfig_ProductConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PreviousEOSConfig_ProductConfig___c(PreviousEOSConfig_ProductConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreviousEOSConfig_ProductConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreviousEOSConfig_ProductConfig___c(PreviousEOSConfig_ProductConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18853};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.Config
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ProductConfig/PreviousEOSConfig
class CORDL_TYPE ProductConfig_PreviousEOSConfig : public ::PlayEveryWare::EpicOnlineServices::Config {
public:
// Declarations
using __c = ::PlayEveryWare::EpicOnlineServices::PreviousEOSConfig_ProductConfig___c;

/// @brief Field clientID, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientID, put=__cordl_internal_set_clientID)) ::StringW  clientID;

/// @brief Field clientSecret, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientSecret, put=__cordl_internal_set_clientSecret)) ::StringW  clientSecret;

/// @brief Field deploymentID, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_deploymentID, put=__cordl_internal_set_deploymentID)) ::StringW  deploymentID;

/// @brief Field encryptionKey, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_encryptionKey, put=__cordl_internal_set_encryptionKey)) ::StringW  encryptionKey;

/// @brief Field productID, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_productID, put=__cordl_internal_set_productID)) ::StringW  productID;

/// @brief Field productName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_productName, put=__cordl_internal_set_productName)) ::StringW  productName;

/// @brief Field productVersion, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_productVersion, put=__cordl_internal_set_productVersion)) ::StringW  productVersion;

/// @brief Field sandboxDeploymentOverrides, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_sandboxDeploymentOverrides, put=__cordl_internal_set_sandboxDeploymentOverrides)) ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*  sandboxDeploymentOverrides;

/// @brief Field sandboxID, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sandboxID, put=__cordl_internal_set_sandboxID)) ::StringW  sandboxID;

static inline ::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_clientID() const;

constexpr ::StringW& __cordl_internal_get_clientID() ;

constexpr ::StringW const& __cordl_internal_get_clientSecret() const;

constexpr ::StringW& __cordl_internal_get_clientSecret() ;

constexpr ::StringW const& __cordl_internal_get_deploymentID() const;

constexpr ::StringW& __cordl_internal_get_deploymentID() ;

constexpr ::StringW const& __cordl_internal_get_encryptionKey() const;

constexpr ::StringW& __cordl_internal_get_encryptionKey() ;

constexpr ::StringW const& __cordl_internal_get_productID() const;

constexpr ::StringW& __cordl_internal_get_productID() ;

constexpr ::StringW const& __cordl_internal_get_productName() const;

constexpr ::StringW& __cordl_internal_get_productName() ;

constexpr ::StringW const& __cordl_internal_get_productVersion() const;

constexpr ::StringW& __cordl_internal_get_productVersion() ;

constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>* const& __cordl_internal_get_sandboxDeploymentOverrides() const;

constexpr ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*& __cordl_internal_get_sandboxDeploymentOverrides() ;

constexpr ::StringW const& __cordl_internal_get_sandboxID() const;

constexpr ::StringW& __cordl_internal_get_sandboxID() ;

constexpr void __cordl_internal_set_clientID(::StringW  value) ;

constexpr void __cordl_internal_set_clientSecret(::StringW  value) ;

constexpr void __cordl_internal_set_deploymentID(::StringW  value) ;

constexpr void __cordl_internal_set_encryptionKey(::StringW  value) ;

constexpr void __cordl_internal_set_productID(::StringW  value) ;

constexpr void __cordl_internal_set_productName(::StringW  value) ;

constexpr void __cordl_internal_set_productVersion(::StringW  value) ;

constexpr void __cordl_internal_set_sandboxDeploymentOverrides(::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*  value) ;

constexpr void __cordl_internal_set_sandboxID(::StringW  value) ;

/// @brief Method .ctor, addr 0x180541a60, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProductConfig_PreviousEOSConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProductConfig_PreviousEOSConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProductConfig_PreviousEOSConfig(ProductConfig_PreviousEOSConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProductConfig_PreviousEOSConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProductConfig_PreviousEOSConfig(ProductConfig_PreviousEOSConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18854};

/// @brief Field productName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___productName;

/// @brief Field productVersion, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___productVersion;

/// @brief Field productID, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___productID;

/// @brief Field sandboxDeploymentOverrides, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*>*  ___sandboxDeploymentOverrides;

/// @brief Field sandboxID, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___sandboxID;

/// @brief Field deploymentID, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___deploymentID;

/// @brief Field clientSecret, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___clientSecret;

/// @brief Field clientID, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___clientID;

/// @brief Field encryptionKey, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___encryptionKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig, ___productName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig, ___productVersion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig, ___productID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig, ___sandboxDeploymentOverrides) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig, ___sandboxID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig, ___deploymentID) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig, ___clientSecret) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig, ___clientID) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig, ___encryptionKey) == 0x78, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig) == 0x80, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ProductConfig/<>c
class CORDL_TYPE ProductConfig___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::PlayEveryWare::EpicOnlineServices::ProductConfig___c*  __9;

static inline ::PlayEveryWare::EpicOnlineServices::ProductConfig___c* New_ctor() ;

/// @brief Method <.cctor>b__15_0, addr 0x180548dc0, size 0xa0, virtual false, abstract: false, final false
inline ::PlayEveryWare::EpicOnlineServices::ProductConfig* __cctor_b__15_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayEveryWare::EpicOnlineServices::ProductConfig___c* getStaticF___9() ;

static inline void setStaticF___9(::PlayEveryWare::EpicOnlineServices::ProductConfig___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProductConfig___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProductConfig___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProductConfig___c(ProductConfig___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProductConfig___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProductConfig___c(ProductConfig___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ProductConfig___c) == 0x10, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
// Dependencies PlayEveryWare.EpicOnlineServices.Config, System.Guid
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ProductConfig
class CORDL_TYPE ProductConfig : public ::PlayEveryWare::EpicOnlineServices::Config {
public:
// Declarations
using PlatformConfigsUpdatedEventArgs = ::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs;

using PreviousEOSConfig = ::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig;

using __c = ::PlayEveryWare::EpicOnlineServices::ProductConfig___c;

/// @brief Field ClientCredentialsUpdatedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ClientCredentialsUpdatedEvent, put=setStaticF_ClientCredentialsUpdatedEvent)) ::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  ClientCredentialsUpdatedEvent;

/// @brief Field Clients, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Clients, put=__cordl_internal_set_Clients)) ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*  Clients;

/// @brief Field DeploymentsUpdatedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeploymentsUpdatedEvent, put=setStaticF_DeploymentsUpdatedEvent)) ::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  DeploymentsUpdatedEvent;

/// @brief Field Environments, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_Environments, put=__cordl_internal_set_Environments)) ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*  Environments;

/// @brief Field ProductId, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_ProductId, put=__cordl_internal_set_ProductId)) ::System::Guid  ProductId;

/// @brief Field ProductName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProductName, put=__cordl_internal_set_ProductName)) ::StringW  ProductName;

/// @brief Field ProductVersion, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProductVersion, put=__cordl_internal_set_ProductVersion)) ::StringW  ProductVersion;

/// @brief Field _clientCredentialsDefinedWhenLoaded, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__clientCredentialsDefinedWhenLoaded, put=__cordl_internal_set__clientCredentialsDefinedWhenLoaded)) bool  _clientCredentialsDefinedWhenLoaded;

/// @brief Field _configImported, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__configImported, put=__cordl_internal_set__configImported)) bool  _configImported;

/// @brief Field _deploymentDefinedWhenLoaded, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__deploymentDefinedWhenLoaded, put=__cordl_internal_set__deploymentDefinedWhenLoaded)) bool  _deploymentDefinedWhenLoaded;

/// @brief Method MigrateClientCredentials, addr 0x180545160, size 0xe0, virtual false, abstract: false, final false
inline void MigrateClientCredentials(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*  config) ;

/// @brief Method MigrateConfig, addr 0x180545240, size 0x2c0, virtual true, abstract: false, final false
inline void MigrateConfig() ;

/// @brief Method MigrateProductNameVersionAndId, addr 0x180545500, size 0x80, virtual false, abstract: false, final false
inline void MigrateProductNameVersionAndId(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*  config) ;

/// @brief Method MigrateSandboxAndDeployment, addr 0x1805457d0, size 0x150, virtual false, abstract: false, final false
inline void MigrateSandboxAndDeployment(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*  config) ;

/// @brief Method MigrateSandboxAndDeploymentOverrides, addr 0x180545580, size 0x250, virtual false, abstract: false, final false
inline void MigrateSandboxAndDeploymentOverrides(::PlayEveryWare::EpicOnlineServices::ProductConfig_PreviousEOSConfig*  config) ;

/// @brief Method NeedsMigration, addr 0x180545920, size 0x150, virtual true, abstract: false, final false
inline bool NeedsMigration() ;

static inline ::PlayEveryWare::EpicOnlineServices::ProductConfig* New_ctor() ;

/// @brief Method OnReadCompleted, addr 0x180545a70, size 0x110, virtual true, abstract: false, final false
inline void OnReadCompleted() ;

/// @brief Method TryGetFirstCompleteNamedClientCredentials, addr 0x180545b80, size 0xd0, virtual false, abstract: false, final false
inline bool TryGetFirstCompleteNamedClientCredentials(::by_ref<::PlayEveryWare::Common::Named_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*>  credentials) ;

constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>* const& __cordl_internal_get_Clients() const;

constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*& __cordl_internal_get_Clients() ;

constexpr ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments* const& __cordl_internal_get_Environments() const;

constexpr ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*& __cordl_internal_get_Environments() ;

constexpr ::System::Guid const& __cordl_internal_get_ProductId() const;

constexpr ::System::Guid& __cordl_internal_get_ProductId() ;

constexpr ::StringW const& __cordl_internal_get_ProductName() const;

constexpr ::StringW& __cordl_internal_get_ProductName() ;

constexpr ::StringW const& __cordl_internal_get_ProductVersion() const;

constexpr ::StringW& __cordl_internal_get_ProductVersion() ;

constexpr bool const& __cordl_internal_get__clientCredentialsDefinedWhenLoaded() const;

constexpr bool& __cordl_internal_get__clientCredentialsDefinedWhenLoaded() ;

constexpr bool const& __cordl_internal_get__configImported() const;

constexpr bool& __cordl_internal_get__configImported() ;

constexpr bool const& __cordl_internal_get__deploymentDefinedWhenLoaded() const;

constexpr bool& __cordl_internal_get__deploymentDefinedWhenLoaded() ;

constexpr void __cordl_internal_set_Clients(::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*  value) ;

constexpr void __cordl_internal_set_Environments(::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*  value) ;

constexpr void __cordl_internal_set_ProductId(::System::Guid  value) ;

constexpr void __cordl_internal_set_ProductName(::StringW  value) ;

constexpr void __cordl_internal_set_ProductVersion(::StringW  value) ;

constexpr void __cordl_internal_set__clientCredentialsDefinedWhenLoaded(bool  value) ;

constexpr void __cordl_internal_set__configImported(bool  value) ;

constexpr void __cordl_internal_set__deploymentDefinedWhenLoaded(bool  value) ;

/// @brief Method .ctor, addr 0x180545cd0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_ClientCredentialsUpdatedEvent, addr 0x180545d60, size 0xd0, virtual false, abstract: false, final false
static inline void add_ClientCredentialsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value) ;

/// @brief Method add_DeploymentsUpdatedEvent, addr 0x180545e30, size 0xd0, virtual false, abstract: false, final false
static inline void add_DeploymentsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value) ;

static inline ::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>* getStaticF_ClientCredentialsUpdatedEvent() ;

static inline ::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>* getStaticF_DeploymentsUpdatedEvent() ;

/// @brief Method remove_ClientCredentialsUpdatedEvent, addr 0x180545f00, size 0xd0, virtual false, abstract: false, final false
static inline void remove_ClientCredentialsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value) ;

/// @brief Method remove_DeploymentsUpdatedEvent, addr 0x180545fd0, size 0xd0, virtual false, abstract: false, final false
static inline void remove_DeploymentsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value) ;

static inline void setStaticF_ClientCredentialsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value) ;

static inline void setStaticF_DeploymentsUpdatedEvent(::System::EventHandler_1<::PlayEveryWare::EpicOnlineServices::ProductConfig_PlatformConfigsUpdatedEventArgs*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProductConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProductConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProductConfig(ProductConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProductConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProductConfig(ProductConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18856};

/// @brief Field ProductName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___ProductName;

/// @brief Field ProductId, offset: 0x40, size: 0x10, def value: None
 ::System::Guid  ___ProductId;

/// @brief Field ProductVersion, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___ProductVersion;

/// @brief Field _configImported, offset: 0x58, size: 0x1, def value: None
 bool  ____configImported;

/// @brief Field Clients, offset: 0x60, size: 0x8, def value: None
 ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::EOSClientCredentials*>*  ___Clients;

/// @brief Field Environments, offset: 0x68, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*  ___Environments;

/// @brief Field _deploymentDefinedWhenLoaded, offset: 0x70, size: 0x1, def value: None
 bool  ____deploymentDefinedWhenLoaded;

/// @brief Field _clientCredentialsDefinedWhenLoaded, offset: 0x71, size: 0x1, def value: None
 bool  ____clientCredentialsDefinedWhenLoaded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig, ___ProductName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig, ___ProductId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig, ___ProductVersion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig, ____configImported) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig, ___Clients) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig, ___Environments) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig, ____deploymentDefinedWhenLoaded) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductConfig, ____clientCredentialsDefinedWhenLoaded) == 0x71, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ProductConfig) == 0x78, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
