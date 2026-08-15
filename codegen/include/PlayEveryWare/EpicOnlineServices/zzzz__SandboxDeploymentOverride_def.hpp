#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/SandboxDeploymentOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SandboxDeploymentOverride)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class SandboxDeploymentOverride;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride*, "PlayEveryWare.EpicOnlineServices", "SandboxDeploymentOverride");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.SandboxDeploymentOverride
class CORDL_TYPE SandboxDeploymentOverride : public ::System::Object {
public:
// Declarations
/// @brief Field deploymentID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_deploymentID, put=__cordl_internal_set_deploymentID)) ::StringW  deploymentID;

/// @brief Field sandboxID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sandboxID, put=__cordl_internal_set_sandboxID)) ::StringW  sandboxID;

static inline ::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_deploymentID() const;

constexpr ::StringW& __cordl_internal_get_deploymentID() ;

constexpr ::StringW const& __cordl_internal_get_sandboxID() const;

constexpr ::StringW& __cordl_internal_get_sandboxID() ;

constexpr void __cordl_internal_set_deploymentID(::StringW  value) ;

constexpr void __cordl_internal_set_sandboxID(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SandboxDeploymentOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SandboxDeploymentOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SandboxDeploymentOverride(SandboxDeploymentOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SandboxDeploymentOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SandboxDeploymentOverride(SandboxDeploymentOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18834};

/// @brief Field sandboxID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___sandboxID;

/// @brief Field deploymentID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___deploymentID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride, ___sandboxID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride, ___deploymentID) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::SandboxDeploymentOverride) == 0x20, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
