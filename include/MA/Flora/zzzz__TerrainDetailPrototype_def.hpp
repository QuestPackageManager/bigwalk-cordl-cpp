#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDetailPrototype.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__EntityObjectRef_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__DetailRenderMode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainDetailPrototype)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
class DetailPrototype;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace MA::Flora {
struct TerrainDetailPrototype;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TerrainDetailPrototype);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailPrototype, "MA.Flora", "TerrainDetailPrototype");
// Dependencies MA.Flora.EntityObjectRef`1<T>, Unity.Mathematics.float3, UnityEngine.Color, UnityEngine.DetailRenderMode
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainDetailPrototype
struct CORDL_TYPE TerrainDetailPrototype {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TerrainDetailPrototype>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::TerrainDetailPrototype>*() ;

/// @brief Method Equals, addr 0x181508b30, size 0x370, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::TerrainDetailPrototype  other) ;

/// @brief Method GetHashCode, addr 0x181508ea0, size 0x240, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValid, addr 0x1815090e0, size 0x40, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method .ctor, addr 0x181509120, size 0x480, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::DetailPrototype*  prototype, int32_t  index) ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TerrainDetailPrototype>"
constexpr ::System::IEquatable_1<::MA::Flora::TerrainDetailPrototype>* i___System__IEquatable_1___MA__Flora__TerrainDetailPrototype_() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailPrototype() ;

// Ctor Parameters [CppParam { name: "Terrain", ty: "::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>", modifiers: "", def_value: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MaxDistance", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UsePrototypeMesh", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "RenderMode", ty: "::UnityEngine::DetailRenderMode", modifiers: "", def_value: None }, CppParam { name: "Prototype", ty: "::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None }, CppParam { name: "PrototypeTexture", ty: "::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Texture>>", modifiers: "", def_value: None }, CppParam { name: "HealthyColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "DryColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "Scale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "MinWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "MaxWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "MinHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "MaxHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "NoiseSeed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "NoiseSpread", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Density", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "HoleEdgePadding", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "TargetCoverage", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "UseDensityScaling", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "AlignToGround", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "PositionJitter", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RenderingEnabled", ty: "bool", modifiers: "", def_value: None }]
constexpr TerrainDetailPrototype(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>  Terrain, int32_t  Index, uint16_t  MaxDistance, bool  UsePrototypeMesh, ::UnityEngine::DetailRenderMode  RenderMode, ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>  Prototype, ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Texture>>  PrototypeTexture, ::UnityEngine::Color  HealthyColor, ::UnityEngine::Color  DryColor, ::Unity::Mathematics::float3  Scale, float_t  MinWidth, float_t  MaxWidth, float_t  MinHeight, float_t  MaxHeight, int32_t  NoiseSeed, float_t  NoiseSpread, float_t  Density, float_t  HoleEdgePadding, float_t  TargetCoverage, bool  UseDensityScaling, float_t  AlignToGround, float_t  PositionJitter, bool  RenderingEnabled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13373};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field Terrain, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>  Terrain;

/// @brief Field Index, offset: 0x4, size: 0x4, def value: None
 int32_t  Index;

/// @brief Field MaxDistance, offset: 0x8, size: 0x2, def value: None
 uint16_t  MaxDistance;

/// @brief Field UsePrototypeMesh, offset: 0xa, size: 0x1, def value: None
 bool  UsePrototypeMesh;

/// @brief Field RenderMode, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::DetailRenderMode  RenderMode;

/// @brief Field Prototype, offset: 0x10, size: 0x4, def value: None
 ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>  Prototype;

/// @brief Field PrototypeTexture, offset: 0x14, size: 0x4, def value: None
 ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Texture>>  PrototypeTexture;

/// @brief Field HealthyColor, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  HealthyColor;

/// @brief Field DryColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  DryColor;

/// @brief Field Scale, offset: 0x38, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Scale;

/// @brief Field MinWidth, offset: 0x44, size: 0x4, def value: None
 float_t  MinWidth;

/// @brief Field MaxWidth, offset: 0x48, size: 0x4, def value: None
 float_t  MaxWidth;

/// @brief Field MinHeight, offset: 0x4c, size: 0x4, def value: None
 float_t  MinHeight;

/// @brief Field MaxHeight, offset: 0x50, size: 0x4, def value: None
 float_t  MaxHeight;

/// @brief Field NoiseSeed, offset: 0x54, size: 0x4, def value: None
 int32_t  NoiseSeed;

/// @brief Field NoiseSpread, offset: 0x58, size: 0x4, def value: None
 float_t  NoiseSpread;

/// @brief Field Density, offset: 0x5c, size: 0x4, def value: None
 float_t  Density;

/// @brief Field HoleEdgePadding, offset: 0x60, size: 0x4, def value: None
 float_t  HoleEdgePadding;

/// @brief Field TargetCoverage, offset: 0x64, size: 0x4, def value: None
 float_t  TargetCoverage;

/// @brief Field UseDensityScaling, offset: 0x68, size: 0x1, def value: None
 bool  UseDensityScaling;

/// @brief Field AlignToGround, offset: 0x6c, size: 0x4, def value: None
 float_t  AlignToGround;

/// @brief Field PositionJitter, offset: 0x70, size: 0x4, def value: None
 float_t  PositionJitter;

/// @brief Field RenderingEnabled, offset: 0x74, size: 0x1, def value: None
 bool  RenderingEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, Terrain) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, Index) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, MaxDistance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, UsePrototypeMesh) == 0xa, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, RenderMode) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, Prototype) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, PrototypeTexture) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, HealthyColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, DryColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, Scale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, MinWidth) == 0x44, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, MaxWidth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, MinHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, MaxHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, NoiseSeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, NoiseSpread) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, Density) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, HoleEdgePadding) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, TargetCoverage) == 0x64, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, UseDensityScaling) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, AlignToGround) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, PositionJitter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailPrototype, RenderingEnabled) == 0x74, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailPrototype) == 0x78, "Size mismatch!");

} // namespace end def MA::Flora
