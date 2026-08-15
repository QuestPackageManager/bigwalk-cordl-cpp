#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/PlatformFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformFlags)
// Forward declare root types
namespace Epic::OnlineServices::Platform {
struct PlatformFlags;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Platform::PlatformFlags);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Platform::PlatformFlags, "Epic.OnlineServices.Platform", "PlatformFlags");
// Dependencies 
namespace Epic::OnlineServices::Platform {
// Is value type: true
// CS Name: Epic.OnlineServices.Platform.PlatformFlags
struct CORDL_TYPE PlatformFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint64_t;

/// @brief Nested struct __PlatformFlags_Unwrapped
enum struct __PlatformFlags_Unwrapped : uint64_t {
__E_None = static_cast<uint64_t>(0x0u),
__E_LoadingInEditor = static_cast<uint64_t>(0x1u),
__E_DisableOverlay = static_cast<uint64_t>(0x2u),
__E_DisableSocialOverlay = static_cast<uint64_t>(0x4u),
__E_Reserved1 = static_cast<uint64_t>(0x8u),
__E_WindowsEnableOverlayD3D9 = static_cast<uint64_t>(0x10u),
__E_WindowsEnableOverlayD3D10 = static_cast<uint64_t>(0x20u),
__E_WindowsEnableOverlayOpengl = static_cast<uint64_t>(0x40u),
__E_ConsoleEnableOverlayAutomaticUnloading = static_cast<uint64_t>(0x80u),
__E_EnableOverlayDebugLogging = static_cast<uint64_t>(0x100u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlatformFlags_Unwrapped () const noexcept {
return static_cast<__PlatformFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint64_t () const noexcept {
return static_cast<uint64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlatformFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr PlatformFlags(uint64_t  value__) noexcept;

/// @brief Field ConsoleEnableOverlayAutomaticUnloading value: U64(128)
static ::Epic::OnlineServices::Platform::PlatformFlags const ConsoleEnableOverlayAutomaticUnloading;

/// @brief Field DisableOverlay value: U64(2)
static ::Epic::OnlineServices::Platform::PlatformFlags const DisableOverlay;

/// @brief Field DisableSocialOverlay value: U64(4)
static ::Epic::OnlineServices::Platform::PlatformFlags const DisableSocialOverlay;

/// @brief Field EnableOverlayDebugLogging value: U64(256)
static ::Epic::OnlineServices::Platform::PlatformFlags const EnableOverlayDebugLogging;

/// @brief Field LoadingInEditor value: U64(1)
static ::Epic::OnlineServices::Platform::PlatformFlags const LoadingInEditor;

/// @brief Field None value: U64(0)
static ::Epic::OnlineServices::Platform::PlatformFlags const None;

/// @brief Field Reserved1 value: U64(8)
static ::Epic::OnlineServices::Platform::PlatformFlags const Reserved1;

/// @brief Field WindowsEnableOverlayD3D10 value: U64(32)
static ::Epic::OnlineServices::Platform::PlatformFlags const WindowsEnableOverlayD3D10;

/// @brief Field WindowsEnableOverlayD3D9 value: U64(16)
static ::Epic::OnlineServices::Platform::PlatformFlags const WindowsEnableOverlayD3D9;

/// @brief Field WindowsEnableOverlayOpengl value: U64(64)
static ::Epic::OnlineServices::Platform::PlatformFlags const WindowsEnableOverlayOpengl;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8357};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Size padding 0x8 - 0x10 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// @brief Field value__, offset: 0x8, size: 0x8, def value: None
 uint64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Platform::PlatformFlags, value__) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Platform::PlatformFlags) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Platform
