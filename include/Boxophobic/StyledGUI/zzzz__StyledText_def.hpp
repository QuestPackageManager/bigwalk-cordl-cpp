#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StyledText)
namespace UnityEngine {
struct TextAnchor;
}
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledText;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledText*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledText*, "Boxophobic.StyledGUI", "StyledText");
// Dependencies UnityEngine.PropertyAttribute, UnityEngine.TextAnchor
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledText
class CORDL_TYPE StyledText : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field alignment, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_alignment, put=__cordl_internal_set_alignment)) ::UnityEngine::TextAnchor  alignment;

/// @brief Field down, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_down, put=__cordl_internal_set_down)) float_t  down;

/// @brief Field text, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::StringW  text;

/// @brief Field top, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_top, put=__cordl_internal_set_top)) float_t  top;

static inline ::Boxophobic::StyledGUI::StyledText* New_ctor() ;

static inline ::Boxophobic::StyledGUI::StyledText* New_ctor(::UnityEngine::TextAnchor  alignment) ;

static inline ::Boxophobic::StyledGUI::StyledText* New_ctor(::UnityEngine::TextAnchor  alignment, float_t  top, float_t  down) ;

constexpr ::UnityEngine::TextAnchor const& __cordl_internal_get_alignment() const;

constexpr ::UnityEngine::TextAnchor& __cordl_internal_get_alignment() ;

constexpr float_t const& __cordl_internal_get_down() const;

constexpr float_t& __cordl_internal_get_down() ;

constexpr ::StringW const& __cordl_internal_get_text() const;

constexpr ::StringW& __cordl_internal_get_text() ;

constexpr float_t const& __cordl_internal_get_top() const;

constexpr float_t& __cordl_internal_get_top() ;

constexpr void __cordl_internal_set_alignment(::UnityEngine::TextAnchor  value) ;

constexpr void __cordl_internal_set_down(float_t  value) ;

constexpr void __cordl_internal_set_text(::StringW  value) ;

constexpr void __cordl_internal_set_top(float_t  value) ;

/// @brief Method .ctor, addr 0x1804bd6f0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804bd6a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::TextAnchor  alignment) ;

/// @brief Method .ctor, addr 0x1804bd730, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::TextAnchor  alignment, float_t  top, float_t  down) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledText", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledText(StyledText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledText", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledText(StyledText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21185};

/// @brief Field text, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___text;

/// @brief Field alignment, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::TextAnchor  ___alignment;

/// @brief Field top, offset: 0x24, size: 0x4, def value: None
 float_t  ___top;

/// @brief Field down, offset: 0x28, size: 0x4, def value: None
 float_t  ___down;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::StyledGUI::StyledText, ___text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledText, ___alignment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledText, ___top) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledText, ___down) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::StyledGUI::StyledText) == 0x30, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
