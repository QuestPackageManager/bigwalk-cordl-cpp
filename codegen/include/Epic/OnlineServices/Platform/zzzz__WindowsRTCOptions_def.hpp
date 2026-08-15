#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/WindowsRTCOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Platform/zzzz__RTCBackgroundMode_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__WindowsRTCOptionsPlatformSpecificOptions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WindowsRTCOptions)
namespace Epic::OnlineServices::Platform {
struct RTCBackgroundMode;
}
namespace Epic::OnlineServices::Platform {
struct WindowsRTCOptionsPlatformSpecificOptions;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct WindowsRTCOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::WindowsRTCOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::WindowsRTCOptions, "Epic.OnlineServices.Platform", "WindowsRTCOptions");
// Dependencies Epic.OnlineServices.Platform.RTCBackgroundMode, Epic.OnlineServices.Platform.WindowsRTCOptionsPlatformSpecificOptions, System.IntPtr, System.Nullable`1<T>
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.WindowsRTCOptions
struct CORDL_TYPE WindowsRTCOptions {
public:
// Declarations
 __declspec(property(get=get_BackgroundMode, put=set_BackgroundMode)) ::Epic::OnlineServices::Platform::RTCBackgroundMode  BackgroundMode;

 __declspec(property(get=get_PlatformSpecificOptions, put=set_PlatformSpecificOptions)) ::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>  PlatformSpecificOptions;

 __declspec(property(get=get_Reserved, put=set_Reserved)) ::System::IntPtr  Reserved;

/// @brief Method get_BackgroundMode, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Platform::RTCBackgroundMode get_BackgroundMode() ;

/// @brief Method get_PlatformSpecificOptions, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions> get_PlatformSpecificOptions() ;

/// @brief Method get_Reserved, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_Reserved() ;

/// @brief Method set_BackgroundMode, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_BackgroundMode(::Epic::OnlineServices::Platform::RTCBackgroundMode  value) ;

/// @brief Method set_PlatformSpecificOptions, addr 0x1804f6890, size 0x50, virtual false, abstract: false, final false
inline void set_PlatformSpecificOptions(::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>  value) ;

/// @brief Method set_Reserved, addr 0x1803bda70, size 0x10, virtual false, abstract: false, final false
inline void set_Reserved(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr WindowsRTCOptions() ;

// Ctor Parameters [CppParam { name: "_PlatformSpecificOptions_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>", modifiers: "", def_value: None }, CppParam { name: "_BackgroundMode_k__BackingField", ty: "::Epic::OnlineServices::Platform::RTCBackgroundMode", modifiers: "", def_value: None }, CppParam { name: "_Reserved_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr WindowsRTCOptions(::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>  _PlatformSpecificOptions_k__BackingField, ::Epic::OnlineServices::Platform::RTCBackgroundMode  _BackgroundMode_k__BackingField, ::System::IntPtr  _Reserved_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8366};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <PlatformSpecificOptions>k__BackingField, offset: 0x0, size: 0x10, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions>  _PlatformSpecificOptions_k__BackingField;

/// @brief Field <BackgroundMode>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Platform::RTCBackgroundMode  _BackgroundMode_k__BackingField;

/// @brief Field <Reserved>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  _Reserved_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsRTCOptions, _PlatformSpecificOptions_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsRTCOptions, _BackgroundMode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::WindowsRTCOptions, _Reserved_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::WindowsRTCOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
