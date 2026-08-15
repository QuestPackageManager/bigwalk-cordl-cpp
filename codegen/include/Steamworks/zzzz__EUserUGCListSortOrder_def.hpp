#pragma once
// IWYU pragma private; include "Steamworks/EUserUGCListSortOrder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EUserUGCListSortOrder)
// Forward declare root types
namespace Steamworks {
struct EUserUGCListSortOrder;
}
// Write type traits
MARK_VAL_T(::Steamworks::EUserUGCListSortOrder);
DEFINE_IL2CPP_CLASS(::Steamworks::EUserUGCListSortOrder, "Steamworks", "EUserUGCListSortOrder");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EUserUGCListSortOrder
struct CORDL_TYPE EUserUGCListSortOrder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EUserUGCListSortOrder_Unwrapped
enum struct __EUserUGCListSortOrder_Unwrapped : int32_t {
__E_k_EUserUGCListSortOrder_CreationOrderDesc = static_cast<int32_t>(0x0),
__E_k_EUserUGCListSortOrder_CreationOrderAsc = static_cast<int32_t>(0x1),
__E_k_EUserUGCListSortOrder_TitleAsc = static_cast<int32_t>(0x2),
__E_k_EUserUGCListSortOrder_LastUpdatedDesc = static_cast<int32_t>(0x3),
__E_k_EUserUGCListSortOrder_SubscriptionDateDesc = static_cast<int32_t>(0x4),
__E_k_EUserUGCListSortOrder_VoteScoreDesc = static_cast<int32_t>(0x5),
__E_k_EUserUGCListSortOrder_ForModeration = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EUserUGCListSortOrder_Unwrapped () const noexcept {
return static_cast<__EUserUGCListSortOrder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EUserUGCListSortOrder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EUserUGCListSortOrder(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16291};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EUserUGCListSortOrder_CreationOrderAsc value: I32(1)
static ::Steamworks::EUserUGCListSortOrder const k_EUserUGCListSortOrder_CreationOrderAsc;

/// @brief Field k_EUserUGCListSortOrder_CreationOrderDesc value: I32(0)
static ::Steamworks::EUserUGCListSortOrder const k_EUserUGCListSortOrder_CreationOrderDesc;

/// @brief Field k_EUserUGCListSortOrder_ForModeration value: I32(6)
static ::Steamworks::EUserUGCListSortOrder const k_EUserUGCListSortOrder_ForModeration;

/// @brief Field k_EUserUGCListSortOrder_LastUpdatedDesc value: I32(3)
static ::Steamworks::EUserUGCListSortOrder const k_EUserUGCListSortOrder_LastUpdatedDesc;

/// @brief Field k_EUserUGCListSortOrder_SubscriptionDateDesc value: I32(4)
static ::Steamworks::EUserUGCListSortOrder const k_EUserUGCListSortOrder_SubscriptionDateDesc;

/// @brief Field k_EUserUGCListSortOrder_TitleAsc value: I32(2)
static ::Steamworks::EUserUGCListSortOrder const k_EUserUGCListSortOrder_TitleAsc;

/// @brief Field k_EUserUGCListSortOrder_VoteScoreDesc value: I32(5)
static ::Steamworks::EUserUGCListSortOrder const k_EUserUGCListSortOrder_VoteScoreDesc;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EUserUGCListSortOrder, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EUserUGCListSortOrder) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
