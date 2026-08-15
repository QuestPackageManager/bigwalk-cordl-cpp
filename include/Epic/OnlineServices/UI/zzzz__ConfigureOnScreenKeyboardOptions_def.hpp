#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/ConfigureOnScreenKeyboardOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardBehavior_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfigureOnScreenKeyboardOptions)
namespace Epic::OnlineServices::UI {
struct OnScreenKeyboardBehavior;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct ConfigureOnScreenKeyboardOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions, "Epic.OnlineServices.UI", "ConfigureOnScreenKeyboardOptions");
// Dependencies Epic.OnlineServices.UI.OnScreenKeyboardBehavior
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.ConfigureOnScreenKeyboardOptions
struct CORDL_TYPE ConfigureOnScreenKeyboardOptions {
public:
// Declarations
 __declspec(property(get=get_Behavior, put=set_Behavior)) ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  Behavior;

 __declspec(property(get=get_IsDeviceChecksEnabled, put=set_IsDeviceChecksEnabled)) bool  IsDeviceChecksEnabled;

/// @brief Method get_Behavior, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior get_Behavior() ;

/// @brief Method get_IsDeviceChecksEnabled, addr 0x1804bda20, size 0x10, virtual false, abstract: false, final false
inline bool get_IsDeviceChecksEnabled() ;

/// @brief Method set_Behavior, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_Behavior(::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  value) ;

/// @brief Method set_IsDeviceChecksEnabled, addr 0x1804bda30, size 0x10, virtual false, abstract: false, final false
inline void set_IsDeviceChecksEnabled(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ConfigureOnScreenKeyboardOptions() ;

// Ctor Parameters [CppParam { name: "_Behavior_k__BackingField", ty: "::Epic::OnlineServices::UI::OnScreenKeyboardBehavior", modifiers: "", def_value: None }, CppParam { name: "_IsDeviceChecksEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr ConfigureOnScreenKeyboardOptions(::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  _Behavior_k__BackingField, bool  _IsDeviceChecksEnabled_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7509};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <Behavior>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  _Behavior_k__BackingField;

/// @brief Field <IsDeviceChecksEnabled>k__BackingField, offset: 0x4, size: 0x1, def value: None
 bool  _IsDeviceChecksEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions, _Behavior_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions, _IsDeviceChecksEnabled_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
