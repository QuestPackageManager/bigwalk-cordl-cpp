#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StyledDisplay)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledDisplay;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledDisplay*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledDisplay*, "Boxophobic.StyledGUI", "StyledDisplay");
// Dependencies UnityEngine.PropertyAttribute
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledDisplay
class CORDL_TYPE StyledDisplay : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field displayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

static inline ::Boxophobic::StyledGUI::StyledDisplay* New_ctor(::StringW  displayName) ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1804bd310, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  displayName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledDisplay(StyledDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledDisplay(StyledDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21176};

/// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___displayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::StyledGUI::StyledDisplay, ___displayName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::StyledGUI::StyledDisplay) == 0x20, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
