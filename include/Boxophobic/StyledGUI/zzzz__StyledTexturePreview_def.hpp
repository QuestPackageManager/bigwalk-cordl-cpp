#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledTexturePreview.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StyledTexturePreview)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledTexturePreview;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledTexturePreview*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledTexturePreview*, "Boxophobic.StyledGUI", "StyledTexturePreview");
// Dependencies UnityEngine.PropertyAttribute
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledTexturePreview
class CORDL_TYPE StyledTexturePreview : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field displayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

static inline ::Boxophobic::StyledGUI::StyledTexturePreview* New_ctor() ;

static inline ::Boxophobic::StyledGUI::StyledTexturePreview* New_ctor(::StringW  displayName) ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1804bd7a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bd310, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  displayName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledTexturePreview() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledTexturePreview", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledTexturePreview(StyledTexturePreview && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledTexturePreview", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledTexturePreview(StyledTexturePreview const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21186};

/// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___displayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::StyledGUI::StyledTexturePreview, ___displayName) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::StyledGUI::StyledTexturePreview) == 0x20, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
