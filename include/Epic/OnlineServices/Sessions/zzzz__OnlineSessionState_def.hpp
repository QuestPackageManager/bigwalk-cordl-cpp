#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnlineSessionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnlineSessionState)
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct OnlineSessionState;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::OnlineSessionState);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnlineSessionState, "Epic.OnlineServices.Sessions", "OnlineSessionState");
// Dependencies 
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.OnlineSessionState
struct CORDL_TYPE OnlineSessionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OnlineSessionState_Unwrapped
enum struct __OnlineSessionState_Unwrapped : int32_t {
__E_NoSession = static_cast<int32_t>(0x0),
__E_Creating = static_cast<int32_t>(0x1),
__E_Pending = static_cast<int32_t>(0x2),
__E_Starting = static_cast<int32_t>(0x3),
__E_InProgress = static_cast<int32_t>(0x4),
__E_Ending = static_cast<int32_t>(0x5),
__E_Ended = static_cast<int32_t>(0x6),
__E_Destroying = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OnlineSessionState_Unwrapped () const noexcept {
return static_cast<__OnlineSessionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OnlineSessionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OnlineSessionState(int32_t  value__) noexcept;

/// @brief Field Creating value: I32(1)
static ::Epic::OnlineServices::Sessions::OnlineSessionState const Creating;

/// @brief Field Destroying value: I32(7)
static ::Epic::OnlineServices::Sessions::OnlineSessionState const Destroying;

/// @brief Field Ended value: I32(6)
static ::Epic::OnlineServices::Sessions::OnlineSessionState const Ended;

/// @brief Field Ending value: I32(5)
static ::Epic::OnlineServices::Sessions::OnlineSessionState const Ending;

/// @brief Field InProgress value: I32(4)
static ::Epic::OnlineServices::Sessions::OnlineSessionState const InProgress;

/// @brief Field NoSession value: I32(0)
static ::Epic::OnlineServices::Sessions::OnlineSessionState const NoSession;

/// @brief Field Pending value: I32(2)
static ::Epic::OnlineServices::Sessions::OnlineSessionState const Pending;

/// @brief Field Starting value: I32(3)
static ::Epic::OnlineServices::Sessions::OnlineSessionState const Starting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7775};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::OnlineSessionState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::OnlineSessionState) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
