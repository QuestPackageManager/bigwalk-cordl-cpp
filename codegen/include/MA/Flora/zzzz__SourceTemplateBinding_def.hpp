#pragma once
// IWYU pragma private; include "MA/Flora/SourceTemplateBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__SourceRecordIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateIndex_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SourceTemplateBinding)
// Forward declare root types
namespace MA::Flora {
struct SourceTemplateBinding;
}
// Write type traits
MARK_VAL_T(::MA::Flora::SourceTemplateBinding);
DEFINE_IL2CPP_CLASS(::MA::Flora::SourceTemplateBinding, "MA.Flora", "SourceTemplateBinding");
// Dependencies MA.Flora.SourceRecordIndex, MA.Flora.TemplateIndex
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.SourceTemplateBinding
struct CORDL_TYPE SourceTemplateBinding {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SourceTemplateBinding() ;

// Ctor Parameters [CppParam { name: "SourceRecord", ty: "::MA::Flora::SourceRecordIndex", modifiers: "", def_value: None }, CppParam { name: "Template", ty: "::MA::Flora::TemplateIndex", modifiers: "", def_value: None }]
constexpr SourceTemplateBinding(::MA::Flora::SourceRecordIndex  SourceRecord, ::MA::Flora::TemplateIndex  Template) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13065};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field SourceRecord, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::SourceRecordIndex  SourceRecord;

/// @brief Field Template, offset: 0x4, size: 0x4, def value: None
 ::MA::Flora::TemplateIndex  Template;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::SourceTemplateBinding, SourceRecord) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SourceTemplateBinding, Template) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::SourceTemplateBinding) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
