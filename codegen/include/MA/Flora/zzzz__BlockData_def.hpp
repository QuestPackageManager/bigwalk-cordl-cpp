#pragma once
// IWYU pragma private; include "MA/Flora/BlockData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BlockData)
// Forward declare root types
namespace MA::Flora {
struct BlockData;
}
// Write type traits
MARK_VAL_T(::MA::Flora::BlockData);
DEFINE_IL2CPP_CLASS(::MA::Flora::BlockData, "MA.Flora", "BlockData");
// Dependencies UnityEngine.Vector3
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.BlockData
struct CORDL_TYPE BlockData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BlockData() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "cellSize", ty: "float_t", modifiers: "", def_value: None }]
constexpr BlockData(::UnityEngine::Vector3  position, float_t  cellSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13108};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field cellSize, offset: 0xc, size: 0x4, def value: None
 float_t  cellSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::BlockData, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::BlockData, cellSize) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::BlockData) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
