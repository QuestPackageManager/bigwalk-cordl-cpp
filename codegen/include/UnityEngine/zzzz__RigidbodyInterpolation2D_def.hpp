#pragma once
// IWYU pragma private; include "UnityEngine/RigidbodyInterpolation2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RigidbodyInterpolation2D)
// Forward declare root types
namespace UnityEngine {
struct RigidbodyInterpolation2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RigidbodyInterpolation2D);
DEFINE_IL2CPP_CLASS(::UnityEngine::RigidbodyInterpolation2D, "UnityEngine", "RigidbodyInterpolation2D");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RigidbodyInterpolation2D
struct CORDL_TYPE RigidbodyInterpolation2D {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RigidbodyInterpolation2D_Unwrapped
enum struct __RigidbodyInterpolation2D_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Interpolate = static_cast<int32_t>(0x1),
__E_Extrapolate = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RigidbodyInterpolation2D_Unwrapped () const noexcept {
return static_cast<__RigidbodyInterpolation2D_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RigidbodyInterpolation2D() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RigidbodyInterpolation2D(int32_t  value__) noexcept;

/// @brief Field Extrapolate value: I32(2)
static ::UnityEngine::RigidbodyInterpolation2D const Extrapolate;

/// @brief Field Interpolate value: I32(1)
static ::UnityEngine::RigidbodyInterpolation2D const Interpolate;

/// @brief Field None value: I32(0)
static ::UnityEngine::RigidbodyInterpolation2D const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19788};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RigidbodyInterpolation2D, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::RigidbodyInterpolation2D) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
