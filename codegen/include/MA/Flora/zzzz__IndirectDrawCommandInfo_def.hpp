#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDrawCommandInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__DrawBatchIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandIndirect_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(IndirectDrawCommandInfo)
// Forward declare root types
namespace MA::Flora {
struct IndirectDrawCommandInfo;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectDrawCommandInfo);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectDrawCommandInfo, "MA.Flora", "IndirectDrawCommandInfo");
// Dependencies MA.Flora.DrawBatchIndex, UnityEngine.Rendering.BatchDrawCommandIndirect
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectDrawCommandInfo
struct CORDL_TYPE IndirectDrawCommandInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IndirectDrawCommandInfo() ;

// Ctor Parameters [CppParam { name: "BatchIndex", ty: "::MA::Flora::DrawBatchIndex", modifiers: "", def_value: None }, CppParam { name: "Command", ty: "::UnityEngine::Rendering::BatchDrawCommandIndirect", modifiers: "", def_value: None }]
constexpr IndirectDrawCommandInfo(::MA::Flora::DrawBatchIndex  BatchIndex, ::UnityEngine::Rendering::BatchDrawCommandIndirect  Command) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13166};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field BatchIndex, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::DrawBatchIndex  BatchIndex;

/// @brief Field Command, offset: 0x4, size: 0x34, def value: None
 ::UnityEngine::Rendering::BatchDrawCommandIndirect  Command;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectDrawCommandInfo, BatchIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawCommandInfo, Command) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectDrawCommandInfo) == 0x38, "Size mismatch!");

} // namespace end def MA::Flora
