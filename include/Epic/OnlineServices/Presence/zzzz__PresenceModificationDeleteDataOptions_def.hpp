#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationDeleteDataOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationDataRecordId_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PresenceModificationDeleteDataOptions)
namespace Epic::OnlineServices::Presence {
struct PresenceModificationDataRecordId;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct PresenceModificationDeleteDataOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptions, "Epic.OnlineServices.Presence", "PresenceModificationDeleteDataOptions");
// Dependencies Epic.OnlineServices.Presence.PresenceModificationDataRecordId
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationDeleteDataOptions
struct CORDL_TYPE PresenceModificationDeleteDataOptions {
public:
// Declarations
 __declspec(property(get=get_Records, put=set_Records)) ::ArrayW<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>  Records;

/// @brief Method get_Records, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId> get_Records() ;

/// @brief Method set_Records, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Records(::ArrayW<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationDeleteDataOptions() ;

// Ctor Parameters [CppParam { name: "_Records_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>", modifiers: "", def_value: None }]
constexpr PresenceModificationDeleteDataOptions(::ArrayW<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>  _Records_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8236};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <Records>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId>  _Records_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptions, _Records_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
