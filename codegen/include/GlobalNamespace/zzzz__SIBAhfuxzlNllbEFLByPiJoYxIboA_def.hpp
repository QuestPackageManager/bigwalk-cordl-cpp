#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBAhfuxzlNllbEFLByPiJoYxIboA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIBAhfuxzlNllbEFLByPiJoYxIboA)
// Forward declare root types
namespace GlobalNamespace {
struct SIBAhfuxzlNllbEFLByPiJoYxIboA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIBAhfuxzlNllbEFLByPiJoYxIboA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIBAhfuxzlNllbEFLByPiJoYxIboA, "", "SIBAhfuxzlNllbEFLByPiJoYxIboA");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIBAhfuxzlNllbEFLByPiJoYxIboA
struct CORDL_TYPE SIBAhfuxzlNllbEFLByPiJoYxIboA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIBAhfuxzlNllbEFLByPiJoYxIboA_Unwrapped
enum struct __SIBAhfuxzlNllbEFLByPiJoYxIboA_Unwrapped : int32_t {
__E_Gamepad = static_cast<int32_t>(0x0),
__E_Headset = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIBAhfuxzlNllbEFLByPiJoYxIboA_Unwrapped () const noexcept {
return static_cast<__SIBAhfuxzlNllbEFLByPiJoYxIboA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIBAhfuxzlNllbEFLByPiJoYxIboA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SIBAhfuxzlNllbEFLByPiJoYxIboA(int32_t  value__) noexcept;

/// @brief Field Gamepad value: I32(0)
static ::GlobalNamespace::SIBAhfuxzlNllbEFLByPiJoYxIboA const Gamepad;

/// @brief Field Headset value: I32(1)
static ::GlobalNamespace::SIBAhfuxzlNllbEFLByPiJoYxIboA const Headset;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6120};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIBAhfuxzlNllbEFLByPiJoYxIboA, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIBAhfuxzlNllbEFLByPiJoYxIboA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
