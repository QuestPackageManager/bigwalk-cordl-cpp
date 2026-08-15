#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/LeaderboardAggregation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardAggregation)
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct LeaderboardAggregation;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation, "Epic.OnlineServices.Leaderboards", "LeaderboardAggregation");
// Dependencies 
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.LeaderboardAggregation
struct CORDL_TYPE LeaderboardAggregation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LeaderboardAggregation_Unwrapped
enum struct __LeaderboardAggregation_Unwrapped : int32_t {
__E_Min = static_cast<int32_t>(0x0),
__E_Max = static_cast<int32_t>(0x1),
__E_Sum = static_cast<int32_t>(0x2),
__E_Latest = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LeaderboardAggregation_Unwrapped () const noexcept {
return static_cast<__LeaderboardAggregation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LeaderboardAggregation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LeaderboardAggregation(int32_t  value__) noexcept;

/// @brief Field Latest value: I32(3)
static ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation const Latest;

/// @brief Field Max value: I32(1)
static ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation const Max;

/// @brief Field Min value: I32(0)
static ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation const Min;

/// @brief Field Sum value: I32(2)
static ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation const Sum;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8716};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::LeaderboardAggregation) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
