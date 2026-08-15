#pragma once
// IWYU pragma private; include "Steamworks/EServerMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EServerMode)
// Forward declare root types
namespace Steamworks {
struct EServerMode;
}
// Write type traits
MARK_VAL_T(::Steamworks::EServerMode);
DEFINE_IL2CPP_CLASS(::Steamworks::EServerMode, "Steamworks", "EServerMode");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EServerMode
struct CORDL_TYPE EServerMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EServerMode_Unwrapped
enum struct __EServerMode_Unwrapped : int32_t {
__E_eServerModeInvalid = static_cast<int32_t>(0x0),
__E_eServerModeNoAuthentication = static_cast<int32_t>(0x1),
__E_eServerModeAuthentication = static_cast<int32_t>(0x2),
__E_eServerModeAuthenticationAndSecure = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EServerMode_Unwrapped () const noexcept {
return static_cast<__EServerMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EServerMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EServerMode(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16309};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field eServerModeAuthentication value: I32(2)
static ::Steamworks::EServerMode const eServerModeAuthentication;

/// @brief Field eServerModeAuthenticationAndSecure value: I32(3)
static ::Steamworks::EServerMode const eServerModeAuthenticationAndSecure;

/// @brief Field eServerModeInvalid value: I32(0)
static ::Steamworks::EServerMode const eServerModeInvalid;

/// @brief Field eServerModeNoAuthentication value: I32(1)
static ::Steamworks::EServerMode const eServerModeNoAuthentication;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EServerMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EServerMode) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
