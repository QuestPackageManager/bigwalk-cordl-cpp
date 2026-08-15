#pragma once
// IWYU pragma private; include "Steamworks/ESteamItemFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamItemFlags)
// Forward declare root types
namespace Steamworks {
struct ESteamItemFlags;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamItemFlags);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamItemFlags, "Steamworks", "ESteamItemFlags");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamItemFlags
struct CORDL_TYPE ESteamItemFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamItemFlags_Unwrapped
enum struct __ESteamItemFlags_Unwrapped : int32_t {
__E_k_ESteamItemNoTrade = static_cast<int32_t>(0x1),
__E_k_ESteamItemRemoved = static_cast<int32_t>(0x100),
__E_k_ESteamItemConsumed = static_cast<int32_t>(0x200),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamItemFlags_Unwrapped () const noexcept {
return static_cast<__ESteamItemFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamItemFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ESteamItemFlags(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16263};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamItemConsumed value: I32(512)
static ::Steamworks::ESteamItemFlags const k_ESteamItemConsumed;

/// @brief Field k_ESteamItemNoTrade value: I32(1)
static ::Steamworks::ESteamItemFlags const k_ESteamItemNoTrade;

/// @brief Field k_ESteamItemRemoved value: I32(256)
static ::Steamworks::ESteamItemFlags const k_ESteamItemRemoved;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamItemFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamItemFlags) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
