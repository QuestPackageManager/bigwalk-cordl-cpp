#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/PauseSocialOverlayOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PauseSocialOverlayOptions)
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct PauseSocialOverlayOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::PauseSocialOverlayOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::PauseSocialOverlayOptions, "Epic.OnlineServices.UI", "PauseSocialOverlayOptions");
// Dependencies 
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.PauseSocialOverlayOptions
struct CORDL_TYPE PauseSocialOverlayOptions {
public:
// Declarations
 __declspec(property(get=get_IsPaused, put=set_IsPaused)) bool  IsPaused;

/// @brief Method get_IsPaused, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline bool get_IsPaused() ;

/// @brief Method set_IsPaused, addr 0x1804bda60, size 0x10, virtual false, abstract: false, final false
inline void set_IsPaused(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PauseSocialOverlayOptions() ;

// Ctor Parameters [CppParam { name: "_IsPaused_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr PauseSocialOverlayOptions(bool  _IsPaused_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7564};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field <IsPaused>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _IsPaused_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::PauseSocialOverlayOptions, _IsPaused_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::PauseSocialOverlayOptions) == 0x1, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
