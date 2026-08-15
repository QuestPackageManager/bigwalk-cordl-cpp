#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetStatusOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Presence/zzzz__Status_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PresenceModificationSetStatusOptions)
namespace Epic::OnlineServices::Presence {
struct Status;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetStatusOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions, "Epic.OnlineServices.Presence", "PresenceModificationSetStatusOptions");
// Dependencies Epic.OnlineServices.Presence.Status
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetStatusOptions
struct CORDL_TYPE PresenceModificationSetStatusOptions {
public:
// Declarations
 __declspec(property(get=get_Status, put=set_Status)) ::Epic::OnlineServices::Presence::Status  Status;

/// @brief Method get_Status, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Presence::Status get_Status() ;

/// @brief Method set_Status, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_Status(::Epic::OnlineServices::Presence::Status  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetStatusOptions() ;

// Ctor Parameters [CppParam { name: "_Status_k__BackingField", ty: "::Epic::OnlineServices::Presence::Status", modifiers: "", def_value: None }]
constexpr PresenceModificationSetStatusOptions(::Epic::OnlineServices::Presence::Status  _Status_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8244};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <Status>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Presence::Status  _Status_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions, _Status_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
