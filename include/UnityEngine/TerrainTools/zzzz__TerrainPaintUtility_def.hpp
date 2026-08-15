#pragma once
// IWYU pragma private; include "UnityEngine/TerrainTools/TerrainPaintUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TerrainPaintUtility)
namespace UnityEngine::TerrainTools {
struct BrushTransform;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::TerrainTools {
class TerrainPaintUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::TerrainTools::TerrainPaintUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainTools::TerrainPaintUtility*, "UnityEngine.TerrainTools", "TerrainPaintUtility");
// Dependencies System.Object
namespace UnityEngine::TerrainTools {
// Is value type: false
// CS Name: UnityEngine.TerrainTools.TerrainPaintUtility
class CORDL_TYPE TerrainPaintUtility : public ::System::Object {
public:
// Declarations
/// @brief Method CalculateBrushTransform, addr 0x182312700, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::TerrainTools::BrushTransform CalculateBrushTransform(::UnityEngine::Terrain*  terrain, ::UnityEngine::Vector2  brushCenterTerrainUV, float_t  brushSize, float_t  brushRotationDegrees) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainPaintUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainPaintUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainPaintUtility(TerrainPaintUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainPaintUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainPaintUtility(TerrainPaintUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20345};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TerrainTools::TerrainPaintUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::TerrainTools
