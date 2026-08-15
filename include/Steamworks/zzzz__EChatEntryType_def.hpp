#pragma once
// IWYU pragma private; include "Steamworks/EChatEntryType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EChatEntryType)
// Forward declare root types
namespace Steamworks {
struct EChatEntryType;
}
// Write type traits
MARK_VAL_T(::Steamworks::EChatEntryType);
DEFINE_IL2CPP_CLASS(::Steamworks::EChatEntryType, "Steamworks", "EChatEntryType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EChatEntryType
struct CORDL_TYPE EChatEntryType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EChatEntryType_Unwrapped
enum struct __EChatEntryType_Unwrapped : int32_t {
__E_k_EChatEntryTypeInvalid = static_cast<int32_t>(0x0),
__E_k_EChatEntryTypeChatMsg = static_cast<int32_t>(0x1),
__E_k_EChatEntryTypeTyping = static_cast<int32_t>(0x2),
__E_k_EChatEntryTypeInviteGame = static_cast<int32_t>(0x3),
__E_k_EChatEntryTypeEmote = static_cast<int32_t>(0x4),
__E_k_EChatEntryTypeLeftConversation = static_cast<int32_t>(0x6),
__E_k_EChatEntryTypeEntered = static_cast<int32_t>(0x7),
__E_k_EChatEntryTypeWasKicked = static_cast<int32_t>(0x8),
__E_k_EChatEntryTypeWasBanned = static_cast<int32_t>(0x9),
__E_k_EChatEntryTypeDisconnected = static_cast<int32_t>(0xa),
__E_k_EChatEntryTypeHistoricalChat = static_cast<int32_t>(0xb),
__E_k_EChatEntryTypeLinkBlocked = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EChatEntryType_Unwrapped () const noexcept {
return static_cast<__EChatEntryType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EChatEntryType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EChatEntryType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16317};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EChatEntryTypeChatMsg value: I32(1)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeChatMsg;

/// @brief Field k_EChatEntryTypeDisconnected value: I32(10)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeDisconnected;

/// @brief Field k_EChatEntryTypeEmote value: I32(4)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeEmote;

/// @brief Field k_EChatEntryTypeEntered value: I32(7)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeEntered;

/// @brief Field k_EChatEntryTypeHistoricalChat value: I32(11)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeHistoricalChat;

/// @brief Field k_EChatEntryTypeInvalid value: I32(0)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeInvalid;

/// @brief Field k_EChatEntryTypeInviteGame value: I32(3)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeInviteGame;

/// @brief Field k_EChatEntryTypeLeftConversation value: I32(6)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeLeftConversation;

/// @brief Field k_EChatEntryTypeLinkBlocked value: I32(14)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeLinkBlocked;

/// @brief Field k_EChatEntryTypeTyping value: I32(2)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeTyping;

/// @brief Field k_EChatEntryTypeWasBanned value: I32(9)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeWasBanned;

/// @brief Field k_EChatEntryTypeWasKicked value: I32(8)
static ::Steamworks::EChatEntryType const k_EChatEntryTypeWasKicked;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EChatEntryType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EChatEntryType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
