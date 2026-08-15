#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/CopySessionHandleForPresenceOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CopySessionHandleForPresenceOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct CopySessionHandleForPresenceOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions, "Epic.OnlineServices.Sessions", "CopySessionHandleForPresenceOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.CopySessionHandleForPresenceOptions
struct CORDL_TYPE CopySessionHandleForPresenceOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopySessionHandleForPresenceOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr CopySessionHandleForPresenceOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7696};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
