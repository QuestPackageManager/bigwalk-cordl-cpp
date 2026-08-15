#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
CORDL_MODULE_EXPORT(LobbyModification)
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationAddAttributeOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationAddMemberAttributeOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationRemoveAttributeOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationRemoveMemberAttributeOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetAllowedPlatformIdsOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetBucketIdOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetInvitesAllowedOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetMaxMembersOptions;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetPermissionLevelOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class LobbyModification;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::LobbyModification*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyModification*, "Epic.OnlineServices.Lobby", "LobbyModification");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.LobbyModification
class CORDL_TYPE LobbyModification : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AddAttribute, addr 0x18050aef0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result AddAttribute(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions>  options) ;

/// @brief Method AddMemberAttribute, addr 0x18050afb0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result AddMemberAttribute(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions>  options) ;

static inline ::Epic::OnlineServices::Lobby::LobbyModification* New_ctor() ;

static inline ::Epic::OnlineServices::Lobby::LobbyModification* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x18050b070, size 0x10, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method RemoveAttribute, addr 0x18050b080, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result RemoveAttribute(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveAttributeOptions>  options) ;

/// @brief Method RemoveMemberAttribute, addr 0x18050b0f0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result RemoveMemberAttribute(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions>  options) ;

/// @brief Method SetAllowedPlatformIds, addr 0x18050b160, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetAllowedPlatformIds(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetAllowedPlatformIdsOptions>  options) ;

/// @brief Method SetBucketId, addr 0x18050b1e0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetBucketId(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions>  options) ;

/// @brief Method SetInvitesAllowed, addr 0x18050b250, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetInvitesAllowed(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>  options) ;

/// @brief Method SetMaxMembers, addr 0x18050b2b0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetMaxMembers(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions>  options) ;

/// @brief Method SetPermissionLevel, addr 0x18050b2f0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetPermissionLevel(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>  options) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyModification() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyModification", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyModification(LobbyModification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyModification", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyModification(LobbyModification const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8549};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyModification) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
