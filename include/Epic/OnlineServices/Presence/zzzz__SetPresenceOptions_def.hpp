#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/SetPresenceOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SetPresenceOptions)
namespace Epic::OnlineServices::Presence {
class PresenceModification;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct SetPresenceOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::SetPresenceOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::SetPresenceOptions, "Epic.OnlineServices.Presence", "SetPresenceOptions");
// Dependencies 
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.SetPresenceOptions
struct CORDL_TYPE SetPresenceOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_PresenceModificationHandle, put=set_PresenceModificationHandle)) ::Epic::OnlineServices::Presence::PresenceModification*  PresenceModificationHandle;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_PresenceModificationHandle, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Presence::PresenceModification* get_PresenceModificationHandle() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_PresenceModificationHandle, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_PresenceModificationHandle(::Epic::OnlineServices::Presence::PresenceModification*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetPresenceOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_PresenceModificationHandle_k__BackingField", ty: "::Epic::OnlineServices::Presence::PresenceModification*", modifiers: "", def_value: None }]
constexpr SetPresenceOptions(::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Presence::PresenceModification*  _PresenceModificationHandle_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8262};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <PresenceModificationHandle>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Presence::PresenceModification*  _PresenceModificationHandle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::SetPresenceOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::SetPresenceOptions, _PresenceModificationHandle_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::SetPresenceOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
