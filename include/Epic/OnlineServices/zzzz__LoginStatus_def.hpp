#pragma once
// IWYU pragma private; include "Epic/OnlineServices/LoginStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoginStatus)
// Forward declare root types
namespace Epic::OnlineServices {
struct LoginStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::LoginStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::LoginStatus, "Epic.OnlineServices", "LoginStatus");
// Dependencies 
namespace Epic::OnlineServices {
// Is value type: true
// CS Name: Epic.OnlineServices.LoginStatus
struct CORDL_TYPE LoginStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoginStatus_Unwrapped
enum struct __LoginStatus_Unwrapped : int32_t {
__E_NotLoggedIn = static_cast<int32_t>(0x0),
__E_UsingLocalProfile = static_cast<int32_t>(0x1),
__E_LoggedIn = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoginStatus_Unwrapped () const noexcept {
return static_cast<__LoginStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoginStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoginStatus(int32_t  value__) noexcept;

/// @brief Field LoggedIn value: I32(2)
static ::Epic::OnlineServices::LoginStatus const LoggedIn;

/// @brief Field NotLoggedIn value: I32(0)
static ::Epic::OnlineServices::LoginStatus const NotLoggedIn;

/// @brief Field UsingLocalProfile value: I32(1)
static ::Epic::OnlineServices::LoginStatus const UsingLocalProfile;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7452};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::LoginStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::LoginStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices
