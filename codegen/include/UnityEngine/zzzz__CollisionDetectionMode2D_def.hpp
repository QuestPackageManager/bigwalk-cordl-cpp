#pragma once
// IWYU pragma private; include "UnityEngine/CollisionDetectionMode2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionDetectionMode2D)
// Forward declare root types
namespace UnityEngine {
struct CollisionDetectionMode2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CollisionDetectionMode2D);
DEFINE_IL2CPP_CLASS(::UnityEngine::CollisionDetectionMode2D, "UnityEngine", "CollisionDetectionMode2D");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.CollisionDetectionMode2D
struct CORDL_TYPE CollisionDetectionMode2D {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CollisionDetectionMode2D_Unwrapped
enum struct __CollisionDetectionMode2D_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Discrete = static_cast<int32_t>(0x0),
__E_Continuous = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CollisionDetectionMode2D_Unwrapped () const noexcept {
return static_cast<__CollisionDetectionMode2D_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CollisionDetectionMode2D() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CollisionDetectionMode2D(int32_t  value__) noexcept;

/// @brief Field Continuous value: I32(1)
static ::UnityEngine::CollisionDetectionMode2D const Continuous;

/// @brief Field Discrete value: I32(0)
static ::UnityEngine::CollisionDetectionMode2D const Discrete;

/// @brief Field None value: I32(0)
static ::UnityEngine::CollisionDetectionMode2D const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19790};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CollisionDetectionMode2D, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::CollisionDetectionMode2D) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
