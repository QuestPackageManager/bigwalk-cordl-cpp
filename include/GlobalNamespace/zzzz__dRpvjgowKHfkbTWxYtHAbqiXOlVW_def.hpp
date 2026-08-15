#pragma once
// IWYU pragma private; include "GlobalNamespace/dRpvjgowKHfkbTWxYtHAbqiXOlVW.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(dRpvjgowKHfkbTWxYtHAbqiXOlVW)
// Forward declare root types
namespace GlobalNamespace {
struct dRpvjgowKHfkbTWxYtHAbqiXOlVW;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::dRpvjgowKHfkbTWxYtHAbqiXOlVW);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::dRpvjgowKHfkbTWxYtHAbqiXOlVW, "", "dRpvjgowKHfkbTWxYtHAbqiXOlVW");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: dRpvjgowKHfkbTWxYtHAbqiXOlVW
struct CORDL_TYPE dRpvjgowKHfkbTWxYtHAbqiXOlVW {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __dRpvjgowKHfkbTWxYtHAbqiXOlVW_Unwrapped
enum struct __dRpvjgowKHfkbTWxYtHAbqiXOlVW_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_True = static_cast<int32_t>(0x1),
__E_False = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __dRpvjgowKHfkbTWxYtHAbqiXOlVW_Unwrapped () const noexcept {
return static_cast<__dRpvjgowKHfkbTWxYtHAbqiXOlVW_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr dRpvjgowKHfkbTWxYtHAbqiXOlVW() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr dRpvjgowKHfkbTWxYtHAbqiXOlVW(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::dRpvjgowKHfkbTWxYtHAbqiXOlVW const Default;

/// @brief Field False value: I32(2)
static ::GlobalNamespace::dRpvjgowKHfkbTWxYtHAbqiXOlVW const False;

/// @brief Field True value: I32(1)
static ::GlobalNamespace::dRpvjgowKHfkbTWxYtHAbqiXOlVW const True;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2963};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::dRpvjgowKHfkbTWxYtHAbqiXOlVW, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::dRpvjgowKHfkbTWxYtHAbqiXOlVW) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
