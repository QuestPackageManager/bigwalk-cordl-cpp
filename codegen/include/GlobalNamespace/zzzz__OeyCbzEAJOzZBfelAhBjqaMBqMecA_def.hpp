#pragma once
// IWYU pragma private; include "GlobalNamespace/OeyCbzEAJOzZBfelAhBjqaMBqMecA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OeyCbzEAJOzZBfelAhBjqaMBqMecA)
// Forward declare root types
namespace GlobalNamespace {
struct OeyCbzEAJOzZBfelAhBjqaMBqMecA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OeyCbzEAJOzZBfelAhBjqaMBqMecA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OeyCbzEAJOzZBfelAhBjqaMBqMecA, "", "OeyCbzEAJOzZBfelAhBjqaMBqMecA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OeyCbzEAJOzZBfelAhBjqaMBqMecA
struct CORDL_TYPE OeyCbzEAJOzZBfelAhBjqaMBqMecA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OeyCbzEAJOzZBfelAhBjqaMBqMecA_Unwrapped
enum struct __OeyCbzEAJOzZBfelAhBjqaMBqMecA_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_Device = static_cast<int32_t>(0x1),
__E_Pointer = static_cast<int32_t>(0x2),
__E_Keyboard = static_cast<int32_t>(0x3),
__E_GameControl = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OeyCbzEAJOzZBfelAhBjqaMBqMecA_Unwrapped () const noexcept {
return static_cast<__OeyCbzEAJOzZBfelAhBjqaMBqMecA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OeyCbzEAJOzZBfelAhBjqaMBqMecA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OeyCbzEAJOzZBfelAhBjqaMBqMecA(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::GlobalNamespace::OeyCbzEAJOzZBfelAhBjqaMBqMecA const All;

/// @brief Field Device value: I32(1)
static ::GlobalNamespace::OeyCbzEAJOzZBfelAhBjqaMBqMecA const Device;

/// @brief Field GameControl value: I32(4)
static ::GlobalNamespace::OeyCbzEAJOzZBfelAhBjqaMBqMecA const GameControl;

/// @brief Field Keyboard value: I32(3)
static ::GlobalNamespace::OeyCbzEAJOzZBfelAhBjqaMBqMecA const Keyboard;

/// @brief Field Pointer value: I32(2)
static ::GlobalNamespace::OeyCbzEAJOzZBfelAhBjqaMBqMecA const Pointer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6274};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OeyCbzEAJOzZBfelAhBjqaMBqMecA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OeyCbzEAJOzZBfelAhBjqaMBqMecA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
