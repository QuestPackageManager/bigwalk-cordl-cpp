#pragma once
// IWYU pragma private; include "Steamworks/ERemoteStoragePublishedFileVisibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ERemoteStoragePublishedFileVisibility)
// Forward declare root types
namespace Steamworks {
struct ERemoteStoragePublishedFileVisibility;
}
// Write type traits
MARK_VAL_T(::Steamworks::ERemoteStoragePublishedFileVisibility);
DEFINE_IL2CPP_CLASS(::Steamworks::ERemoteStoragePublishedFileVisibility, "Steamworks", "ERemoteStoragePublishedFileVisibility");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ERemoteStoragePublishedFileVisibility
struct CORDL_TYPE ERemoteStoragePublishedFileVisibility {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ERemoteStoragePublishedFileVisibility_Unwrapped
enum struct __ERemoteStoragePublishedFileVisibility_Unwrapped : int32_t {
__E_k_ERemoteStoragePublishedFileVisibilityPublic = static_cast<int32_t>(0x0),
__E_k_ERemoteStoragePublishedFileVisibilityFriendsOnly = static_cast<int32_t>(0x1),
__E_k_ERemoteStoragePublishedFileVisibilityPrivate = static_cast<int32_t>(0x2),
__E_k_ERemoteStoragePublishedFileVisibilityUnlisted = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ERemoteStoragePublishedFileVisibility_Unwrapped () const noexcept {
return static_cast<__ERemoteStoragePublishedFileVisibility_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ERemoteStoragePublishedFileVisibility() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ERemoteStoragePublishedFileVisibility(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16279};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ERemoteStoragePublishedFileVisibilityFriendsOnly value: I32(1)
static ::Steamworks::ERemoteStoragePublishedFileVisibility const k_ERemoteStoragePublishedFileVisibilityFriendsOnly;

/// @brief Field k_ERemoteStoragePublishedFileVisibilityPrivate value: I32(2)
static ::Steamworks::ERemoteStoragePublishedFileVisibility const k_ERemoteStoragePublishedFileVisibilityPrivate;

/// @brief Field k_ERemoteStoragePublishedFileVisibilityPublic value: I32(0)
static ::Steamworks::ERemoteStoragePublishedFileVisibility const k_ERemoteStoragePublishedFileVisibilityPublic;

/// @brief Field k_ERemoteStoragePublishedFileVisibilityUnlisted value: I32(3)
static ::Steamworks::ERemoteStoragePublishedFileVisibility const k_ERemoteStoragePublishedFileVisibilityUnlisted;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ERemoteStoragePublishedFileVisibility, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ERemoteStoragePublishedFileVisibility) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
