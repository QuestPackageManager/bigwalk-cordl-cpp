#pragma once
// IWYU pragma private; include "Rowlan/Genesis/PathSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PathSettings)
namespace Rowlan::Genesis {
class PathSettingsTemplate;
}
namespace Rowlan::Genesis {
struct PathSettings_Shape;
}
namespace UnityEngine {
class TerrainLayer;
}
// Forward declare root types
namespace Rowlan::Genesis {
struct PathSettings_Shape;
}
namespace Rowlan::Genesis {
struct PathSettings;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::PathSettings_Shape);
MARK_VAL_T(::Rowlan::Genesis::PathSettings);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::PathSettings_Shape, "Rowlan.Genesis", "PathSettings/Shape");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::PathSettings, "Rowlan.Genesis", "PathSettings");
// Dependencies 
namespace Rowlan::Genesis {
// Is value type: true
// CS Name: Rowlan.Genesis.PathSettings/Shape
struct CORDL_TYPE PathSettings_Shape {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PathSettings_Shape_Unwrapped
enum struct __PathSettings_Shape_Unwrapped : int32_t {
__E_Line = static_cast<int32_t>(0x0),
__E_Rectangle = static_cast<int32_t>(0x1),
__E_RoundedRectangle = static_cast<int32_t>(0x2),
__E_Circle = static_cast<int32_t>(0x3),
__E_Random = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PathSettings_Shape_Unwrapped () const noexcept {
return static_cast<__PathSettings_Shape_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PathSettings_Shape() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PathSettings_Shape(int32_t  value__) noexcept;

/// @brief Field Circle value: I32(3)
static ::Rowlan::Genesis::PathSettings_Shape const Circle;

/// @brief Field Line value: I32(0)
static ::Rowlan::Genesis::PathSettings_Shape const Line;

/// @brief Field Random value: I32(4)
static ::Rowlan::Genesis::PathSettings_Shape const Random;

/// @brief Field Rectangle value: I32(1)
static ::Rowlan::Genesis::PathSettings_Shape const Rectangle;

/// @brief Field RoundedRectangle value: I32(2)
static ::Rowlan::Genesis::PathSettings_Shape const RoundedRectangle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20382};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::PathSettings_Shape, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::PathSettings_Shape) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis
// Dependencies Rowlan.Genesis.PathSettings::Shape, UnityEngine.Vector2
namespace Rowlan::Genesis {
// Is value type: true
// CS Name: Rowlan.Genesis.PathSettings
struct CORDL_TYPE PathSettings {
public:
// Declarations
using Shape = ::Rowlan::Genesis::PathSettings_Shape;

/// @brief Method Apply, addr 0x181abf530, size 0x60, virtual false, abstract: false, final false
inline void Apply(::Rowlan::Genesis::PathSettingsTemplate*  _cordl_template) ;

/// @brief Method Reset, addr 0x181abf590, size 0x160, virtual false, abstract: false, final false
inline void Reset() ;

// Ctor Parameters []
// @brief default ctor
constexpr PathSettings() ;

// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "shape", ty: "::Rowlan::Genesis::PathSettings_Shape", modifiers: "", def_value: None }, CppParam { name: "closed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deformationAngle", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "subdivisionIterations", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "subdivisionRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "terrainLayer", ty: "::UnityW<::UnityEngine::TerrainLayer>", modifiers: "", def_value: None }]
constexpr PathSettings(bool  active, ::Rowlan::Genesis::PathSettings_Shape  shape, bool  closed, float_t  scale, ::UnityEngine::Vector2  deformationAngle, int32_t  subdivisionIterations, ::UnityEngine::Vector2  subdivisionRange, ::UnityW<::UnityEngine::TerrainLayer>  terrainLayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20383};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field active, offset: 0x0, size: 0x1, def value: None
 bool  active;

/// @brief Field shape, offset: 0x4, size: 0x4, def value: None
 ::Rowlan::Genesis::PathSettings_Shape  shape;

/// @brief Field closed, offset: 0x8, size: 0x1, def value: None
 bool  closed;

/// @brief Field scale, offset: 0xc, size: 0x4, def value: None
 float_t  scale;

/// @brief Field deformationAngle, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  deformationAngle;

/// @brief Field subdivisionIterations, offset: 0x18, size: 0x4, def value: None
 int32_t  subdivisionIterations;

/// @brief Field subdivisionRange, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::Vector2  subdivisionRange;

/// @brief Field terrainLayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TerrainLayer>  terrainLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::PathSettings, active) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettings, shape) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettings, closed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettings, scale) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettings, deformationAngle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettings, subdivisionIterations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettings, subdivisionRange) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::PathSettings, terrainLayer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::PathSettings) == 0x30, "Size mismatch!");

} // namespace end def Rowlan::Genesis
