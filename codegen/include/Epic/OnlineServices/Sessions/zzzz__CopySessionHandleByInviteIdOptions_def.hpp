#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/CopySessionHandleByInviteIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CopySessionHandleByInviteIdOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct CopySessionHandleByInviteIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions, "Epic.OnlineServices.Sessions", "CopySessionHandleByInviteIdOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.CopySessionHandleByInviteIdOptions
struct CORDL_TYPE CopySessionHandleByInviteIdOptions {
public:
// Declarations
 __declspec(property(get=get_InviteId, put=set_InviteId)) ::Epic::OnlineServices::Utf8String*  InviteId;

/// @brief Method get_InviteId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_InviteId() ;

/// @brief Method set_InviteId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_InviteId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopySessionHandleByInviteIdOptions() ;

// Ctor Parameters [CppParam { name: "_InviteId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr CopySessionHandleByInviteIdOptions(::Epic::OnlineServices::Utf8String*  _InviteId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7692};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <InviteId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _InviteId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions, _InviteId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
