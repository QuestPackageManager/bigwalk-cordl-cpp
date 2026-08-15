#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsCopySessionAttributeByKeyOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SessionDetailsCopySessionAttributeByKeyOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsCopySessionAttributeByKeyOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions, "Epic.OnlineServices.Sessions", "SessionDetailsCopySessionAttributeByKeyOptions");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionDetailsCopySessionAttributeByKeyOptions
struct CORDL_TYPE SessionDetailsCopySessionAttributeByKeyOptions {
public:
// Declarations
 __declspec(property(get=get_AttrKey, put=set_AttrKey)) ::Epic::OnlineServices::Utf8String*  AttrKey;

/// @brief Method get_AttrKey, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AttrKey() ;

/// @brief Method set_AttrKey, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_AttrKey(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionDetailsCopySessionAttributeByKeyOptions() ;

// Ctor Parameters [CppParam { name: "_AttrKey_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr SessionDetailsCopySessionAttributeByKeyOptions(::Epic::OnlineServices::Utf8String*  _AttrKey_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7802};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <AttrKey>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AttrKey_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions, _AttrKey_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
