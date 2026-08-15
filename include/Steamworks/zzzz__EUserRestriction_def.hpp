#pragma once
// IWYU pragma private; include "Steamworks/EUserRestriction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EUserRestriction)
// Forward declare root types
namespace Steamworks {
struct EUserRestriction;
}
// Write type traits
MARK_VAL_T(::Steamworks::EUserRestriction);
DEFINE_IL2CPP_CLASS(::Steamworks::EUserRestriction, "Steamworks", "EUserRestriction");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EUserRestriction
struct CORDL_TYPE EUserRestriction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EUserRestriction_Unwrapped
enum struct __EUserRestriction_Unwrapped : int32_t {
__E_k_nUserRestrictionNone = static_cast<int32_t>(0x0),
__E_k_nUserRestrictionUnknown = static_cast<int32_t>(0x1),
__E_k_nUserRestrictionAnyChat = static_cast<int32_t>(0x2),
__E_k_nUserRestrictionVoiceChat = static_cast<int32_t>(0x4),
__E_k_nUserRestrictionGroupChat = static_cast<int32_t>(0x8),
__E_k_nUserRestrictionRating = static_cast<int32_t>(0x10),
__E_k_nUserRestrictionGameInvites = static_cast<int32_t>(0x20),
__E_k_nUserRestrictionTrading = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EUserRestriction_Unwrapped () const noexcept {
return static_cast<__EUserRestriction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EUserRestriction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EUserRestriction(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16243};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_nUserRestrictionAnyChat value: I32(2)
static ::Steamworks::EUserRestriction const k_nUserRestrictionAnyChat;

/// @brief Field k_nUserRestrictionGameInvites value: I32(32)
static ::Steamworks::EUserRestriction const k_nUserRestrictionGameInvites;

/// @brief Field k_nUserRestrictionGroupChat value: I32(8)
static ::Steamworks::EUserRestriction const k_nUserRestrictionGroupChat;

/// @brief Field k_nUserRestrictionNone value: I32(0)
static ::Steamworks::EUserRestriction const k_nUserRestrictionNone;

/// @brief Field k_nUserRestrictionRating value: I32(16)
static ::Steamworks::EUserRestriction const k_nUserRestrictionRating;

/// @brief Field k_nUserRestrictionTrading value: I32(64)
static ::Steamworks::EUserRestriction const k_nUserRestrictionTrading;

/// @brief Field k_nUserRestrictionUnknown value: I32(1)
static ::Steamworks::EUserRestriction const k_nUserRestrictionUnknown;

/// @brief Field k_nUserRestrictionVoiceChat value: I32(4)
static ::Steamworks::EUserRestriction const k_nUserRestrictionVoiceChat;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EUserRestriction, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EUserRestriction) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
