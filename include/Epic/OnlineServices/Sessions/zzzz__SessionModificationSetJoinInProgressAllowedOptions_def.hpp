#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetJoinInProgressAllowedOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SessionModificationSetJoinInProgressAllowedOptions)
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionModificationSetJoinInProgressAllowedOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions, "Epic.OnlineServices.Sessions", "SessionModificationSetJoinInProgressAllowedOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionModificationSetJoinInProgressAllowedOptions
struct CORDL_TYPE SessionModificationSetJoinInProgressAllowedOptions {
public:
// Declarations
 __declspec(property(get=get_AllowJoinInProgress, put=set_AllowJoinInProgress)) bool  AllowJoinInProgress;

/// @brief Method get_AllowJoinInProgress, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline bool get_AllowJoinInProgress() ;

/// @brief Method set_AllowJoinInProgress, addr 0x1804bda60, size 0x10, virtual false, abstract: false, final false
inline void set_AllowJoinInProgress(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionModificationSetJoinInProgressAllowedOptions() ;

// Ctor Parameters [CppParam { name: "_AllowJoinInProgress_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr SessionModificationSetJoinInProgressAllowedOptions(bool  _AllowJoinInProgress_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7829};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field <AllowJoinInProgress>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _AllowJoinInProgress_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions, _AllowJoinInProgress_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions) == 0x1, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
