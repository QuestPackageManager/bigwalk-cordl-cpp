#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/UpdateSessionModificationOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UpdateSessionModificationOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct UpdateSessionModificationOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions, "Epic.OnlineServices.Sessions", "UpdateSessionModificationOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.UpdateSessionModificationOptions
struct CORDL_TYPE UpdateSessionModificationOptions {
public:
// Declarations
 __declspec(property(get=get_SessionName, put=set_SessionName)) ::Epic::OnlineServices::Utf8String*  SessionName;

/// @brief Method get_SessionName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SessionName() ;

/// @brief Method set_SessionName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_SessionName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateSessionModificationOptions() ;

// Ctor Parameters [CppParam { name: "_SessionName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr UpdateSessionModificationOptions(::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7868};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <SessionName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions, _SessionName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
