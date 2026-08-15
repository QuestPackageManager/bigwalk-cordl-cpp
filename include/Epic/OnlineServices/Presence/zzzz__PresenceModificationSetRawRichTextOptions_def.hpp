#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetRawRichTextOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PresenceModificationSetRawRichTextOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetRawRichTextOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions, "Epic.OnlineServices.Presence", "PresenceModificationSetRawRichTextOptions");
// Dependencies 
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetRawRichTextOptions
struct CORDL_TYPE PresenceModificationSetRawRichTextOptions {
public:
// Declarations
 __declspec(property(get=get_RichText, put=set_RichText)) ::Epic::OnlineServices::Utf8String*  RichText;

/// @brief Method get_RichText, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RichText() ;

/// @brief Method set_RichText, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_RichText(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetRawRichTextOptions() ;

// Ctor Parameters [CppParam { name: "_RichText_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr PresenceModificationSetRawRichTextOptions(::Epic::OnlineServices::Utf8String*  _RichText_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8242};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <RichText>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RichText_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions, _RichText_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
