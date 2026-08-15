#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/WindowsSteamOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamOptionsInitOptions_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WindowsSteamOptions)
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformManagementFlags;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct WindowsSteamOptionsInitOptions;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
struct WindowsSteamOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions, "Epic.OnlineServices.IntegratedPlatform", "WindowsSteamOptions");
// Dependencies Epic.OnlineServices.IntegratedPlatform.IntegratedPlatformManagementFlags, Epic.OnlineServices.IntegratedPlatform.WindowsSteamOptionsInitOptions, System.Nullable`1<T>
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.WindowsSteamOptions
struct CORDL_TYPE WindowsSteamOptions {
public:
// Declarations
 __declspec(property(get=get_Flags, put=set_Flags)) ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  Flags;

 __declspec(property(get=get_InitOptions, put=set_InitOptions)) ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>  InitOptions;

 __declspec(property(get=get_Type, put=set_Type)) ::Epic::OnlineServices::Utf8String*  Type;

/// @brief Method get_Flags, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags get_Flags() ;

/// @brief Method get_InitOptions, addr 0x18035c980, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions> get_InitOptions() ;

/// @brief Method get_Type, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Type() ;

/// @brief Method set_Flags, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Flags(::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  value) ;

/// @brief Method set_InitOptions, addr 0x180511660, size 0xf0, virtual false, abstract: false, final false
inline void set_InitOptions(::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>  value) ;

/// @brief Method set_Type, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Type(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr WindowsSteamOptions() ;

// Ctor Parameters [CppParam { name: "_Type_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Flags_k__BackingField", ty: "::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags", modifiers: "", def_value: None }, CppParam { name: "_InitOptions_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>", modifiers: "", def_value: None }]
constexpr WindowsSteamOptions(::Epic::OnlineServices::Utf8String*  _Type_k__BackingField, ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  _Flags_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>  _InitOptions_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8829};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <Type>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Type_k__BackingField;

/// @brief Field <Flags>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  _Flags_k__BackingField;

/// @brief Field <InitOptions>k__BackingField, offset: 0x10, size: 0x28, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>  _InitOptions_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions, _Type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions, _Flags_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions, _InitOptions_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
