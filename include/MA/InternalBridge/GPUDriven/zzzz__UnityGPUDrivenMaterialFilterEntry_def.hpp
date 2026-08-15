#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPUDrivenMaterialFilterEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__GPUDrivenBitOpType_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityGPUDrivenMaterialFilterEntry)
namespace UnityEngine::Rendering {
struct GPUDrivenMaterialFilterEntry;
}
// Forward declare root types
namespace MA::InternalBridge::GPUDriven {
struct UnityGPUDrivenMaterialFilterEntry;
}
// Write type traits
MARK_VAL_T(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry, "MA.InternalBridge.GPUDriven", "UnityGPUDrivenMaterialFilterEntry");
// Dependencies UnityEngine.Rendering.GPUDrivenBitOpType, UnityEngine.Rendering.ShaderTagId
namespace MA::InternalBridge::GPUDriven {
// Is value type: true
// CS Name: MA.InternalBridge.GPUDriven.UnityGPUDrivenMaterialFilterEntry
struct CORDL_TYPE UnityGPUDrivenMaterialFilterEntry {
public:
// Declarations
/// @brief Method op_Implicit, addr 0x181ece080, size 0xf0, virtual false, abstract: false, final false
static inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenMaterialFilterEntry(::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry  entry) ;

/// @brief Method op_Implicit, addr 0x181ece080, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GPUDrivenMaterialFilterEntry op_Implicit___UnityEngine__Rendering__GPUDrivenMaterialFilterEntry(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry  entry) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityGPUDrivenMaterialFilterEntry() ;

// Ctor Parameters [CppParam { name: "op", ty: "::UnityEngine::Rendering::GPUDrivenBitOpType", modifiers: "", def_value: None }, CppParam { name: "minQueueValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxQueueValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyTag", ty: "::UnityEngine::Rendering::ShaderTagId", modifiers: "", def_value: None }, CppParam { name: "valueTag", ty: "::UnityEngine::Rendering::ShaderTagId", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyword", ty: "::StringW", modifiers: "", def_value: None }]
constexpr UnityGPUDrivenMaterialFilterEntry(::UnityEngine::Rendering::GPUDrivenBitOpType  op, int32_t  minQueueValue, int32_t  maxQueueValue, ::UnityEngine::Rendering::ShaderTagId  keyTag, ::UnityEngine::Rendering::ShaderTagId  valueTag, int32_t  flags, ::StringW  keyword) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21133};

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
static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry, op) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry, minQueueValue) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry, maxQueueValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry, keyTag) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry, valueTag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry, flags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry, keyword) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenMaterialFilterEntry) == 0x20, "Size mismatch!");

} // namespace end def MA::InternalBridge::GPUDriven
