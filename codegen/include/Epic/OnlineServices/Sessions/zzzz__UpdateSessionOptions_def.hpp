#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/UpdateSessionOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UpdateSessionOptions)
namespace Epic::OnlineServices::Sessions {
class SessionModification;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct UpdateSessionOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::UpdateSessionOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::UpdateSessionOptions, "Epic.OnlineServices.Sessions", "UpdateSessionOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.UpdateSessionOptions
struct CORDL_TYPE UpdateSessionOptions {
public:
// Declarations
 __declspec(property(get=get_SessionModificationHandle, put=set_SessionModificationHandle)) ::Epic::OnlineServices::Sessions::SessionModification*  SessionModificationHandle;

/// @brief Method get_SessionModificationHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sessions::SessionModification* get_SessionModificationHandle() ;

/// @brief Method set_SessionModificationHandle, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_SessionModificationHandle(::Epic::OnlineServices::Sessions::SessionModification*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateSessionOptions() ;

// Ctor Parameters [CppParam { name: "_SessionModificationHandle_k__BackingField", ty: "::Epic::OnlineServices::Sessions::SessionModification*", modifiers: "", def_value: None }]
constexpr UpdateSessionOptions(::Epic::OnlineServices::Sessions::SessionModification*  _SessionModificationHandle_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7870};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <SessionModificationHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Sessions::SessionModification*  _SessionModificationHandle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::UpdateSessionOptions, _SessionModificationHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::UpdateSessionOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
