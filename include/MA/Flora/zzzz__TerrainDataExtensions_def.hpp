#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDataExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainDataExtensions)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct DetailInstanceTransform;
}
namespace UnityEngine {
class DetailPrototype;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
struct TreeInstance;
}
// Forward declare root types
namespace MA::Flora {
class TerrainDataExtensions;
}
// Write type traits
MARK_REF_T(::MA::Flora::TerrainDataExtensions*);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDataExtensions*, "MA.Flora", "TerrainDataExtensions");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TerrainDataExtensions
class CORDL_TYPE TerrainDataExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method ComputeDetailInstanceTransforms, addr 0x181502ef0, size 0xa0, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> ComputeDetailInstanceTransforms(::UnityEngine::TerrainData*  terrainData, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::Unity::Collections::Allocator  allocator, ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method GetTreeInstances, addr 0x181502f90, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> GetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetTreeInstances, addr 0x181502ff0, size 0x40, virtual false, abstract: false, final false
static inline void GetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::NativeList_1<::UnityEngine::TreeInstance>  treeInstances) ;

/// @brief Method PrototypeRootGameObject, addr 0x181503030, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> PrototypeRootGameObject(::UnityEngine::DetailPrototype*  detailPrototype) ;

/// @brief Method RemoveTreePrototype, addr 0x1815030a0, size 0x40, virtual false, abstract: false, final false
static inline void RemoveTreePrototype(::UnityEngine::TerrainData*  terrainData, int32_t  index) ;

/// @brief Method RootGameObject, addr 0x1815030e0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> RootGameObject(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method SetDetailLayer, addr 0x181503140, size 0xa0, virtual false, abstract: false, final false
static inline void SetDetailLayer(::UnityEngine::TerrainData*  terrainData, int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::Unity::Collections::NativeArray_1<int32_t>  data) ;

/// @brief Method SetTreeInstances, addr 0x1815031e0, size 0x60, virtual false, abstract: false, final false
static inline void SetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  instances, bool  snapToHeightmap) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainDataExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainDataExtensions(TerrainDataExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainDataExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainDataExtensions(TerrainDataExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13372};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::TerrainDataExtensions) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
