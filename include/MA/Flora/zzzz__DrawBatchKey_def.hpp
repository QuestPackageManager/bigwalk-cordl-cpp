#pragma once
// IWYU pragma private; include "MA/Flora/DrawBatchKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__DrawRangeIndex_def.hpp"
#include "MA/Flora/zzzz__IndirectStateFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawBatchKey)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace MA::Flora {
struct DrawBatchKey;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DrawBatchKey);
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawBatchKey, "MA.Flora", "DrawBatchKey");
// Dependencies MA.Flora.BatchDomainIndex, MA.Flora.DrawRangeIndex, MA.Flora.IndirectStateFlags, UnityEngine.EntityId, UnityEngine.MeshTopology, UnityEngine.Rendering.BatchDrawCommandFlags, UnityEngine.Rendering.BatchMaterialID, UnityEngine.Rendering.BatchMeshID
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DrawBatchKey
struct CORDL_TYPE DrawBatchKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DrawBatchKey>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::DrawBatchKey>*() ;

/// @brief Method Equals, addr 0x1814ba480, size 0xf0, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::DrawBatchKey  other) ;

/// @brief Method GetHashCode, addr 0x1814ba570, size 0xf0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DrawBatchKey>"
constexpr ::System::IEquatable_1<::MA::Flora::DrawBatchKey>* i___System__IEquatable_1___MA__Flora__DrawBatchKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawBatchKey() ;

// Ctor Parameters [CppParam { name: "RangeIndex", ty: "::MA::Flora::DrawRangeIndex", modifiers: "", def_value: None }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: None }, CppParam { name: "MeshID", ty: "::UnityEngine::Rendering::BatchMeshID", modifiers: "", def_value: None }, CppParam { name: "MeshEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "LodIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ActiveMeshLod", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SubMeshIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "MaterialID", ty: "::UnityEngine::Rendering::BatchMaterialID", modifiers: "", def_value: None }, CppParam { name: "MaterialEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "Flags", ty: "::UnityEngine::Rendering::BatchDrawCommandFlags", modifiers: "", def_value: None }, CppParam { name: "SupportedStateFlags", ty: "::MA::Flora::IndirectStateFlags", modifiers: "", def_value: None }, CppParam { name: "SupportedStateMask", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: None }, CppParam { name: "BaseVertex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "FirstIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "IndexCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr DrawBatchKey(::MA::Flora::DrawRangeIndex  RangeIndex, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, ::UnityEngine::Rendering::BatchMeshID  MeshID, ::UnityEngine::EntityId  MeshEntityId, int32_t  LodIndex, int32_t  ActiveMeshLod, uint16_t  SubMeshIndex, ::UnityEngine::Rendering::BatchMaterialID  MaterialID, ::UnityEngine::EntityId  MaterialEntityId, ::UnityEngine::Rendering::BatchDrawCommandFlags  Flags, ::MA::Flora::IndirectStateFlags  SupportedStateFlags, uint8_t  SupportedStateMask, ::UnityEngine::MeshTopology  Topology, uint32_t  BaseVertex, uint32_t  FirstIndex, uint32_t  IndexCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13182};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field RangeIndex, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::DrawRangeIndex  RangeIndex;

/// @brief Field BatchDomainIndex, offset: 0x4, size: 0x4, def value: None
 ::MA::Flora::BatchDomainIndex  BatchDomainIndex;

/// @brief Field MeshID, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchMeshID  MeshID;

/// @brief Field MeshEntityId, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::EntityId  MeshEntityId;

/// @brief Field LodIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  LodIndex;

/// @brief Field ActiveMeshLod, offset: 0x14, size: 0x4, def value: None
 int32_t  ActiveMeshLod;

/// @brief Field SubMeshIndex, offset: 0x18, size: 0x2, def value: None
 uint16_t  SubMeshIndex;

/// @brief Field MaterialID, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchMaterialID  MaterialID;

/// @brief Field MaterialEntityId, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::EntityId  MaterialEntityId;

/// @brief Field Flags, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchDrawCommandFlags  Flags;

/// @brief Field SupportedStateFlags, offset: 0x28, size: 0x4, def value: None
 ::MA::Flora::IndirectStateFlags  SupportedStateFlags;

/// @brief Field SupportedStateMask, offset: 0x2c, size: 0x1, def value: None
 uint8_t  SupportedStateMask;

/// @brief Field Topology, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::MeshTopology  Topology;

/// @brief Field BaseVertex, offset: 0x34, size: 0x4, def value: None
 uint32_t  BaseVertex;

/// @brief Field FirstIndex, offset: 0x38, size: 0x4, def value: None
 uint32_t  FirstIndex;

/// @brief Field IndexCount, offset: 0x3c, size: 0x4, def value: None
 uint32_t  IndexCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DrawBatchKey, RangeIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, BatchDomainIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, MeshID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, MeshEntityId) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, LodIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, ActiveMeshLod) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, SubMeshIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, MaterialID) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, MaterialEntityId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, Flags) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, SupportedStateFlags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, SupportedStateMask) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, Topology) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, BaseVertex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, FirstIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatchKey, IndexCount) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DrawBatchKey) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
