#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckCondition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PeckCondition)
// Forward declare root types
namespace GlobalNamespace {
struct PeckCondition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckCondition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckCondition, "", "PeckCondition");
// Dependencies PeckStateFilter, PeckSystemReference
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckCondition
struct CORDL_TYPE PeckCondition {
public:
// Declarations
/// @brief Method ConditionMet, addr 0x180446fd0, size 0xc0, virtual false, abstract: false, final false
inline bool ConditionMet() ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckCondition() ;

// Ctor Parameters [CppParam { name: "peckSystemReference", ty: "::GlobalNamespace::PeckSystemReference", modifiers: "", def_value: None }, CppParam { name: "filter", ty: "::GlobalNamespace::PeckStateFilter", modifiers: "", def_value: None }, CppParam { name: "defaultOutcome", ty: "bool", modifiers: "", def_value: None }]
constexpr PeckCondition(::GlobalNamespace::PeckSystemReference  peckSystemReference, ::GlobalNamespace::PeckStateFilter  filter, bool  defaultOutcome) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5336};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field peckSystemReference, offset: 0x0, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Field filter, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  filter;

/// @brief Field defaultOutcome, offset: 0x38, size: 0x1, def value: None
 bool  defaultOutcome;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckCondition, peckSystemReference) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCondition, filter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckCondition, defaultOutcome) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckCondition) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
