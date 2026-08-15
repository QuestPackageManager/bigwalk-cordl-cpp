#pragma once
// IWYU pragma private; include "Steamworks/EChatSteamIDInstanceFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EChatSteamIDInstanceFlags)
// Forward declare root types
namespace Steamworks {
struct EChatSteamIDInstanceFlags;
}
// Write type traits
MARK_VAL_T(::Steamworks::EChatSteamIDInstanceFlags);
DEFINE_IL2CPP_CLASS(::Steamworks::EChatSteamIDInstanceFlags, "Steamworks", "EChatSteamIDInstanceFlags");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EChatSteamIDInstanceFlags
struct CORDL_TYPE EChatSteamIDInstanceFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EChatSteamIDInstanceFlags_Unwrapped
enum struct __EChatSteamIDInstanceFlags_Unwrapped : int32_t {
__E_k_EChatAccountInstanceMask = static_cast<int32_t>(0xfff),
__E_k_EChatInstanceFlagClan = static_cast<int32_t>(0x80000),
__E_k_EChatInstanceFlagLobby = static_cast<int32_t>(0x40000),
__E_k_EChatInstanceFlagMMSLobby = static_cast<int32_t>(0x20000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EChatSteamIDInstanceFlags_Unwrapped () const noexcept {
return static_cast<__EChatSteamIDInstanceFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EChatSteamIDInstanceFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EChatSteamIDInstanceFlags(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16319};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EChatAccountInstanceMask value: I32(4095)
static ::Steamworks::EChatSteamIDInstanceFlags const k_EChatAccountInstanceMask;

/// @brief Field k_EChatInstanceFlagClan value: I32(524288)
static ::Steamworks::EChatSteamIDInstanceFlags const k_EChatInstanceFlagClan;

/// @brief Field k_EChatInstanceFlagLobby value: I32(262144)
static ::Steamworks::EChatSteamIDInstanceFlags const k_EChatInstanceFlagLobby;

/// @brief Field k_EChatInstanceFlagMMSLobby value: I32(131072)
static ::Steamworks::EChatSteamIDInstanceFlags const k_EChatInstanceFlagMMSLobby;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EChatSteamIDInstanceFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EChatSteamIDInstanceFlags) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
