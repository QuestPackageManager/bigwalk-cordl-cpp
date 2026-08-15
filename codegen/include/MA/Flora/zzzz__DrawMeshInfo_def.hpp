#pragma once
// IWYU pragma private; include "MA/Flora/DrawMeshInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawMeshInfo)
// Forward declare root types
namespace MA::Flora {
struct DrawMeshInfo;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DrawMeshInfo);
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawMeshInfo, "MA.Flora", "DrawMeshInfo");
// Dependencies UnityEngine.MeshTopology
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DrawMeshInfo
struct CORDL_TYPE DrawMeshInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DrawMeshInfo() ;

// Ctor Parameters [CppParam { name: "Topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: None }, CppParam { name: "BaseVertex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "FirstIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "IndexCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr DrawMeshInfo(::UnityEngine::MeshTopology  Topology, uint32_t  BaseVertex, uint32_t  FirstIndex, uint32_t  IndexCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13184};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Topology, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::MeshTopology  Topology;

/// @brief Field BaseVertex, offset: 0x4, size: 0x4, def value: None
 uint32_t  BaseVertex;

/// @brief Field FirstIndex, offset: 0x8, size: 0x4, def value: None
 uint32_t  FirstIndex;

/// @brief Field IndexCount, offset: 0xc, size: 0x4, def value: None
 uint32_t  IndexCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DrawMeshInfo, Topology) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawMeshInfo, BaseVertex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawMeshInfo, FirstIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawMeshInfo, IndexCount) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DrawMeshInfo) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
