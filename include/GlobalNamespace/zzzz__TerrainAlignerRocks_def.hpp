#pragma once
// IWYU pragma private; include "GlobalNamespace/TerrainAlignerRocks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TerrainAlignerRocks)
// Forward declare root types
namespace GlobalNamespace {
class TerrainAlignerRocks;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TerrainAlignerRocks*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TerrainAlignerRocks*, "", "TerrainAlignerRocks");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TerrainAlignerRocks
class CORDL_TYPE TerrainAlignerRocks : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::TerrainAlignerRocks* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainAlignerRocks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainAlignerRocks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainAlignerRocks(TerrainAlignerRocks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainAlignerRocks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainAlignerRocks(TerrainAlignerRocks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4925};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TerrainAlignerRocks) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
