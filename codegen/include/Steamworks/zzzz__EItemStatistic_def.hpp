#pragma once
// IWYU pragma private; include "Steamworks/EItemStatistic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EItemStatistic)
// Forward declare root types
namespace Steamworks {
struct EItemStatistic;
}
// Write type traits
MARK_VAL_T(::Steamworks::EItemStatistic);
DEFINE_IL2CPP_CLASS(::Steamworks::EItemStatistic, "Steamworks", "EItemStatistic");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EItemStatistic
struct CORDL_TYPE EItemStatistic {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EItemStatistic_Unwrapped
enum struct __EItemStatistic_Unwrapped : int32_t {
__E_k_EItemStatistic_NumSubscriptions = static_cast<int32_t>(0x0),
__E_k_EItemStatistic_NumFavorites = static_cast<int32_t>(0x1),
__E_k_EItemStatistic_NumFollowers = static_cast<int32_t>(0x2),
__E_k_EItemStatistic_NumUniqueSubscriptions = static_cast<int32_t>(0x3),
__E_k_EItemStatistic_NumUniqueFavorites = static_cast<int32_t>(0x4),
__E_k_EItemStatistic_NumUniqueFollowers = static_cast<int32_t>(0x5),
__E_k_EItemStatistic_NumUniqueWebsiteViews = static_cast<int32_t>(0x6),
__E_k_EItemStatistic_ReportScore = static_cast<int32_t>(0x7),
__E_k_EItemStatistic_NumSecondsPlayed = static_cast<int32_t>(0x8),
__E_k_EItemStatistic_NumPlaytimeSessions = static_cast<int32_t>(0x9),
__E_k_EItemStatistic_NumComments = static_cast<int32_t>(0xa),
__E_k_EItemStatistic_NumSecondsPlayedDuringTimePeriod = static_cast<int32_t>(0xb),
__E_k_EItemStatistic_NumPlaytimeSessionsDuringTimePeriod = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EItemStatistic_Unwrapped () const noexcept {
return static_cast<__EItemStatistic_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EItemStatistic() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EItemStatistic(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16295};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EItemStatistic_NumComments value: I32(10)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumComments;

/// @brief Field k_EItemStatistic_NumFavorites value: I32(1)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumFavorites;

/// @brief Field k_EItemStatistic_NumFollowers value: I32(2)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumFollowers;

/// @brief Field k_EItemStatistic_NumPlaytimeSessions value: I32(9)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumPlaytimeSessions;

/// @brief Field k_EItemStatistic_NumPlaytimeSessionsDuringTimePeriod value: I32(12)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumPlaytimeSessionsDuringTimePeriod;

/// @brief Field k_EItemStatistic_NumSecondsPlayed value: I32(8)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumSecondsPlayed;

/// @brief Field k_EItemStatistic_NumSecondsPlayedDuringTimePeriod value: I32(11)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumSecondsPlayedDuringTimePeriod;

/// @brief Field k_EItemStatistic_NumSubscriptions value: I32(0)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumSubscriptions;

/// @brief Field k_EItemStatistic_NumUniqueFavorites value: I32(4)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumUniqueFavorites;

/// @brief Field k_EItemStatistic_NumUniqueFollowers value: I32(5)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumUniqueFollowers;

/// @brief Field k_EItemStatistic_NumUniqueSubscriptions value: I32(3)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumUniqueSubscriptions;

/// @brief Field k_EItemStatistic_NumUniqueWebsiteViews value: I32(6)
static ::Steamworks::EItemStatistic const k_EItemStatistic_NumUniqueWebsiteViews;

/// @brief Field k_EItemStatistic_ReportScore value: I32(7)
static ::Steamworks::EItemStatistic const k_EItemStatistic_ReportScore;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EItemStatistic, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EItemStatistic) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
