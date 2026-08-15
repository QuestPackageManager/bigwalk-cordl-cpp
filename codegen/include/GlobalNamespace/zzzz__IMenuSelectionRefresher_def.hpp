#pragma once
// IWYU pragma private; include "GlobalNamespace/IMenuSelectionRefresher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMenuSelectionRefresher)
// Forward declare root types
namespace GlobalNamespace {
class IMenuSelectionRefresher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IMenuSelectionRefresher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IMenuSelectionRefresher*, "", "IMenuSelectionRefresher");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IMenuSelectionRefresher
class CORDL_TYPE IMenuSelectionRefresher {
public:
// Declarations
/// @brief Method RefreshMenuSelection, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void RefreshMenuSelection() ;

// Ctor Parameters [CppParam { name: "", ty: "IMenuSelectionRefresher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMenuSelectionRefresher(IMenuSelectionRefresher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5539};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
