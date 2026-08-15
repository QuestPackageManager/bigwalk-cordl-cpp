#pragma once
// IWYU pragma private; include "MA/Flora/DrawBatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__DrawBatchKey_def.hpp"
#include "MA/Flora/zzzz__DrawMeshInfo_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawBatch)
// Forward declare root types
namespace MA::Flora {
struct DrawBatch;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DrawBatch);
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawBatch, "MA.Flora", "DrawBatch");
// Dependencies MA.Flora.DrawBatchKey, MA.Flora.DrawMeshInfo
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DrawBatch
struct CORDL_TYPE DrawBatch {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DrawBatch() ;

// Ctor Parameters [CppParam { name: "Key", ty: "::MA::Flora::DrawBatchKey", modifiers: "", def_value: None }, CppParam { name: "KeyHash", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MeshInfo", ty: "::MA::Flora::DrawMeshInfo", modifiers: "", def_value: None }]
constexpr DrawBatch(::MA::Flora::DrawBatchKey  Key, int32_t  KeyHash, ::MA::Flora::DrawMeshInfo  MeshInfo) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13185};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x54};

/// @brief Field Key, offset: 0x0, size: 0x40, def value: None
 ::MA::Flora::DrawBatchKey  Key;

/// @brief Field KeyHash, offset: 0x40, size: 0x4, def value: None
 int32_t  KeyHash;

/// @brief Field MeshInfo, offset: 0x44, size: 0x10, def value: None
 ::MA::Flora::DrawMeshInfo  MeshInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DrawBatch, Key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatch, KeyHash) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBatch, MeshInfo) == 0x44, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DrawBatch) == 0x54, "Size mismatch!");

} // namespace end def MA::Flora
