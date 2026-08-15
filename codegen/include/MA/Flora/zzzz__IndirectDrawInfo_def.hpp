#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDrawInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectDrawInfo)
// Forward declare root types
namespace MA::Flora {
struct IndirectDrawInfo;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectDrawInfo);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectDrawInfo, "MA.Flora", "IndirectDrawInfo");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectDrawInfo
struct CORDL_TYPE IndirectDrawInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IndirectDrawInfo() ;

// Ctor Parameters [CppParam { name: "indexCountPerInstance", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "startIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "baseVertexIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "startInstance", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr IndirectDrawInfo(uint32_t  indexCountPerInstance, uint32_t  startIndex, uint32_t  baseVertexIndex, uint32_t  startInstance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13191};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field indexCountPerInstance, offset: 0x0, size: 0x4, def value: None
 uint32_t  indexCountPerInstance;

/// @brief Field startIndex, offset: 0x4, size: 0x4, def value: None
 uint32_t  startIndex;

/// @brief Field baseVertexIndex, offset: 0x8, size: 0x4, def value: None
 uint32_t  baseVertexIndex;

/// @brief Field startInstance, offset: 0xc, size: 0x4, def value: None
 uint32_t  startInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectDrawInfo, indexCountPerInstance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawInfo, startIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawInfo, baseVertexIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectDrawInfo, startInstance) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectDrawInfo) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
