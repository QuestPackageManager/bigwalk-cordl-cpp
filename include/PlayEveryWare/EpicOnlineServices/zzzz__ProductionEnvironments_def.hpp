#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ProductionEnvironments.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProductionEnvironments)
namespace PlayEveryWare::Common {
template<typename T>
class Named_1;
}
namespace PlayEveryWare::Common {
template<typename T>
class SetOfNamed_1;
}
namespace PlayEveryWare::EpicOnlineServices {
struct Deployment;
}
namespace PlayEveryWare::EpicOnlineServices {
struct SandboxId;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class ProductionEnvironments;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::ProductionEnvironments*, "PlayEveryWare.EpicOnlineServices", "ProductionEnvironments");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.ProductionEnvironments
class CORDL_TYPE ProductionEnvironments : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Deployments)) ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>*  Deployments;

 __declspec(property(get=get_Sandboxes)) ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>*  Sandboxes;

/// @brief Field <Deployments>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Deployments_k__BackingField, put=__cordl_internal_set__Deployments_k__BackingField)) ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>*  _Deployments_k__BackingField;

/// @brief Field <Sandboxes>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Sandboxes_k__BackingField, put=__cordl_internal_set__Sandboxes_k__BackingField)) ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>*  _Sandboxes_k__BackingField;

/// @brief Method AddDeployment, addr 0x1805460a0, size 0x70, virtual false, abstract: false, final false
inline bool AddDeployment(::PlayEveryWare::EpicOnlineServices::Deployment  deployment) ;

/// @brief Method CanSandboxBeRemoved, addr 0x180546110, size 0x90, virtual false, abstract: false, final false
inline bool CanSandboxBeRemoved(::PlayEveryWare::EpicOnlineServices::SandboxId  sandbox) ;

static inline ::PlayEveryWare::EpicOnlineServices::ProductionEnvironments* New_ctor() ;

/// @brief Method TryGetFirstDefinedNamedDeployment, addr 0x1805461a0, size 0xf0, virtual false, abstract: false, final false
inline bool TryGetFirstDefinedNamedDeployment(::by_ref<::PlayEveryWare::Common::Named_1<::PlayEveryWare::EpicOnlineServices::Deployment>*>  deployment) ;

constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>* const& __cordl_internal_get__Deployments_k__BackingField() const;

constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>*& __cordl_internal_get__Deployments_k__BackingField() ;

constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>* const& __cordl_internal_get__Sandboxes_k__BackingField() const;

constexpr ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>*& __cordl_internal_get__Sandboxes_k__BackingField() ;

constexpr void __cordl_internal_set__Deployments_k__BackingField(::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>*  value) ;

constexpr void __cordl_internal_set__Sandboxes_k__BackingField(::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>*  value) ;

/// @brief Method .ctor, addr 0x180546290, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Deployments, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>* get_Deployments() ;

/// @brief Method get_Sandboxes, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>* get_Sandboxes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProductionEnvironments() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProductionEnvironments", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProductionEnvironments(ProductionEnvironments && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProductionEnvironments", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProductionEnvironments(ProductionEnvironments const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18857};

/// @brief Field <Deployments>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::Deployment>*  ____Deployments_k__BackingField;

/// @brief Field <Sandboxes>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::PlayEveryWare::Common::SetOfNamed_1<::PlayEveryWare::EpicOnlineServices::SandboxId>*  ____Sandboxes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductionEnvironments, ____Deployments_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::ProductionEnvironments, ____Sandboxes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::ProductionEnvironments) == 0x20, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
