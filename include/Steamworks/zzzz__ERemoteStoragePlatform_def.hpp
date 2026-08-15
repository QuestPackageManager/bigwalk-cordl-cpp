#pragma once
// IWYU pragma private; include "Steamworks/ERemoteStoragePlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ERemoteStoragePlatform)
// Forward declare root types
namespace Steamworks {
struct ERemoteStoragePlatform;
}
// Write type traits
MARK_VAL_T(::Steamworks::ERemoteStoragePlatform);
DEFINE_IL2CPP_CLASS(::Steamworks::ERemoteStoragePlatform, "Steamworks", "ERemoteStoragePlatform");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ERemoteStoragePlatform
struct CORDL_TYPE ERemoteStoragePlatform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ERemoteStoragePlatform_Unwrapped
enum struct __ERemoteStoragePlatform_Unwrapped : int32_t {
__E_k_ERemoteStoragePlatformNone = static_cast<int32_t>(0x0),
__E_k_ERemoteStoragePlatformWindows = static_cast<int32_t>(0x1),
__E_k_ERemoteStoragePlatformOSX = static_cast<int32_t>(0x2),
__E_k_ERemoteStoragePlatformPS3 = static_cast<int32_t>(0x4),
__E_k_ERemoteStoragePlatformLinux = static_cast<int32_t>(0x8),
__E_k_ERemoteStoragePlatformSwitch = static_cast<int32_t>(0x10),
__E_k_ERemoteStoragePlatformAndroid = static_cast<int32_t>(0x20),
__E_k_ERemoteStoragePlatformIOS = static_cast<int32_t>(0x40),
__E_k_ERemoteStoragePlatformAll = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ERemoteStoragePlatform_Unwrapped () const noexcept {
return static_cast<__ERemoteStoragePlatform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ERemoteStoragePlatform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ERemoteStoragePlatform(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16278};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ERemoteStoragePlatformAll value: I32(-1)
static ::Steamworks::ERemoteStoragePlatform const k_ERemoteStoragePlatformAll;

/// @brief Field k_ERemoteStoragePlatformAndroid value: I32(32)
static ::Steamworks::ERemoteStoragePlatform const k_ERemoteStoragePlatformAndroid;

/// @brief Field k_ERemoteStoragePlatformIOS value: I32(64)
static ::Steamworks::ERemoteStoragePlatform const k_ERemoteStoragePlatformIOS;

/// @brief Field k_ERemoteStoragePlatformLinux value: I32(8)
static ::Steamworks::ERemoteStoragePlatform const k_ERemoteStoragePlatformLinux;

/// @brief Field k_ERemoteStoragePlatformNone value: I32(0)
static ::Steamworks::ERemoteStoragePlatform const k_ERemoteStoragePlatformNone;

/// @brief Field k_ERemoteStoragePlatformOSX value: I32(2)
static ::Steamworks::ERemoteStoragePlatform const k_ERemoteStoragePlatformOSX;

/// @brief Field k_ERemoteStoragePlatformPS3 value: I32(4)
static ::Steamworks::ERemoteStoragePlatform const k_ERemoteStoragePlatformPS3;

/// @brief Field k_ERemoteStoragePlatformSwitch value: I32(16)
static ::Steamworks::ERemoteStoragePlatform const k_ERemoteStoragePlatformSwitch;

/// @brief Field k_ERemoteStoragePlatformWindows value: I32(1)
static ::Steamworks::ERemoteStoragePlatform const k_ERemoteStoragePlatformWindows;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ERemoteStoragePlatform, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ERemoteStoragePlatform) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
