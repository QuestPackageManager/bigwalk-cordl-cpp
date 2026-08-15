#pragma once
// IWYU pragma private; include "Steamworks/ELeaderboardDisplayType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ELeaderboardDisplayType)
// Forward declare root types
namespace Steamworks {
struct ELeaderboardDisplayType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ELeaderboardDisplayType);
DEFINE_IL2CPP_CLASS(::Steamworks::ELeaderboardDisplayType, "Steamworks", "ELeaderboardDisplayType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ELeaderboardDisplayType
struct CORDL_TYPE ELeaderboardDisplayType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ELeaderboardDisplayType_Unwrapped
enum struct __ELeaderboardDisplayType_Unwrapped : int32_t {
__E_k_ELeaderboardDisplayTypeNone = static_cast<int32_t>(0x0),
__E_k_ELeaderboardDisplayTypeNumeric = static_cast<int32_t>(0x1),
__E_k_ELeaderboardDisplayTypeTimeSeconds = static_cast<int32_t>(0x2),
__E_k_ELeaderboardDisplayTypeTimeMilliSeconds = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ELeaderboardDisplayType_Unwrapped () const noexcept {
return static_cast<__ELeaderboardDisplayType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ELeaderboardDisplayType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ELeaderboardDisplayType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16300};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ELeaderboardDisplayTypeNone value: I32(0)
static ::Steamworks::ELeaderboardDisplayType const k_ELeaderboardDisplayTypeNone;

/// @brief Field k_ELeaderboardDisplayTypeNumeric value: I32(1)
static ::Steamworks::ELeaderboardDisplayType const k_ELeaderboardDisplayTypeNumeric;

/// @brief Field k_ELeaderboardDisplayTypeTimeMilliSeconds value: I32(3)
static ::Steamworks::ELeaderboardDisplayType const k_ELeaderboardDisplayTypeTimeMilliSeconds;

/// @brief Field k_ELeaderboardDisplayTypeTimeSeconds value: I32(2)
static ::Steamworks::ELeaderboardDisplayType const k_ELeaderboardDisplayTypeTimeSeconds;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ELeaderboardDisplayType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ELeaderboardDisplayType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
