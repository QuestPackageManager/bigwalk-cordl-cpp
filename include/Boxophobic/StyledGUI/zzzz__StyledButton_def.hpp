#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StyledButton)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledButton;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledButton*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledButton*, "Boxophobic.StyledGUI", "StyledButton");
// Dependencies UnityEngine.PropertyAttribute
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledButton
class CORDL_TYPE StyledButton : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field down, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_down, put=__cordl_internal_set_down)) float_t  down;

/// @brief Field text, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::StringW  text;

/// @brief Field top, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_top, put=__cordl_internal_set_top)) float_t  top;

static inline ::Boxophobic::StyledGUI::StyledButton* New_ctor(::StringW  text) ;

static inline ::Boxophobic::StyledGUI::StyledButton* New_ctor(::StringW  text, float_t  top, float_t  down) ;

constexpr float_t const& __cordl_internal_get_down() const;

constexpr float_t& __cordl_internal_get_down() ;

constexpr ::StringW const& __cordl_internal_get_text() const;

constexpr ::StringW& __cordl_internal_get_text() ;

constexpr float_t const& __cordl_internal_get_top() const;

constexpr float_t& __cordl_internal_get_top() ;

constexpr void __cordl_internal_set_down(float_t  value) ;

constexpr void __cordl_internal_set_text(::StringW  value) ;

constexpr void __cordl_internal_set_top(float_t  value) ;

/// @brief Method .ctor, addr 0x1804bd110, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  text) ;

/// @brief Method .ctor, addr 0x1804bd090, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  text, float_t  top, float_t  down) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledButton(StyledButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledButton(StyledButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21174};

/// @brief Field text, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___text;

/// @brief Field top, offset: 0x20, size: 0x4, def value: None
 float_t  ___top;

/// @brief Field down, offset: 0x24, size: 0x4, def value: None
 float_t  ___down;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::StyledGUI::StyledButton, ___text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledButton, ___top) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledButton, ___down) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::StyledGUI::StyledButton) == 0x28, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
