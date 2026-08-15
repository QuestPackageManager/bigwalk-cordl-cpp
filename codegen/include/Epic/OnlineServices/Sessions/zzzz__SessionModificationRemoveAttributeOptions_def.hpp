#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationRemoveAttributeOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SessionModificationRemoveAttributeOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionModificationRemoveAttributeOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions, "Epic.OnlineServices.Sessions", "SessionModificationRemoveAttributeOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionModificationRemoveAttributeOptions
struct CORDL_TYPE SessionModificationRemoveAttributeOptions {
public:
// Declarations
 __declspec(property(get=get_Key, put=set_Key)) ::Epic::OnlineServices::Utf8String*  Key;

/// @brief Method get_Key, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Key() ;

/// @brief Method set_Key, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Key(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionModificationRemoveAttributeOptions() ;

// Ctor Parameters [CppParam { name: "_Key_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr SessionModificationRemoveAttributeOptions(::Epic::OnlineServices::Utf8String*  _Key_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7819};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <Key>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Key_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions, _Key_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
