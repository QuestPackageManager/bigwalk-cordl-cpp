#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/SetDisplayPreferenceOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/UI/zzzz__NotificationLocation_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SetDisplayPreferenceOptions)
namespace Epic::OnlineServices::UI {
struct NotificationLocation;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct SetDisplayPreferenceOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::SetDisplayPreferenceOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::SetDisplayPreferenceOptions, "Epic.OnlineServices.UI", "SetDisplayPreferenceOptions");
// Dependencies Epic.OnlineServices.UI.NotificationLocation
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.SetDisplayPreferenceOptions
struct CORDL_TYPE SetDisplayPreferenceOptions {
public:
// Declarations
 __declspec(property(get=get_NotificationLocation, put=set_NotificationLocation)) ::Epic::OnlineServices::UI::NotificationLocation  NotificationLocation;

/// @brief Method get_NotificationLocation, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::UI::NotificationLocation get_NotificationLocation() ;

/// @brief Method set_NotificationLocation, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_NotificationLocation(::Epic::OnlineServices::UI::NotificationLocation  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetDisplayPreferenceOptions() ;

// Ctor Parameters [CppParam { name: "_NotificationLocation_k__BackingField", ty: "::Epic::OnlineServices::UI::NotificationLocation", modifiers: "", def_value: None }]
constexpr SetDisplayPreferenceOptions(::Epic::OnlineServices::UI::NotificationLocation  _NotificationLocation_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7572};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <NotificationLocation>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::UI::NotificationLocation  _NotificationLocation_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::SetDisplayPreferenceOptions, _NotificationLocation_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::SetDisplayPreferenceOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
