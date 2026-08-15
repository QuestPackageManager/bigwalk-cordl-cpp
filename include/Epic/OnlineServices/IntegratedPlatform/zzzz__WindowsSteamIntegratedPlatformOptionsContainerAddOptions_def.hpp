#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/WindowsSteamIntegratedPlatformOptionsContainerAddOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamOptions_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WindowsSteamIntegratedPlatformOptionsContainerAddOptions)
namespace Epic::OnlineServices::IntegratedPlatform {
struct WindowsSteamOptions;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
struct WindowsSteamIntegratedPlatformOptionsContainerAddOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions, "Epic.OnlineServices.IntegratedPlatform", "WindowsSteamIntegratedPlatformOptionsContainerAddOptions");
// Dependencies Epic.OnlineServices.IntegratedPlatform.WindowsSteamOptions, System.Nullable`1<T>
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.WindowsSteamIntegratedPlatformOptionsContainerAddOptions
struct CORDL_TYPE WindowsSteamIntegratedPlatformOptionsContainerAddOptions {
public:
// Declarations
 __declspec(property(get=get_Options, put=set_Options)) ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>  Options;

/// @brief Method get_Options, addr 0x180511600, size 0x30, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions> get_Options() ;

/// @brief Method set_Options, addr 0x180511630, size 0x30, virtual false, abstract: false, final false
inline void set_Options(::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr WindowsSteamIntegratedPlatformOptionsContainerAddOptions() ;

// Ctor Parameters [CppParam { name: "_Options_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>", modifiers: "", def_value: None }]
constexpr WindowsSteamIntegratedPlatformOptionsContainerAddOptions(::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>  _Options_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8827};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <Options>k__BackingField, offset: 0x0, size: 0x40, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>  _Options_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions, _Options_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions) == 0x40, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
