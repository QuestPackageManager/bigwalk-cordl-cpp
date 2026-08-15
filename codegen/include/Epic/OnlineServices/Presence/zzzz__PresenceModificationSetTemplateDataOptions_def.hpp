#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetTemplateDataOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetTemplateDataOptionsValue_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PresenceModificationSetTemplateDataOptions)
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetTemplateDataOptionsValue;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetTemplateDataOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions, "Epic.OnlineServices.Presence", "PresenceModificationSetTemplateDataOptions");
// Dependencies Epic.OnlineServices.Presence.PresenceModificationSetTemplateDataOptionsValue
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetTemplateDataOptions
struct CORDL_TYPE PresenceModificationSetTemplateDataOptions {
public:
// Declarations
 __declspec(property(get=get_Key, put=set_Key)) ::Epic::OnlineServices::Utf8String*  Key;

 __declspec(property(get=get_Value, put=set_Value)) ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue  Value;

/// @brief Method get_Key, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Key() ;

/// @brief Method get_Value, addr 0x1804bda90, size 0x20, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue get_Value() ;

/// @brief Method set_Key, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Key(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Value, addr 0x1804f67c0, size 0x20, virtual false, abstract: false, final false
inline void set_Value(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetTemplateDataOptions() ;

// Ctor Parameters [CppParam { name: "_Key_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Value_k__BackingField", ty: "::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue", modifiers: "", def_value: None }]
constexpr PresenceModificationSetTemplateDataOptions(::Epic::OnlineServices::Utf8String*  _Key_k__BackingField, ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue  _Value_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8246};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <Key>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Key_k__BackingField;

/// @brief Field <Value>k__BackingField, offset: 0x8, size: 0x18, def value: None
 ::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptionsValue  _Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions, _Key_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions, _Value_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
