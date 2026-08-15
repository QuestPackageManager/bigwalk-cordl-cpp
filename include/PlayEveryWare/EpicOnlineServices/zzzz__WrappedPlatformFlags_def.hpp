#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/WrappedPlatformFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WrappedPlatformFlags)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
struct WrappedPlatformFlags;
}
// Write type traits
MARK_VAL_T(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags, "PlayEveryWare.EpicOnlineServices", "WrappedPlatformFlags");
// Dependencies 
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: true
// CS Name: PlayEveryWare.EpicOnlineServices.WrappedPlatformFlags
struct CORDL_TYPE WrappedPlatformFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WrappedPlatformFlags_Unwrapped
enum struct __WrappedPlatformFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LoadingInEditor = static_cast<int32_t>(0x1),
__E_DisableOverlay = static_cast<int32_t>(0x2),
__E_DisableSocialOverlay = static_cast<int32_t>(0x4),
__E_Reserved1 = static_cast<int32_t>(0x8),
__E_WindowsEnableOverlayD3D9 = static_cast<int32_t>(0x10),
__E_WindowsEnableOverlayD3D10 = static_cast<int32_t>(0x20),
__E_WindowsEnableOverlayOpengl = static_cast<int32_t>(0x40),
__E_ConsoleEnableOverlayAutomaticUnloading = static_cast<int32_t>(0x80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WrappedPlatformFlags_Unwrapped () const noexcept {
return static_cast<__WrappedPlatformFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WrappedPlatformFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WrappedPlatformFlags(int32_t  value__) noexcept;

/// @brief Field ConsoleEnableOverlayAutomaticUnloading value: I32(128)
static ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const ConsoleEnableOverlayAutomaticUnloading;

/// @brief Field DisableOverlay value: I32(2)
static ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const DisableOverlay;

/// @brief Field DisableSocialOverlay value: I32(4)
static ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const DisableSocialOverlay;

/// @brief Field LoadingInEditor value: I32(1)
static ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const LoadingInEditor;

/// @brief Field None value: I32(0)
static ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const None;

/// @brief Field Reserved1 value: I32(8)
static ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const Reserved1;

/// @brief Field WindowsEnableOverlayD3D10 value: I32(32)
static ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const WindowsEnableOverlayD3D10;

/// @brief Field WindowsEnableOverlayD3D9 value: I32(16)
static ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const WindowsEnableOverlayD3D9;

/// @brief Field WindowsEnableOverlayOpengl value: I32(64)
static ::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags const WindowsEnableOverlayOpengl;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18892};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::WrappedPlatformFlags) == 0x4, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
