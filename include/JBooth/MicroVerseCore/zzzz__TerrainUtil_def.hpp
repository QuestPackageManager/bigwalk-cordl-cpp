#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/TerrainUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainUtil)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class TerrainUtil;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::TerrainUtil*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::TerrainUtil*, "JBooth.MicroVerseCore", "TerrainUtil");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.TerrainUtil
class CORDL_TYPE TerrainUtil : public ::System::Object {
public:
// Declarations
/// @brief Method AdjustForRotation, addr 0x181449b30, size 0x350, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds AdjustForRotation(::UnityEngine::Bounds  b, ::UnityEngine::Quaternion  rot) ;

/// @brief Method ComputeStampMatrix, addr 0x181449e80, size 0x890, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 ComputeStampMatrix(::UnityEngine::Terrain*  terrain, ::UnityEngine::Transform*  transform, bool  heightStamp, int32_t  sizeXOffset, int32_t  sizeZOffset) ;

/// @brief Method ComputeTerrainBounds, addr 0x18144a7c0, size 0x150, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds ComputeTerrainBounds(::UnityEngine::Terrain*  terrain) ;

/// @brief Method ComputeTerrainBounds, addr 0x18144a710, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds ComputeTerrainBounds(::ArrayW<::UnityEngine::Terrain*>  terrains) ;

/// @brief Method ComputeTerrainSize, addr 0x18144a910, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ComputeTerrainSize(::UnityEngine::Terrain*  terrain) ;

/// @brief Method EnsureTexturesAreOnTerrain, addr 0x18144a9c0, size 0x350, virtual false, abstract: false, final false
static inline void EnsureTexturesAreOnTerrain(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  prototypes) ;

/// @brief Method FindTextureChannelIndex, addr 0x18144ad10, size 0x60, virtual false, abstract: false, final false
static inline int32_t FindTextureChannelIndex(::UnityEngine::Terrain*  terrain, ::UnityEngine::TerrainLayer*  layer) ;

/// @brief Method FindTreeIndex, addr 0x18144ad70, size 0x90, virtual false, abstract: false, final false
static inline int32_t FindTreeIndex(::UnityEngine::Terrain*  terrain, ::UnityEngine::GameObject*  prefab) ;

/// @brief Method GenerateMesh, addr 0x18144ae00, size 0x360, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> GenerateMesh(int32_t  segments, ::UnityEngine::Vector3  tsize) ;

/// @brief Method GetBounds, addr 0x18144b160, size 0x270, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetBounds(::UnityEngine::Transform*  transform) ;

static inline ::JBooth::MicroVerseCore::TerrainUtil* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainUtil(TerrainUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainUtil(TerrainUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18056};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::TerrainUtil) == 0x10, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
