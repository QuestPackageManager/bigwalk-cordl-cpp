#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/SetToggleFriendsButtonOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SetToggleFriendsButtonOptions)
namespace Epic::OnlineServices::UI {
struct InputStateButtonFlags;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct SetToggleFriendsButtonOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions, "Epic.OnlineServices.UI", "SetToggleFriendsButtonOptions");
// Dependencies Epic.OnlineServices.UI.InputStateButtonFlags
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.SetToggleFriendsButtonOptions
struct CORDL_TYPE SetToggleFriendsButtonOptions {
public:
// Declarations
 __declspec(property(get=get_ButtonCombination, put=set_ButtonCombination)) ::Epic::OnlineServices::UI::InputStateButtonFlags  ButtonCombination;

/// @brief Method get_ButtonCombination, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UI::InputStateButtonFlags get_ButtonCombination() ;

/// @brief Method set_ButtonCombination, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_ButtonCombination(::Epic::OnlineServices::UI::InputStateButtonFlags  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetToggleFriendsButtonOptions() ;

// Ctor Parameters [CppParam { name: "_ButtonCombination_k__BackingField", ty: "::Epic::OnlineServices::UI::InputStateButtonFlags", modifiers: "", def_value: None }]
constexpr SetToggleFriendsButtonOptions(::Epic::OnlineServices::UI::InputStateButtonFlags  _ButtonCombination_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7574};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <ButtonCombination>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::InputStateButtonFlags  _ButtonCombination_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions, _ButtonCombination_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::SetToggleFriendsButtonOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
