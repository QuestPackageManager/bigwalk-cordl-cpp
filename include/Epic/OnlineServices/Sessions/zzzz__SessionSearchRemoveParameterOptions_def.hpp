#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchRemoveParameterOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ComparisonOp_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SessionSearchRemoveParameterOptions)
namespace Epic::OnlineServices {
struct ComparisonOp;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionSearchRemoveParameterOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions, "Epic.OnlineServices.Sessions", "SessionSearchRemoveParameterOptions");
// Dependencies Epic.OnlineServices.ComparisonOp
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionSearchRemoveParameterOptions
struct CORDL_TYPE SessionSearchRemoveParameterOptions {
public:
// Declarations
 __declspec(property(get=get_ComparisonOp, put=set_ComparisonOp)) ::Epic::OnlineServices::ComparisonOp  ComparisonOp;

 __declspec(property(get=get_Key, put=set_Key)) ::Epic::OnlineServices::Utf8String*  Key;

/// @brief Method get_ComparisonOp, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ComparisonOp get_ComparisonOp() ;

/// @brief Method get_Key, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Key() ;

/// @brief Method set_ComparisonOp, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp  value) ;

/// @brief Method set_Key, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Key(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionSearchRemoveParameterOptions() ;

// Ctor Parameters [CppParam { name: "_Key_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ComparisonOp_k__BackingField", ty: "::Epic::OnlineServices::ComparisonOp", modifiers: "", def_value: None }]
constexpr SessionSearchRemoveParameterOptions(::Epic::OnlineServices::Utf8String*  _Key_k__BackingField, ::Epic::OnlineServices::ComparisonOp  _ComparisonOp_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7847};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Key>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Key_k__BackingField;

/// @brief Field <ComparisonOp>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::ComparisonOp  _ComparisonOp_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions, _Key_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions, _ComparisonOp_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
