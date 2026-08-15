#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledLayers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StyledLayers)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledLayers;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledLayers*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledLayers*, "Boxophobic.StyledGUI", "StyledLayers");
// Dependencies UnityEngine.PropertyAttribute
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledLayers
class CORDL_TYPE StyledLayers : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field display, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_display, put=__cordl_internal_set_display)) ::StringW  display;

static inline ::Boxophobic::StyledGUI::StyledLayers* New_ctor() ;

static inline ::Boxophobic::StyledGUI::StyledLayers* New_ctor(::StringW  display) ;

constexpr ::StringW const& __cordl_internal_get_display() const;

constexpr ::StringW& __cordl_internal_get_display() ;

constexpr void __cordl_internal_set_display(::StringW  value) ;

/// @brief Method .ctor, addr 0x1804bd520, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bd310, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  display) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledLayers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledLayers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledLayers(StyledLayers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledLayers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledLayers(StyledLayers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21180};

/// @brief Field display, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___display;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::StyledGUI::StyledLayers, ___display) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::StyledGUI::StyledLayers) == 0x20, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
