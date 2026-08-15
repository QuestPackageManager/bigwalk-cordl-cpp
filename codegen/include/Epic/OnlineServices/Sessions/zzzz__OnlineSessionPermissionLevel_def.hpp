#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnlineSessionPermissionLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnlineSessionPermissionLevel)
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct OnlineSessionPermissionLevel;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel, "Epic.OnlineServices.Sessions", "OnlineSessionPermissionLevel");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.OnlineSessionPermissionLevel
struct CORDL_TYPE OnlineSessionPermissionLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OnlineSessionPermissionLevel_Unwrapped
enum struct __OnlineSessionPermissionLevel_Unwrapped : int32_t {
__E_PublicAdvertised = static_cast<int32_t>(0x0),
__E_JoinViaPresence = static_cast<int32_t>(0x1),
__E_InviteOnly = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OnlineSessionPermissionLevel_Unwrapped () const noexcept {
return static_cast<__OnlineSessionPermissionLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OnlineSessionPermissionLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OnlineSessionPermissionLevel(int32_t  value__) noexcept;

/// @brief Field InviteOnly value: I32(2)
static ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel const InviteOnly;

/// @brief Field JoinViaPresence value: I32(1)
static ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel const JoinViaPresence;

/// @brief Field PublicAdvertised value: I32(0)
static ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel const PublicAdvertised;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7774};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
