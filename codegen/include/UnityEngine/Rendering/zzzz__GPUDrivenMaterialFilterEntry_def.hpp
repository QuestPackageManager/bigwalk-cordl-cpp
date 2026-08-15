#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenMaterialFilterEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__GPUDrivenBitOpType_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenMaterialFilterEntry)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUDrivenMaterialFilterEntry;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry, "UnityEngine.Rendering", "GPUDrivenMaterialFilterEntry");
// Dependencies UnityEngine.Rendering.GPUDrivenBitOpType, UnityEngine.Rendering.ShaderTagId
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenMaterialFilterEntry
struct CORDL_TYPE GPUDrivenMaterialFilterEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GPUDrivenMaterialFilterEntry() ;

// Ctor Parameters [CppParam { name: "op", ty: "::UnityEngine::Rendering::GPUDrivenBitOpType", modifiers: "", def_value: None }, CppParam { name: "minQueueValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxQueueValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyTag", ty: "::UnityEngine::Rendering::ShaderTagId", modifiers: "", def_value: None }, CppParam { name: "valueTag", ty: "::UnityEngine::Rendering::ShaderTagId", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyword", ty: "::StringW", modifiers: "", def_value: None }]
constexpr GPUDrivenMaterialFilterEntry(::UnityEngine::Rendering::GPUDrivenBitOpType  op, int32_t  minQueueValue, int32_t  maxQueueValue, ::UnityEngine::Rendering::ShaderTagId  keyTag, ::UnityEngine::Rendering::ShaderTagId  valueTag, int32_t  flags, ::StringW  keyword) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11226};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field op, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Rendering::GPUDrivenBitOpType  op;

/// @brief Field minQueueValue, offset: 0x4, size: 0x4, def value: None
 int32_t  minQueueValue;

/// @brief Field maxQueueValue, offset: 0x8, size: 0x4, def value: None
 int32_t  maxQueueValue;

/// @brief Field keyTag, offset: 0xc, size: 0x4, def value: None
 ::UnityEngine::Rendering::ShaderTagId  keyTag;

/// @brief Field valueTag, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::Rendering::ShaderTagId  valueTag;

/// @brief Field flags, offset: 0x14, size: 0x4, def value: None
 int32_t  flags;

/// @brief Field keyword, offset: 0x18, size: 0x8, def value: None
 ::StringW  keyword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry, op) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry, minQueueValue) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry, maxQueueValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry, keyTag) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry, valueTag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry, flags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry, keyword) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
