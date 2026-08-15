#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/RTCOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Platform/zzzz__RTCBackgroundMode_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RTCOptions)
namespace Epic::OnlineServices::Platform {
struct RTCBackgroundMode;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct RTCOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::RTCOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::RTCOptions, "Epic.OnlineServices.Platform", "RTCOptions");
// Dependencies Epic.OnlineServices.Platform.RTCBackgroundMode, System.IntPtr
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.RTCOptions
struct CORDL_TYPE RTCOptions {
public:
// Declarations
 __declspec(property(get=get_BackgroundMode, put=set_BackgroundMode)) ::Epic::OnlineServices::Platform::RTCBackgroundMode  BackgroundMode;

 __declspec(property(get=get_PlatformSpecificOptions, put=set_PlatformSpecificOptions)) ::System::IntPtr  PlatformSpecificOptions;

 __declspec(property(get=get_Reserved, put=set_Reserved)) ::System::IntPtr  Reserved;

/// @brief Method get_BackgroundMode, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Platform::RTCBackgroundMode get_BackgroundMode() ;

/// @brief Method get_PlatformSpecificOptions, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_PlatformSpecificOptions() ;

/// @brief Method get_Reserved, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_Reserved() ;

/// @brief Method set_BackgroundMode, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_BackgroundMode(::Epic::OnlineServices::Platform::RTCBackgroundMode  value) ;

/// @brief Method set_PlatformSpecificOptions, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_PlatformSpecificOptions(::System::IntPtr  value) ;

/// @brief Method set_Reserved, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void set_Reserved(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RTCOptions() ;

// Ctor Parameters [CppParam { name: "_PlatformSpecificOptions_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_BackgroundMode_k__BackingField", ty: "::Epic::OnlineServices::Platform::RTCBackgroundMode", modifiers: "", def_value: None }, CppParam { name: "_Reserved_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr RTCOptions(::System::IntPtr  _PlatformSpecificOptions_k__BackingField, ::Epic::OnlineServices::Platform::RTCBackgroundMode  _BackgroundMode_k__BackingField, ::System::IntPtr  _Reserved_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8360};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <PlatformSpecificOptions>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _PlatformSpecificOptions_k__BackingField;

/// @brief Field <BackgroundMode>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::Platform::RTCBackgroundMode  _BackgroundMode_k__BackingField;

/// @brief Field <Reserved>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  _Reserved_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::RTCOptions, _PlatformSpecificOptions_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::RTCOptions, _BackgroundMode_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Platform::RTCOptions, _Reserved_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::RTCOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
