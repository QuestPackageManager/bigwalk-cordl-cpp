#pragma once
// IWYU pragma private; include "UnityEngine/RigidbodyType2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RigidbodyType2D)
// Forward declare root types
namespace UnityEngine {
struct RigidbodyType2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RigidbodyType2D);
DEFINE_IL2CPP_CLASS(::UnityEngine::RigidbodyType2D, "UnityEngine", "RigidbodyType2D");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RigidbodyType2D
struct CORDL_TYPE RigidbodyType2D {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RigidbodyType2D_Unwrapped
enum struct __RigidbodyType2D_Unwrapped : int32_t {
__E_Dynamic = static_cast<int32_t>(0x0),
__E_Kinematic = static_cast<int32_t>(0x1),
__E_Static = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RigidbodyType2D_Unwrapped () const noexcept {
return static_cast<__RigidbodyType2D_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RigidbodyType2D() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RigidbodyType2D(int32_t  value__) noexcept;

/// @brief Field Dynamic value: I32(0)
static ::UnityEngine::RigidbodyType2D const Dynamic;

/// @brief Field Kinematic value: I32(1)
static ::UnityEngine::RigidbodyType2D const Kinematic;

/// @brief Field Static value: I32(2)
static ::UnityEngine::RigidbodyType2D const Static;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19791};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RigidbodyType2D, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::RigidbodyType2D) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
