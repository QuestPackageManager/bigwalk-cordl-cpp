#pragma once
// IWYU pragma private; include "Shipmate/Porting/AuthTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthTypes)
// Forward declare root types
namespace Shipmate::Porting {
struct AuthTypes;
}
// Write type traits
MARK_VAL_T(::Shipmate::Porting::AuthTypes);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AuthTypes, "Shipmate.Porting", "AuthTypes");
// Dependencies 
namespace Shipmate::Porting {
// Is value type: true
// CS Name: Shipmate.Porting.AuthTypes
struct CORDL_TYPE AuthTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AuthTypes_Unwrapped
enum struct __AuthTypes_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_Steam = static_cast<int32_t>(0x0),
__E_Epic = static_cast<int32_t>(0x1),
__E_Switch = static_cast<int32_t>(0x2),
__E_GameCore = static_cast<int32_t>(0x3),
__E_PS4 = static_cast<int32_t>(0x4),
__E_PS5 = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AuthTypes_Unwrapped () const noexcept {
return static_cast<__AuthTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AuthTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AuthTypes(int32_t  value__) noexcept;

/// @brief Field Epic value: I32(1)
static ::Shipmate::Porting::AuthTypes const Epic;

/// @brief Field GameCore value: I32(3)
static ::Shipmate::Porting::AuthTypes const GameCore;

/// @brief Field None value: I32(-1)
static ::Shipmate::Porting::AuthTypes const None;

/// @brief Field PS4 value: I32(4)
static ::Shipmate::Porting::AuthTypes const PS4;

/// @brief Field PS5 value: I32(5)
static ::Shipmate::Porting::AuthTypes const PS5;

/// @brief Field Steam value: I32(0)
static ::Shipmate::Porting::AuthTypes const Steam;

/// @brief Field Switch value: I32(2)
static ::Shipmate::Porting::AuthTypes const Switch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20633};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AuthTypes, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AuthTypes) == 0x4, "Size mismatch!");

} // namespace end def Shipmate::Porting
