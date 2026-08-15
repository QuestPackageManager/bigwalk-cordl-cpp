#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginCredentialType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoginCredentialType)
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct LoginCredentialType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::LoginCredentialType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::LoginCredentialType, "Epic.OnlineServices.Auth", "LoginCredentialType");
// Dependencies 
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.LoginCredentialType
struct CORDL_TYPE LoginCredentialType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoginCredentialType_Unwrapped
enum struct __LoginCredentialType_Unwrapped : int32_t {
__E_Password = static_cast<int32_t>(0x0),
__E_ExchangeCode = static_cast<int32_t>(0x1),
__E_PersistentAuth = static_cast<int32_t>(0x2),
__E_DeviceCode = static_cast<int32_t>(0x3),
__E_Developer = static_cast<int32_t>(0x4),
__E_RefreshToken = static_cast<int32_t>(0x5),
__E_AccountPortal = static_cast<int32_t>(0x6),
__E_ExternalAuth = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoginCredentialType_Unwrapped () const noexcept {
return static_cast<__LoginCredentialType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoginCredentialType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoginCredentialType(int32_t  value__) noexcept;

/// @brief Field AccountPortal value: I32(6)
static ::Epic::OnlineServices::Auth::LoginCredentialType const AccountPortal;

/// @brief Field Developer value: I32(4)
static ::Epic::OnlineServices::Auth::LoginCredentialType const Developer;

/// @brief Field DeviceCode value: I32(3)
static ::Epic::OnlineServices::Auth::LoginCredentialType const DeviceCode;

/// @brief Field ExchangeCode value: I32(1)
static ::Epic::OnlineServices::Auth::LoginCredentialType const ExchangeCode;

/// @brief Field ExternalAuth value: I32(7)
static ::Epic::OnlineServices::Auth::LoginCredentialType const ExternalAuth;

/// @brief Field Password value: I32(0)
static ::Epic::OnlineServices::Auth::LoginCredentialType const Password;

/// @brief Field PersistentAuth value: I32(2)
static ::Epic::OnlineServices::Auth::LoginCredentialType const PersistentAuth;

/// @brief Field RefreshToken value: I32(5)
static ::Epic::OnlineServices::Auth::LoginCredentialType const RefreshToken;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9249};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::LoginCredentialType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::LoginCredentialType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
