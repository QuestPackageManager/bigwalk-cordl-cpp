#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SaveEntry)
// Forward declare root types
namespace GlobalNamespace {
struct SaveEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SaveEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SaveEntry, "", "SaveEntry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SaveEntry
struct CORDL_TYPE SaveEntry {
public:
// Declarations
/// @brief Method .ctor, addr 0x1802f17c0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveEntry() ;

// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SaveEntry(::StringW  key, int32_t  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5598};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key, offset: 0x0, size: 0x8, def value: None
 ::StringW  key;

/// @brief Field value, offset: 0x8, size: 0x4, def value: None
 int32_t  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaveEntry, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaveEntry, value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SaveEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
