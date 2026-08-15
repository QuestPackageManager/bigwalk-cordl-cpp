#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/SetToggleFriendsKeyOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__KeyCombination_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SetToggleFriendsKeyOptions)
namespace Epic::OnlineServices::UI {
struct KeyCombination;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct SetToggleFriendsKeyOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions, "Epic.OnlineServices.UI", "SetToggleFriendsKeyOptions");
// Dependencies Epic.OnlineServices.UI.KeyCombination
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.SetToggleFriendsKeyOptions
struct CORDL_TYPE SetToggleFriendsKeyOptions {
public:
// Declarations
 __declspec(property(get=get_KeyCombination, put=set_KeyCombination)) ::Epic::OnlineServices::UI::KeyCombination  KeyCombination;

/// @brief Method get_KeyCombination, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UI::KeyCombination get_KeyCombination() ;

/// @brief Method set_KeyCombination, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_KeyCombination(::Epic::OnlineServices::UI::KeyCombination  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetToggleFriendsKeyOptions() ;

// Ctor Parameters [CppParam { name: "_KeyCombination_k__BackingField", ty: "::Epic::OnlineServices::UI::KeyCombination", modifiers: "", def_value: None }]
constexpr SetToggleFriendsKeyOptions(::Epic::OnlineServices::UI::KeyCombination  _KeyCombination_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7576};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <KeyCombination>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::KeyCombination  _KeyCombination_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions, _KeyCombination_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::SetToggleFriendsKeyOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
