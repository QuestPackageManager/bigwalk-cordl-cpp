#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/PrePresentOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PrePresentOptions)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct PrePresentOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::PrePresentOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::PrePresentOptions, "Epic.OnlineServices.UI", "PrePresentOptions");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.PrePresentOptions
struct CORDL_TYPE PrePresentOptions {
public:
// Declarations
 __declspec(property(get=get_PlatformSpecificData, put=set_PlatformSpecificData)) ::System::IntPtr  PlatformSpecificData;

/// @brief Method get_PlatformSpecificData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_PlatformSpecificData() ;

/// @brief Method set_PlatformSpecificData, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_PlatformSpecificData(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PrePresentOptions() ;

// Ctor Parameters [CppParam { name: "_PlatformSpecificData_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr PrePresentOptions(::System::IntPtr  _PlatformSpecificData_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7566};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <PlatformSpecificData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _PlatformSpecificData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::PrePresentOptions, _PlatformSpecificData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::PrePresentOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
