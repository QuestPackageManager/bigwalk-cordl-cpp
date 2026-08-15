#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileSetCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PegTileSet_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PegTileSetCollection)
namespace GlobalNamespace {
struct PropGroup;
}
// Forward declare root types
namespace GlobalNamespace {
struct PegTileSetCollection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PegTileSetCollection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileSetCollection, "", "PegTileSetCollection");
// Dependencies PegTileSet, PropGroup
namespace GlobalNamespace {
// Is value type: true
// CS Name: PegTileSetCollection
struct CORDL_TYPE PegTileSetCollection {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PegTileSetCollection() ;

// Ctor Parameters [CppParam { name: "pegTileSet", ty: "::GlobalNamespace::PegTileSet", modifiers: "", def_value: None }, CppParam { name: "allowRepeats", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "propGroups", ty: "::ArrayW<::GlobalNamespace::PropGroup>", modifiers: "", def_value: None }]
constexpr PegTileSetCollection(::GlobalNamespace::PegTileSet  pegTileSet, bool  allowRepeats, ::ArrayW<::GlobalNamespace::PropGroup>  propGroups) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5096};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field pegTileSet, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PegTileSet  pegTileSet;

/// @brief Field allowRepeats, offset: 0x4, size: 0x1, def value: None
 bool  allowRepeats;

/// @brief Field propGroups, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PropGroup>  propGroups;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileSetCollection, pegTileSet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSetCollection, allowRepeats) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileSetCollection, propGroups) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileSetCollection) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
