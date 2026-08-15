#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
CORDL_MODULE_EXPORT(SessionModification)
namespace Epic::OnlineServices::Sessions {
struct SessionModificationAddAttributeOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationRemoveAttributeOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetAllowedPlatformIdsOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetBucketIdOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetHostAddressOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetInvitesAllowedOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetJoinInProgressAllowedOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetMaxPlayersOptions;
}
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetPermissionLevelOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class SessionModification;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::SessionModification*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionModification*, "Epic.OnlineServices.Sessions", "SessionModification");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.SessionModification
class CORDL_TYPE SessionModification : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AddAttribute, addr 0x1804f2ab0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result AddAttribute(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions>  options) ;

static inline ::Epic::OnlineServices::Sessions::SessionModification* New_ctor() ;

static inline ::Epic::OnlineServices::Sessions::SessionModification* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method Release, addr 0x1804f2b70, size 0x10, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method RemoveAttribute, addr 0x1804f2b80, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result RemoveAttribute(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions>  options) ;

/// @brief Method SetAllowedPlatformIds, addr 0x1804f2bf0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetAllowedPlatformIds(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions>  options) ;

/// @brief Method SetBucketId, addr 0x1804f2c70, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetBucketId(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptions>  options) ;

/// @brief Method SetHostAddress, addr 0x1804f2ce0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetHostAddress(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions>  options) ;

/// @brief Method SetInvitesAllowed, addr 0x1804f2d50, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetInvitesAllowed(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions>  options) ;

/// @brief Method SetJoinInProgressAllowed, addr 0x1804f2db0, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetJoinInProgressAllowed(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions>  options) ;

/// @brief Method SetMaxPlayers, addr 0x1804f2e10, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetMaxPlayers(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions>  options) ;

/// @brief Method SetPermissionLevel, addr 0x1804f2e50, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetPermissionLevel(::by_ref<::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions>  options) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionModification() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionModification", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionModification(SessionModification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionModification", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionModification(SessionModification const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionModification) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
