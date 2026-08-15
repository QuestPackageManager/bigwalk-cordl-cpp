#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerEyeMood.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerEyeMood)
// Forward declare root types
namespace GlobalNamespace {
struct PlayerEyeMood;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerEyeMood);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerEyeMood, "", "PlayerEyeMood");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerEyeMood
struct CORDL_TYPE PlayerEyeMood {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerEyeMood_Unwrapped
enum struct __PlayerEyeMood_Unwrapped : int32_t {
__E_Circle = static_cast<int32_t>(0x0),
__E_Line = static_cast<int32_t>(0x1),
__E_Wobbly = static_cast<int32_t>(0x2),
__E_Sleeping = static_cast<int32_t>(0x3),
__E_Squint = static_cast<int32_t>(0x4),
__E_Ring = static_cast<int32_t>(0x5),
__E_Dead = static_cast<int32_t>(0x6),
__E_SmallCircle = static_cast<int32_t>(0x7),
__E_Square = static_cast<int32_t>(0x8),
__E_ThickRing = static_cast<int32_t>(0x9),
__E_Spiral = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerEyeMood_Unwrapped () const noexcept {
return static_cast<__PlayerEyeMood_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerEyeMood() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerEyeMood(int32_t  value__) noexcept;

/// @brief Field Circle value: I32(0)
static ::GlobalNamespace::PlayerEyeMood const Circle;

/// @brief Field Dead value: I32(6)
static ::GlobalNamespace::PlayerEyeMood const Dead;

/// @brief Field Line value: I32(1)
static ::GlobalNamespace::PlayerEyeMood const Line;

/// @brief Field Ring value: I32(5)
static ::GlobalNamespace::PlayerEyeMood const Ring;

/// @brief Field Sleeping value: I32(3)
static ::GlobalNamespace::PlayerEyeMood const Sleeping;

/// @brief Field SmallCircle value: I32(7)
static ::GlobalNamespace::PlayerEyeMood const SmallCircle;

/// @brief Field Spiral value: I32(10)
static ::GlobalNamespace::PlayerEyeMood const Spiral;

/// @brief Field Square value: I32(8)
static ::GlobalNamespace::PlayerEyeMood const Square;

/// @brief Field Squint value: I32(4)
static ::GlobalNamespace::PlayerEyeMood const Squint;

/// @brief Field ThickRing value: I32(9)
static ::GlobalNamespace::PlayerEyeMood const ThickRing;

/// @brief Field Wobbly value: I32(2)
static ::GlobalNamespace::PlayerEyeMood const Wobbly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerEyeMood, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerEyeMood) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
