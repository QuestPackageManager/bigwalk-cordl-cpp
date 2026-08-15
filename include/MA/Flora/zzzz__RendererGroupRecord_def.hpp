#pragma once
// IWYU pragma private; include "MA/Flora/RendererGroupRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__RendererGroupKey_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererGroupRecord)
// Forward declare root types
namespace MA::Flora {
struct RendererGroupRecord;
}
// Write type traits
MARK_VAL_T(::MA::Flora::RendererGroupRecord);
DEFINE_IL2CPP_CLASS(::MA::Flora::RendererGroupRecord, "MA.Flora", "RendererGroupRecord");
// Dependencies MA.Flora.RendererGroupKey
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.RendererGroupRecord
struct CORDL_TYPE RendererGroupRecord {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RendererGroupRecord() ;

// Ctor Parameters [CppParam { name: "Key", ty: "::MA::Flora::RendererGroupKey", modifiers: "", def_value: None }, CppParam { name: "LodIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "RefCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RendererGroupRecord(::MA::Flora::RendererGroupKey  Key, uint8_t  LodIndex, int32_t  RefCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13075};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Key, offset: 0x0, size: 0x10, def value: None
 ::MA::Flora::RendererGroupKey  Key;

/// @brief Field LodIndex, offset: 0x10, size: 0x1, def value: None
 uint8_t  LodIndex;

/// @brief Field RefCount, offset: 0x14, size: 0x4, def value: None
 int32_t  RefCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::RendererGroupRecord, Key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererGroupRecord, LodIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererGroupRecord, RefCount) == 0x14, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::RendererGroupRecord) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
