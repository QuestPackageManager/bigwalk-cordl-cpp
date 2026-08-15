#pragma once
// IWYU pragma private; include "GlobalNamespace/EosApiKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EosApiKey)
// Forward declare root types
namespace GlobalNamespace {
class EosApiKey;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EosApiKey*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EosApiKey*, "", "EosApiKey");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: EosApiKey
class CORDL_TYPE EosApiKey : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field epicClientId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_epicClientId, put=__cordl_internal_set_epicClientId)) ::StringW  epicClientId;

/// @brief Field epicClientSecret, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_epicClientSecret, put=__cordl_internal_set_epicClientSecret)) ::StringW  epicClientSecret;

/// @brief Field epicDeploymentId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_epicDeploymentId, put=__cordl_internal_set_epicDeploymentId)) ::StringW  epicDeploymentId;

/// @brief Field epicProductId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_epicProductId, put=__cordl_internal_set_epicProductId)) ::StringW  epicProductId;

/// @brief Field epicProductName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_epicProductName, put=__cordl_internal_set_epicProductName)) ::StringW  epicProductName;

/// @brief Field epicProductVersion, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_epicProductVersion, put=__cordl_internal_set_epicProductVersion)) ::StringW  epicProductVersion;

/// @brief Field epicSandboxId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_epicSandboxId, put=__cordl_internal_set_epicSandboxId)) ::StringW  epicSandboxId;

static inline ::GlobalNamespace::EosApiKey* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_epicClientId() const;

constexpr ::StringW& __cordl_internal_get_epicClientId() ;

constexpr ::StringW const& __cordl_internal_get_epicClientSecret() const;

constexpr ::StringW& __cordl_internal_get_epicClientSecret() ;

constexpr ::StringW const& __cordl_internal_get_epicDeploymentId() const;

constexpr ::StringW& __cordl_internal_get_epicDeploymentId() ;

constexpr ::StringW const& __cordl_internal_get_epicProductId() const;

constexpr ::StringW& __cordl_internal_get_epicProductId() ;

constexpr ::StringW const& __cordl_internal_get_epicProductName() const;

constexpr ::StringW& __cordl_internal_get_epicProductName() ;

constexpr ::StringW const& __cordl_internal_get_epicProductVersion() const;

constexpr ::StringW& __cordl_internal_get_epicProductVersion() ;

constexpr ::StringW const& __cordl_internal_get_epicSandboxId() const;

constexpr ::StringW& __cordl_internal_get_epicSandboxId() ;

constexpr void __cordl_internal_set_epicClientId(::StringW  value) ;

constexpr void __cordl_internal_set_epicClientSecret(::StringW  value) ;

constexpr void __cordl_internal_set_epicDeploymentId(::StringW  value) ;

constexpr void __cordl_internal_set_epicProductId(::StringW  value) ;

constexpr void __cordl_internal_set_epicProductName(::StringW  value) ;

constexpr void __cordl_internal_set_epicProductVersion(::StringW  value) ;

constexpr void __cordl_internal_set_epicSandboxId(::StringW  value) ;

/// @brief Method .ctor, addr 0x181574880, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EosApiKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EosApiKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EosApiKey(EosApiKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EosApiKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EosApiKey(EosApiKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18999};

/// @brief Field epicProductName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___epicProductName;

/// @brief Field epicProductVersion, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___epicProductVersion;

/// @brief Field epicProductId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___epicProductId;

/// @brief Field epicSandboxId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___epicSandboxId;

/// @brief Field epicDeploymentId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___epicDeploymentId;

/// @brief Field epicClientId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___epicClientId;

/// @brief Field epicClientSecret, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___epicClientSecret;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EosApiKey, ___epicProductName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EosApiKey, ___epicProductVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EosApiKey, ___epicProductId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EosApiKey, ___epicSandboxId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EosApiKey, ___epicDeploymentId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EosApiKey, ___epicClientId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EosApiKey, ___epicClientSecret) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EosApiKey) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
