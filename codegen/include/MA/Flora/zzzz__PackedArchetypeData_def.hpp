#pragma once
// IWYU pragma private; include "MA/Flora/PackedArchetypeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PackedArchetypeData)
namespace MA::Flora {
struct ArchetypeIndex;
}
// Forward declare root types
namespace MA::Flora {
struct PackedArchetypeData;
}
// Write type traits
MARK_VAL_T(::MA::Flora::PackedArchetypeData);
DEFINE_IL2CPP_CLASS(::MA::Flora::PackedArchetypeData, "MA.Flora", "PackedArchetypeData");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.PackedArchetypeData
struct CORDL_TYPE PackedArchetypeData {
public:
// Declarations
/// @brief Method .ctor, addr 0x181460920, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::ArchetypeIndex  archetype) ;

// Ctor Parameters []
// @brief default ctor
constexpr PackedArchetypeData() ;

// Ctor Parameters [CppParam { name: "templateIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "batchDomainIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "batchInstanceOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "maxRenderDistance", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PackedArchetypeData(uint32_t  templateIndex, uint32_t  batchDomainIndex, uint32_t  batchInstanceOffset, uint32_t  maxRenderDistance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12907};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field templateIndex, offset: 0x0, size: 0x4, def value: None
 uint32_t  templateIndex;

/// @brief Field batchDomainIndex, offset: 0x4, size: 0x4, def value: None
 uint32_t  batchDomainIndex;

/// @brief Field batchInstanceOffset, offset: 0x8, size: 0x4, def value: None
 uint32_t  batchInstanceOffset;

/// @brief Field maxRenderDistance, offset: 0xc, size: 0x4, def value: None
 uint32_t  maxRenderDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::PackedArchetypeData, templateIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PackedArchetypeData, batchDomainIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PackedArchetypeData, batchInstanceOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::PackedArchetypeData, maxRenderDistance) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::PackedArchetypeData) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
