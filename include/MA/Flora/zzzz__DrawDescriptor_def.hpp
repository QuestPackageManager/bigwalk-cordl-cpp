#pragma once
// IWYU pragma private; include "MA/Flora/DrawDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__DrawRangeKey_def.hpp"
#include "MA/Flora/zzzz__IndirectStateFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawDescriptor)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct DrawDescriptor;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DrawDescriptor);
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawDescriptor, "MA.Flora", "DrawDescriptor");
// Dependencies MA.Flora.BatchDomainIndex, MA.Flora.DrawRangeKey, MA.Flora.IndirectStateFlags, UnityEngine.EntityId, UnityEngine.MeshTopology, UnityEngine.Rendering.BatchDrawCommandFlags
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DrawDescriptor
struct CORDL_TYPE DrawDescriptor {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DrawDescriptor>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::DrawDescriptor>*() ;

/// @brief Method Equals, addr 0x1814ba6c0, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1814ba760, size 0x190, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::DrawDescriptor  other) ;

/// @brief Method GetHashCode, addr 0x1814ba8f0, size 0x280, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DrawDescriptor>"
constexpr ::System::IEquatable_1<::MA::Flora::DrawDescriptor>* i___System__IEquatable_1___MA__Flora__DrawDescriptor_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawDescriptor() ;

// Ctor Parameters [CppParam { name: "RangeKey", ty: "::MA::Flora::DrawRangeKey", modifiers: "", def_value: None }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: None }, CppParam { name: "MeshEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "LodIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ActiveMeshLod", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SubMeshIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "MaterialEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "Flags", ty: "::UnityEngine::Rendering::BatchDrawCommandFlags", modifiers: "", def_value: None }, CppParam { name: "SupportedStateFlags", ty: "::MA::Flora::IndirectStateFlags", modifiers: "", def_value: None }, CppParam { name: "SupportedStateMask", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: None }, CppParam { name: "BaseVertex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "FirstIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "IndexCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr DrawDescriptor(::MA::Flora::DrawRangeKey  RangeKey, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, ::UnityEngine::EntityId  MeshEntityId, int32_t  LodIndex, int32_t  ActiveMeshLod, uint16_t  SubMeshIndex, ::UnityEngine::EntityId  MaterialEntityId, ::UnityEngine::Rendering::BatchDrawCommandFlags  Flags, ::MA::Flora::IndirectStateFlags  SupportedStateFlags, uint8_t  SupportedStateMask, ::UnityEngine::MeshTopology  Topology, uint32_t  BaseVertex, uint32_t  FirstIndex, uint32_t  IndexCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4c};

/// @brief Field RangeKey, offset: 0x0, size: 0x18, def value: None
 ::MA::Flora::DrawRangeKey  RangeKey;

/// @brief Field BatchDomainIndex, offset: 0x18, size: 0x4, def value: None
 ::MA::Flora::BatchDomainIndex  BatchDomainIndex;

/// @brief Field MeshEntityId, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::EntityId  MeshEntityId;

/// @brief Field LodIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  LodIndex;

/// @brief Field ActiveMeshLod, offset: 0x24, size: 0x4, def value: None
 int32_t  ActiveMeshLod;

/// @brief Field SubMeshIndex, offset: 0x28, size: 0x2, def value: None
 uint16_t  SubMeshIndex;

/// @brief Field MaterialEntityId, offset: 0x2c, size: 0x4, def value: None
 ::UnityEngine::EntityId  MaterialEntityId;

/// @brief Field Flags, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchDrawCommandFlags  Flags;

/// @brief Field SupportedStateFlags, offset: 0x34, size: 0x4, def value: None
 ::MA::Flora::IndirectStateFlags  SupportedStateFlags;

/// @brief Field SupportedStateMask, offset: 0x38, size: 0x1, def value: None
 uint8_t  SupportedStateMask;

/// @brief Field Topology, offset: 0x3c, size: 0x4, def value: None
 ::UnityEngine::MeshTopology  Topology;

/// @brief Field BaseVertex, offset: 0x40, size: 0x4, def value: None
 uint32_t  BaseVertex;

/// @brief Field FirstIndex, offset: 0x44, size: 0x4, def value: None
 uint32_t  FirstIndex;

/// @brief Field IndexCount, offset: 0x48, size: 0x4, def value: None
 uint32_t  IndexCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DrawDescriptor, RangeKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, BatchDomainIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, MeshEntityId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, LodIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, ActiveMeshLod) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, SubMeshIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, MaterialEntityId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, Flags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, SupportedStateFlags) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, SupportedStateMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, Topology) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, BaseVertex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, FirstIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawDescriptor, IndexCount) == 0x48, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DrawDescriptor) == 0x4c, "Size mismatch!");

} // namespace end def MA::Flora
