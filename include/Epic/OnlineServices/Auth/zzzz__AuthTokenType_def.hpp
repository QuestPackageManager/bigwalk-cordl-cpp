#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/AuthTokenType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthTokenType)
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct AuthTokenType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::AuthTokenType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::AuthTokenType, "Epic.OnlineServices.Auth", "AuthTokenType");
// Dependencies 
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.AuthTokenType
struct CORDL_TYPE AuthTokenType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AuthTokenType_Unwrapped
enum struct __AuthTokenType_Unwrapped : int32_t {
__E_Client = static_cast<int32_t>(0x0),
__E_User = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AuthTokenType_Unwrapped () const noexcept {
return static_cast<__AuthTokenType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AuthTokenType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AuthTokenType(int32_t  value__) noexcept;

/// @brief Field Client value: I32(0)
static ::Epic::OnlineServices::Auth::AuthTokenType const Client;

/// @brief Field User value: I32(1)
static ::Epic::OnlineServices::Auth::AuthTokenType const User;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9229};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::AuthTokenType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::AuthTokenType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
