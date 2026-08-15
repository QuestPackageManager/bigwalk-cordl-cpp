#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/WindowsRTCOptionsPlatformSpecificOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(WindowsRTCOptionsPlatformSpecificOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct WindowsRTCOptionsPlatformSpecificOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions, "Epic.OnlineServices.Platform", "WindowsRTCOptionsPlatformSpecificOptions");
// Dependencies 
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.WindowsRTCOptionsPlatformSpecificOptions
struct CORDL_TYPE WindowsRTCOptionsPlatformSpecificOptions {
public:
// Declarations
 __declspec(property(get=get_XAudio29DllPath, put=set_XAudio29DllPath)) ::Epic::OnlineServices::Utf8String*  XAudio29DllPath;

/// @brief Method get_XAudio29DllPath, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_XAudio29DllPath() ;

/// @brief Method set_XAudio29DllPath, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_XAudio29DllPath(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr WindowsRTCOptionsPlatformSpecificOptions() ;

// Ctor Parameters [CppParam { name: "_XAudio29DllPath_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr WindowsRTCOptionsPlatformSpecificOptions(::Epic::OnlineServices::Utf8String*  _XAudio29DllPath_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8368};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <XAudio29DllPath>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _XAudio29DllPath_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions, _XAudio29DllPath_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
