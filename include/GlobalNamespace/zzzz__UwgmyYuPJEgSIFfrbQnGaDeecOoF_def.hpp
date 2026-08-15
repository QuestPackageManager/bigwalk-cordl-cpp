#pragma once
// IWYU pragma private; include "GlobalNamespace/UwgmyYuPJEgSIFfrbQnGaDeecOoF.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UwgmyYuPJEgSIFfrbQnGaDeecOoF)
// Forward declare root types
namespace GlobalNamespace {
struct UwgmyYuPJEgSIFfrbQnGaDeecOoF;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF, "", "UwgmyYuPJEgSIFfrbQnGaDeecOoF");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UwgmyYuPJEgSIFfrbQnGaDeecOoF
struct CORDL_TYPE UwgmyYuPJEgSIFfrbQnGaDeecOoF {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UwgmyYuPJEgSIFfrbQnGaDeecOoF_Unwrapped
enum struct __UwgmyYuPJEgSIFfrbQnGaDeecOoF_Unwrapped : int32_t {
__E_RigidbodyInterpolation2D = static_cast<int32_t>(0x0),
__E_RigidbodySleepMode2D = static_cast<int32_t>(0x1),
__E_CollisionDetectionMode2D = static_cast<int32_t>(0x2),
__E_PhysicsMaterial2D = static_cast<int32_t>(0x3),
__E_Collider2D = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UwgmyYuPJEgSIFfrbQnGaDeecOoF_Unwrapped () const noexcept {
return static_cast<__UwgmyYuPJEgSIFfrbQnGaDeecOoF_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UwgmyYuPJEgSIFfrbQnGaDeecOoF() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UwgmyYuPJEgSIFfrbQnGaDeecOoF(int32_t  value__) noexcept;

/// @brief Field Collider2D value: I32(4)
static ::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF const Collider2D;

/// @brief Field CollisionDetectionMode2D value: I32(2)
static ::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF const CollisionDetectionMode2D;

/// @brief Field PhysicsMaterial2D value: I32(3)
static ::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF const PhysicsMaterial2D;

/// @brief Field RigidbodyInterpolation2D value: I32(0)
static ::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF const RigidbodyInterpolation2D;

/// @brief Field RigidbodySleepMode2D value: I32(1)
static ::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF const RigidbodySleepMode2D;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2964};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UwgmyYuPJEgSIFfrbQnGaDeecOoF) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
