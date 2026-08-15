#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveEntryString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SaveEntryString)
// Forward declare root types
namespace GlobalNamespace {
struct SaveEntryString;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SaveEntryString);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SaveEntryString, "", "SaveEntryString");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SaveEntryString
struct CORDL_TYPE SaveEntryString {
public:
// Declarations
/// @brief Method .ctor, addr 0x180397590, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, ::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SaveEntryString() ;

// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
constexpr SaveEntryString(::StringW  key, ::StringW  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5599};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key, offset: 0x0, size: 0x8, def value: None
 ::StringW  key;

/// @brief Field value, offset: 0x8, size: 0x8, def value: None
 ::StringW  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaveEntryString, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaveEntryString, value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SaveEntryString) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
