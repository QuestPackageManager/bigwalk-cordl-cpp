#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Deployment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayEveryWare/EpicOnlineServices/zzzz__SandboxId_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Deployment)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
struct Deployment;
}
// Write type traits
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::Deployment);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::Deployment, "PlayEveryWare.EpicOnlineServices", "Deployment");
// Dependencies PlayEveryWare.EpicOnlineServices.SandboxId, System.Guid
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.Deployment
struct CORDL_TYPE Deployment {
public:
// Declarations
 __declspec(property(get=get_IsComplete)) bool  IsComplete;

/// @brief Convert operator to "::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::Deployment>"
constexpr operator  ::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::Deployment>*() ;

/// @brief Method Equals, addr 0x1805373e0, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x180537480, size 0x90, virtual true, abstract: false, final true
inline bool Equals(::PlayEveryWare::EpicOnlineServices::Deployment  other) ;

/// @brief Method GetHashCode, addr 0x180537510, size 0xa0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805375b0, size 0x80, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_IsComplete, addr 0x180537630, size 0xd0, virtual false, abstract: false, final false
inline bool get_IsComplete() ;

/// @brief Convert to "::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::Deployment>"
constexpr ::System::IEquatable_1<::PlayEveryWare::EpicOnlineServices::Deployment>* i___System__IEquatable_1___PlayEveryWare__EpicOnlineServices__Deployment_() ;

// Ctor Parameters []
// @brief default ctor
constexpr Deployment() ;

// Ctor Parameters [CppParam { name: "SandboxId", ty: "::PlayEveryWare::EpicOnlineServices::SandboxId", modifiers: "", def_value: None }, CppParam { name: "DeploymentId", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr Deployment(::PlayEveryWare::EpicOnlineServices::SandboxId  SandboxId, ::System::Guid  DeploymentId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18833};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field SandboxId, offset: 0x0, size: 0x8, def value: None
 ::PlayEveryWare::EpicOnlineServices::SandboxId  SandboxId;

/// @brief Field DeploymentId, offset: 0x8, size: 0x10, def value: None
 ::System::Guid  DeploymentId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Deployment, SandboxId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::Deployment, DeploymentId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::Deployment) == 0x18, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
