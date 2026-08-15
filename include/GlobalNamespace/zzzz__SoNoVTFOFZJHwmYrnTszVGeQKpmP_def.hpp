#pragma once
// IWYU pragma private; include "GlobalNamespace/SoNoVTFOFZJHwmYrnTszVGeQKpmP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SoNoVTFOFZJHwmYrnTszVGeQKpmP)
// Forward declare root types
namespace GlobalNamespace {
struct SoNoVTFOFZJHwmYrnTszVGeQKpmP;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SoNoVTFOFZJHwmYrnTszVGeQKpmP);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoNoVTFOFZJHwmYrnTszVGeQKpmP, "", "SoNoVTFOFZJHwmYrnTszVGeQKpmP");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SoNoVTFOFZJHwmYrnTszVGeQKpmP
struct CORDL_TYPE SoNoVTFOFZJHwmYrnTszVGeQKpmP {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SoNoVTFOFZJHwmYrnTszVGeQKpmP_Unwrapped
enum struct __SoNoVTFOFZJHwmYrnTszVGeQKpmP_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_Point = static_cast<int32_t>(0x1),
__E_Line = static_cast<int32_t>(0x2),
__E_TriangleClockwise = static_cast<int32_t>(0x3),
__E_TriangleCounterclockwise = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SoNoVTFOFZJHwmYrnTszVGeQKpmP_Unwrapped () const noexcept {
return static_cast<__SoNoVTFOFZJHwmYrnTszVGeQKpmP_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SoNoVTFOFZJHwmYrnTszVGeQKpmP() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SoNoVTFOFZJHwmYrnTszVGeQKpmP(int32_t  value__) noexcept;

/// @brief Field Line value: I32(2)
static ::GlobalNamespace::SoNoVTFOFZJHwmYrnTszVGeQKpmP const Line;

/// @brief Field Point value: I32(1)
static ::GlobalNamespace::SoNoVTFOFZJHwmYrnTszVGeQKpmP const Point;

/// @brief Field TriangleClockwise value: I32(3)
static ::GlobalNamespace::SoNoVTFOFZJHwmYrnTszVGeQKpmP const TriangleClockwise;

/// @brief Field TriangleCounterclockwise value: I32(4)
static ::GlobalNamespace::SoNoVTFOFZJHwmYrnTszVGeQKpmP const TriangleCounterclockwise;

/// @brief Field Undefined value: I32(0)
static ::GlobalNamespace::SoNoVTFOFZJHwmYrnTszVGeQKpmP const Undefined;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6218};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoNoVTFOFZJHwmYrnTszVGeQKpmP, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoNoVTFOFZJHwmYrnTszVGeQKpmP) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
