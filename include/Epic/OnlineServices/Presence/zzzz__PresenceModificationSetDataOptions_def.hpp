#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetDataOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Presence/zzzz__DataRecord_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PresenceModificationSetDataOptions)
namespace Epic::OnlineServices::Presence {
struct DataRecord;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetDataOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions, "Epic.OnlineServices.Presence", "PresenceModificationSetDataOptions");
// Dependencies Epic.OnlineServices.Presence.DataRecord
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetDataOptions
struct CORDL_TYPE PresenceModificationSetDataOptions {
public:
// Declarations
 __declspec(property(get=get_Records, put=set_Records)) ::ArrayW<::Epic::OnlineServices::Presence::DataRecord>  Records;

/// @brief Method get_Records, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Presence::DataRecord> get_Records() ;

/// @brief Method set_Records, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Records(::ArrayW<::Epic::OnlineServices::Presence::DataRecord>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetDataOptions() ;

// Ctor Parameters [CppParam { name: "_Records_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Presence::DataRecord>", modifiers: "", def_value: None }]
constexpr PresenceModificationSetDataOptions(::ArrayW<::Epic::OnlineServices::Presence::DataRecord>  _Records_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8238};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <Records>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Presence::DataRecord>  _Records_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions, _Records_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
