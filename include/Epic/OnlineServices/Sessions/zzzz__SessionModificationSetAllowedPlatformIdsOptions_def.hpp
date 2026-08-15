#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetAllowedPlatformIdsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionModificationSetAllowedPlatformIdsOptions)
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetAllowedPlatformIdsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions, "Epic.OnlineServices.Sessions", "SessionModificationSetAllowedPlatformIdsOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionModificationSetAllowedPlatformIdsOptions
struct CORDL_TYPE SessionModificationSetAllowedPlatformIdsOptions {
public:
// Declarations
 __declspec(property(get=get_AllowedPlatformIds, put=set_AllowedPlatformIds)) ::ArrayW<uint32_t>  AllowedPlatformIds;

/// @brief Method get_AllowedPlatformIds, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint32_t> get_AllowedPlatformIds() ;

/// @brief Method set_AllowedPlatformIds, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_AllowedPlatformIds(::ArrayW<uint32_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionModificationSetAllowedPlatformIdsOptions() ;

// Ctor Parameters [CppParam { name: "_AllowedPlatformIds_k__BackingField", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr SessionModificationSetAllowedPlatformIdsOptions(::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7821};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <AllowedPlatformIds>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions, _AllowedPlatformIds_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionModificationSetAllowedPlatformIdsOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
