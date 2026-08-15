#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrusionShapes/ShapeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShapeType)
// Forward declare root types
namespace UnityEngine::Splines::ExtrusionShapes {
struct ShapeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::ExtrusionShapes::ShapeType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::ExtrusionShapes::ShapeType, "UnityEngine.Splines.ExtrusionShapes", "ShapeType");
// Dependencies 
namespace UnityEngine::Splines::ExtrusionShapes {
// Is value type: true
// CS Name: UnityEngine.Splines.ExtrusionShapes.ShapeType
struct CORDL_TYPE ShapeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShapeType_Unwrapped
enum struct __ShapeType_Unwrapped : int32_t {
__E_Circle = static_cast<int32_t>(0x0),
__E_Square = static_cast<int32_t>(0x1),
__E_Road = static_cast<int32_t>(0x2),
__E_Spline = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShapeType_Unwrapped () const noexcept {
return static_cast<__ShapeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ShapeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShapeType(int32_t  value__) noexcept;

/// @brief Field Circle value: I32(0)
static ::UnityEngine::Splines::ExtrusionShapes::ShapeType const Circle;

/// @brief Field Road value: I32(2)
static ::UnityEngine::Splines::ExtrusionShapes::ShapeType const Road;

/// @brief Field Spline value: I32(3)
static ::UnityEngine::Splines::ExtrusionShapes::ShapeType const Spline;

/// @brief Field Square value: I32(1)
static ::UnityEngine::Splines::ExtrusionShapes::ShapeType const Square;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18780};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::ExtrusionShapes::ShapeType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::ExtrusionShapes::ShapeType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines::ExtrusionShapes
