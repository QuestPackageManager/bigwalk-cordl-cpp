#pragma once
// IWYU pragma private; include "MA/Flora/RendererStateRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__RendererStateKey_def.hpp"
#include "MA/Flora/zzzz__TemplateCapabilityProfile_def.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererStateRecord)
// Forward declare root types
namespace MA::Flora {
struct RendererStateRecord;
}
// Write type traits
MARK_VAL_T(::MA::Flora::RendererStateRecord);
DEFINE_IL2CPP_CLASS(::MA::Flora::RendererStateRecord, "MA.Flora", "RendererStateRecord");
// Dependencies MA.Flora.BatchDomainIndex, MA.Flora.RendererStateKey, MA.Flora.TemplateCapabilityProfile, MA.Flora.TemplateRenderType
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.RendererStateRecord
struct CORDL_TYPE RendererStateRecord {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RendererStateRecord() ;

// Ctor Parameters [CppParam { name: "Key", ty: "::MA::Flora::RendererStateKey", modifiers: "", def_value: None }, CppParam { name: "DescriptorCount", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: None }, CppParam { name: "LodIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "::MA::Flora::TemplateRenderType", modifiers: "", def_value: None }, CppParam { name: "CapabilityProfile", ty: "::MA::Flora::TemplateCapabilityProfile", modifiers: "", def_value: None }, CppParam { name: "RefCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RendererStateRecord(::MA::Flora::RendererStateKey  Key, uint16_t  DescriptorCount, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, uint8_t  LodIndex, ::MA::Flora::TemplateRenderType  Type, ::MA::Flora::TemplateCapabilityProfile  CapabilityProfile, int32_t  RefCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13072};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Key, offset: 0x0, size: 0x18, def value: None
 ::MA::Flora::RendererStateKey  Key;

/// @brief Field DescriptorCount, offset: 0x18, size: 0x2, def value: None
 uint16_t  DescriptorCount;

/// @brief Field BatchDomainIndex, offset: 0x1c, size: 0x4, def value: None
 ::MA::Flora::BatchDomainIndex  BatchDomainIndex;

/// @brief Field LodIndex, offset: 0x20, size: 0x1, def value: None
 uint8_t  LodIndex;

/// @brief Field Type, offset: 0x24, size: 0x4, def value: None
 ::MA::Flora::TemplateRenderType  Type;

/// @brief Field CapabilityProfile, offset: 0x28, size: 0x10, def value: None
 ::MA::Flora::TemplateCapabilityProfile  CapabilityProfile;

/// @brief Field RefCount, offset: 0x38, size: 0x4, def value: None
 int32_t  RefCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::RendererStateRecord, Key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererStateRecord, DescriptorCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererStateRecord, BatchDomainIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererStateRecord, LodIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererStateRecord, Type) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererStateRecord, CapabilityProfile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::RendererStateRecord, RefCount) == 0x38, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::RendererStateRecord) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
