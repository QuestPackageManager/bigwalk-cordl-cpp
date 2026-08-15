#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledInteractive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(StyledInteractive)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledInteractive;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledInteractive*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledInteractive*, "Boxophobic.StyledGUI", "StyledInteractive");
// Dependencies UnityEngine.PropertyAttribute
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledInteractive
class CORDL_TYPE StyledInteractive : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::Boxophobic::StyledGUI::StyledInteractive* New_ctor() ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledInteractive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledInteractive", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledInteractive(StyledInteractive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledInteractive", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledInteractive(StyledInteractive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21179};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Boxophobic::StyledGUI::StyledInteractive) == 0x18, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
