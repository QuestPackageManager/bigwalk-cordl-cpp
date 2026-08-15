#pragma once
// IWYU pragma private; include "Steamworks/EPersonaChange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EPersonaChange)
// Forward declare root types
namespace Steamworks {
struct EPersonaChange;
}
// Write type traits
MARK_VAL_T(::Steamworks::EPersonaChange);
DEFINE_IL2CPP_CLASS(::Steamworks::EPersonaChange, "Steamworks", "EPersonaChange");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EPersonaChange
struct CORDL_TYPE EPersonaChange {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EPersonaChange_Unwrapped
enum struct __EPersonaChange_Unwrapped : int32_t {
__E_k_EPersonaChangeName = static_cast<int32_t>(0x1),
__E_k_EPersonaChangeStatus = static_cast<int32_t>(0x2),
__E_k_EPersonaChangeComeOnline = static_cast<int32_t>(0x4),
__E_k_EPersonaChangeGoneOffline = static_cast<int32_t>(0x8),
__E_k_EPersonaChangeGamePlayed = static_cast<int32_t>(0x10),
__E_k_EPersonaChangeGameServer = static_cast<int32_t>(0x20),
__E_k_EPersonaChangeAvatar = static_cast<int32_t>(0x40),
__E_k_EPersonaChangeJoinedSource = static_cast<int32_t>(0x80),
__E_k_EPersonaChangeLeftSource = static_cast<int32_t>(0x100),
__E_k_EPersonaChangeRelationshipChanged = static_cast<int32_t>(0x200),
__E_k_EPersonaChangeNameFirstSet = static_cast<int32_t>(0x400),
__E_k_EPersonaChangeBroadcast = static_cast<int32_t>(0x800),
__E_k_EPersonaChangeNickname = static_cast<int32_t>(0x1000),
__E_k_EPersonaChangeSteamLevel = static_cast<int32_t>(0x2000),
__E_k_EPersonaChangeRichPresence = static_cast<int32_t>(0x4000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EPersonaChange_Unwrapped () const noexcept {
return static_cast<__EPersonaChange_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EPersonaChange() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EPersonaChange(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16246};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EPersonaChangeAvatar value: I32(64)
static ::Steamworks::EPersonaChange const k_EPersonaChangeAvatar;

/// @brief Field k_EPersonaChangeBroadcast value: I32(2048)
static ::Steamworks::EPersonaChange const k_EPersonaChangeBroadcast;

/// @brief Field k_EPersonaChangeComeOnline value: I32(4)
static ::Steamworks::EPersonaChange const k_EPersonaChangeComeOnline;

/// @brief Field k_EPersonaChangeGamePlayed value: I32(16)
static ::Steamworks::EPersonaChange const k_EPersonaChangeGamePlayed;

/// @brief Field k_EPersonaChangeGameServer value: I32(32)
static ::Steamworks::EPersonaChange const k_EPersonaChangeGameServer;

/// @brief Field k_EPersonaChangeGoneOffline value: I32(8)
static ::Steamworks::EPersonaChange const k_EPersonaChangeGoneOffline;

/// @brief Field k_EPersonaChangeJoinedSource value: I32(128)
static ::Steamworks::EPersonaChange const k_EPersonaChangeJoinedSource;

/// @brief Field k_EPersonaChangeLeftSource value: I32(256)
static ::Steamworks::EPersonaChange const k_EPersonaChangeLeftSource;

/// @brief Field k_EPersonaChangeName value: I32(1)
static ::Steamworks::EPersonaChange const k_EPersonaChangeName;

/// @brief Field k_EPersonaChangeNameFirstSet value: I32(1024)
static ::Steamworks::EPersonaChange const k_EPersonaChangeNameFirstSet;

/// @brief Field k_EPersonaChangeNickname value: I32(4096)
static ::Steamworks::EPersonaChange const k_EPersonaChangeNickname;

/// @brief Field k_EPersonaChangeRelationshipChanged value: I32(512)
static ::Steamworks::EPersonaChange const k_EPersonaChangeRelationshipChanged;

/// @brief Field k_EPersonaChangeRichPresence value: I32(16384)
static ::Steamworks::EPersonaChange const k_EPersonaChangeRichPresence;

/// @brief Field k_EPersonaChangeStatus value: I32(2)
static ::Steamworks::EPersonaChange const k_EPersonaChangeStatus;

/// @brief Field k_EPersonaChangeSteamLevel value: I32(8192)
static ::Steamworks::EPersonaChange const k_EPersonaChangeSteamLevel;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EPersonaChange, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EPersonaChange) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
