#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/SanctionAppealReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SanctionAppealReason)
// Forward declare root types
namespace Epic::OnlineServices::Sanctions {
struct SanctionAppealReason;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sanctions::SanctionAppealReason);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sanctions::SanctionAppealReason, "Epic.OnlineServices.Sanctions", "SanctionAppealReason");
// Dependencies 
namespace Epic::OnlineServices::Sanctions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sanctions.SanctionAppealReason
struct CORDL_TYPE SanctionAppealReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SanctionAppealReason_Unwrapped
enum struct __SanctionAppealReason_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_IncorrectSanction = static_cast<int32_t>(0x1),
__E_CompromisedAccount = static_cast<int32_t>(0x2),
__E_UnfairPunishment = static_cast<int32_t>(0x3),
__E_AppealForForgiveness = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SanctionAppealReason_Unwrapped () const noexcept {
return static_cast<__SanctionAppealReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SanctionAppealReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SanctionAppealReason(int32_t  value__) noexcept;

/// @brief Field AppealForForgiveness value: I32(4)
static ::Epic::OnlineServices::Sanctions::SanctionAppealReason const AppealForForgiveness;

/// @brief Field CompromisedAccount value: I32(2)
static ::Epic::OnlineServices::Sanctions::SanctionAppealReason const CompromisedAccount;

/// @brief Field IncorrectSanction value: I32(1)
static ::Epic::OnlineServices::Sanctions::SanctionAppealReason const IncorrectSanction;

/// @brief Field Invalid value: I32(0)
static ::Epic::OnlineServices::Sanctions::SanctionAppealReason const Invalid;

/// @brief Field UnfairPunishment value: I32(3)
static ::Epic::OnlineServices::Sanctions::SanctionAppealReason const UnfairPunishment;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7892};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sanctions::SanctionAppealReason, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sanctions::SanctionAppealReason) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sanctions
