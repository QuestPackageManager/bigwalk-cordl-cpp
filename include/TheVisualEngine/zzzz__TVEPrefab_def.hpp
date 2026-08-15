#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEPrefab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TVEPrefab)
// Forward declare root types
namespace TheVisualEngine {
class TVEPrefab;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEPrefab*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEPrefab*, "TheVisualEngine", "TVEPrefab");
// Dependencies Boxophobic.StyledGUI.StyledMonoBehaviour
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEPrefab
class CORDL_TYPE TVEPrefab : public ::Boxophobic::StyledGUI::StyledMonoBehaviour {
public:
// Declarations
static inline ::TheVisualEngine::TVEPrefab* New_ctor() ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEPrefab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEPrefab", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEPrefab(TVEPrefab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEPrefab", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEPrefab(TVEPrefab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TheVisualEngine::TVEPrefab) == 0x20, "Size mismatch!");

} // namespace end def TheVisualEngine
