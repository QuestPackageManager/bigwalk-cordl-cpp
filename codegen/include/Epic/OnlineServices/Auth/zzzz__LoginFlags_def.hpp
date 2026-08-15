#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoginFlags)
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct LoginFlags;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::LoginFlags);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::LoginFlags, "Epic.OnlineServices.Auth", "LoginFlags");
// Dependencies 
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.LoginFlags
struct CORDL_TYPE LoginFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint64_t;

/// @brief Nested struct __LoginFlags_Unwrapped
enum struct __LoginFlags_Unwrapped : uint64_t {
__E_None = static_cast<uint64_t>(0x0u),
__E_NoUserInterface = static_cast<uint64_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoginFlags_Unwrapped () const noexcept {
return static_cast<__LoginFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint64_t () const noexcept {
return static_cast<uint64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoginFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr LoginFlags(uint64_t  value__) noexcept;

/// @brief Field NoUserInterface value: U64(1)
static ::Epic::OnlineServices::Auth::LoginFlags const NoUserInterface;

/// @brief Field None value: U64(0)
static ::Epic::OnlineServices::Auth::LoginFlags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9250};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Size padding 0x8 - 0x10 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// @brief Field value__, offset: 0x8, size: 0x8, def value: None
 uint64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::LoginFlags, value__) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::LoginFlags) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
