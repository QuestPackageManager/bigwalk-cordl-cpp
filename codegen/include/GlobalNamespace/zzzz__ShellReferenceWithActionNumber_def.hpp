#pragma once
// IWYU pragma private; include "GlobalNamespace/ShellReferenceWithActionNumber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShellReferenceWithActionNumber)
namespace GlobalNamespace {
struct SeaShell_ShellReference;
}
// Forward declare root types
namespace GlobalNamespace {
struct ShellReferenceWithActionNumber;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShellReferenceWithActionNumber);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShellReferenceWithActionNumber, "", "ShellReferenceWithActionNumber");
// Dependencies SeaShell::ShellReference
namespace GlobalNamespace {
// Is value type: true
// CS Name: ShellReferenceWithActionNumber
struct CORDL_TYPE ShellReferenceWithActionNumber {
public:
// Declarations
/// @brief Method .ctor, addr 0x1803223e0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::SeaShell_ShellReference  shellReference, int32_t  actionNumber) ;

// Ctor Parameters []
// @brief default ctor
constexpr ShellReferenceWithActionNumber() ;

// Ctor Parameters [CppParam { name: "shellReference", ty: "::GlobalNamespace::SeaShell_ShellReference", modifiers: "", def_value: None }, CppParam { name: "actionNumber", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShellReferenceWithActionNumber(::GlobalNamespace::SeaShell_ShellReference  shellReference, int32_t  actionNumber) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5518};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field shellReference, offset: 0x0, size: 0xc, def value: None
 ::GlobalNamespace::SeaShell_ShellReference  shellReference;

/// @brief Field actionNumber, offset: 0xc, size: 0x4, def value: None
 int32_t  actionNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShellReferenceWithActionNumber, shellReference) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShellReferenceWithActionNumber, actionNumber) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShellReferenceWithActionNumber) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
