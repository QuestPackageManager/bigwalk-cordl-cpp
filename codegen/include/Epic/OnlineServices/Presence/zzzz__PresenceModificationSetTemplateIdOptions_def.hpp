#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetTemplateIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PresenceModificationSetTemplateIdOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetTemplateIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateIdOptions, "Epic.OnlineServices.Presence", "PresenceModificationSetTemplateIdOptions");
// Dependencies 
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetTemplateIdOptions
struct CORDL_TYPE PresenceModificationSetTemplateIdOptions {
public:
// Declarations
 __declspec(property(get=get_TemplateId, put=set_TemplateId)) ::Epic::OnlineServices::Utf8String*  TemplateId;

/// @brief Method get_TemplateId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_TemplateId() ;

/// @brief Method set_TemplateId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_TemplateId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetTemplateIdOptions() ;

// Ctor Parameters [CppParam { name: "_TemplateId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr PresenceModificationSetTemplateIdOptions(::Epic::OnlineServices::Utf8String*  _TemplateId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8250};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <TemplateId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _TemplateId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateIdOptions, _TemplateId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateIdOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
