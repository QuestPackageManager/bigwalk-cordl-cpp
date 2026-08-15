#pragma once
// IWYU pragma private; include "Steamworks/ELobbyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ELobbyType)
// Forward declare root types
namespace Steamworks {
struct ELobbyType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ELobbyType);
DEFINE_IL2CPP_CLASS(::Steamworks::ELobbyType, "Steamworks", "ELobbyType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ELobbyType
struct CORDL_TYPE ELobbyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ELobbyType_Unwrapped
enum struct __ELobbyType_Unwrapped : int32_t {
__E_k_ELobbyTypePrivate = static_cast<int32_t>(0x0),
__E_k_ELobbyTypeFriendsOnly = static_cast<int32_t>(0x1),
__E_k_ELobbyTypePublic = static_cast<int32_t>(0x2),
__E_k_ELobbyTypeInvisible = static_cast<int32_t>(0x3),
__E_k_ELobbyTypePrivateUnique = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ELobbyType_Unwrapped () const noexcept {
return static_cast<__ELobbyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ELobbyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ELobbyType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16264};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ELobbyTypeFriendsOnly value: I32(1)
static ::Steamworks::ELobbyType const k_ELobbyTypeFriendsOnly;

/// @brief Field k_ELobbyTypeInvisible value: I32(3)
static ::Steamworks::ELobbyType const k_ELobbyTypeInvisible;

/// @brief Field k_ELobbyTypePrivate value: I32(0)
static ::Steamworks::ELobbyType const k_ELobbyTypePrivate;

/// @brief Field k_ELobbyTypePrivateUnique value: I32(4)
static ::Steamworks::ELobbyType const k_ELobbyTypePrivateUnique;

/// @brief Field k_ELobbyTypePublic value: I32(2)
static ::Steamworks::ELobbyType const k_ELobbyTypePublic;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ELobbyType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ELobbyType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
