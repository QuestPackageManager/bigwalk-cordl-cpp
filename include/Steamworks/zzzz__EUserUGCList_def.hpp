#pragma once
// IWYU pragma private; include "Steamworks/EUserUGCList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EUserUGCList)
// Forward declare root types
namespace Steamworks {
struct EUserUGCList;
}
// Write type traits
MARK_VAL_T(::Steamworks::EUserUGCList);
DEFINE_IL2CPP_CLASS(::Steamworks::EUserUGCList, "Steamworks", "EUserUGCList");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EUserUGCList
struct CORDL_TYPE EUserUGCList {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EUserUGCList_Unwrapped
enum struct __EUserUGCList_Unwrapped : int32_t {
__E_k_EUserUGCList_Published = static_cast<int32_t>(0x0),
__E_k_EUserUGCList_VotedOn = static_cast<int32_t>(0x1),
__E_k_EUserUGCList_VotedUp = static_cast<int32_t>(0x2),
__E_k_EUserUGCList_VotedDown = static_cast<int32_t>(0x3),
__E_k_EUserUGCList_WillVoteLater = static_cast<int32_t>(0x4),
__E_k_EUserUGCList_Favorited = static_cast<int32_t>(0x5),
__E_k_EUserUGCList_Subscribed = static_cast<int32_t>(0x6),
__E_k_EUserUGCList_UsedOrPlayed = static_cast<int32_t>(0x7),
__E_k_EUserUGCList_Followed = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EUserUGCList_Unwrapped () const noexcept {
return static_cast<__EUserUGCList_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EUserUGCList() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EUserUGCList(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16290};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EUserUGCList_Favorited value: I32(5)
static ::Steamworks::EUserUGCList const k_EUserUGCList_Favorited;

/// @brief Field k_EUserUGCList_Followed value: I32(8)
static ::Steamworks::EUserUGCList const k_EUserUGCList_Followed;

/// @brief Field k_EUserUGCList_Published value: I32(0)
static ::Steamworks::EUserUGCList const k_EUserUGCList_Published;

/// @brief Field k_EUserUGCList_Subscribed value: I32(6)
static ::Steamworks::EUserUGCList const k_EUserUGCList_Subscribed;

/// @brief Field k_EUserUGCList_UsedOrPlayed value: I32(7)
static ::Steamworks::EUserUGCList const k_EUserUGCList_UsedOrPlayed;

/// @brief Field k_EUserUGCList_VotedDown value: I32(3)
static ::Steamworks::EUserUGCList const k_EUserUGCList_VotedDown;

/// @brief Field k_EUserUGCList_VotedOn value: I32(1)
static ::Steamworks::EUserUGCList const k_EUserUGCList_VotedOn;

/// @brief Field k_EUserUGCList_VotedUp value: I32(2)
static ::Steamworks::EUserUGCList const k_EUserUGCList_VotedUp;

/// @brief Field k_EUserUGCList_WillVoteLater value: I32(4)
static ::Steamworks::EUserUGCList const k_EUserUGCList_WillVoteLater;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EUserUGCList, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EUserUGCList) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
