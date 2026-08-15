#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledBanner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StyledBanner)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledBanner;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledBanner*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledBanner*, "Boxophobic.StyledGUI", "StyledBanner");
// Dependencies UnityEngine.PropertyAttribute
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledBanner
class CORDL_TYPE StyledBanner : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field colorB, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorB, put=__cordl_internal_set_colorB)) float_t  colorB;

/// @brief Field colorG, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorG, put=__cordl_internal_set_colorG)) float_t  colorG;

/// @brief Field colorR, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorR, put=__cordl_internal_set_colorR)) float_t  colorR;

/// @brief Field helpURL, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_helpURL, put=__cordl_internal_set_helpURL)) ::StringW  helpURL;

/// @brief Field title, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_title, put=__cordl_internal_set_title)) ::StringW  title;

static inline ::Boxophobic::StyledGUI::StyledBanner* New_ctor(float_t  colorR, float_t  colorG, float_t  colorB, ::StringW  title) ;

static inline ::Boxophobic::StyledGUI::StyledBanner* New_ctor(float_t  colorR, float_t  colorG, float_t  colorB, ::StringW  title, ::StringW  helpURL) ;

static inline ::Boxophobic::StyledGUI::StyledBanner* New_ctor(float_t  colorR, float_t  colorG, float_t  colorB, ::StringW  title, ::StringW  subtitle, ::StringW  helpURL) ;

static inline ::Boxophobic::StyledGUI::StyledBanner* New_ctor(::StringW  title) ;

static inline ::Boxophobic::StyledGUI::StyledBanner* New_ctor(::StringW  title, ::StringW  helpURL) ;

static inline ::Boxophobic::StyledGUI::StyledBanner* New_ctor(::StringW  title, ::StringW  subtitle, ::StringW  helpURL) ;

constexpr float_t const& __cordl_internal_get_colorB() const;

constexpr float_t& __cordl_internal_get_colorB() ;

constexpr float_t const& __cordl_internal_get_colorG() const;

constexpr float_t& __cordl_internal_get_colorG() ;

constexpr float_t const& __cordl_internal_get_colorR() const;

constexpr float_t& __cordl_internal_get_colorR() ;

constexpr ::StringW const& __cordl_internal_get_helpURL() const;

constexpr ::StringW& __cordl_internal_get_helpURL() ;

constexpr ::StringW const& __cordl_internal_get_title() const;

constexpr ::StringW& __cordl_internal_get_title() ;

constexpr void __cordl_internal_set_colorB(float_t  value) ;

constexpr void __cordl_internal_set_colorG(float_t  value) ;

constexpr void __cordl_internal_set_colorR(float_t  value) ;

constexpr void __cordl_internal_set_helpURL(::StringW  value) ;

constexpr void __cordl_internal_set_title(::StringW  value) ;

/// @brief Method .ctor, addr 0x1804bcf90, size 0x80, virtual false, abstract: false, final false
inline void _ctor(float_t  colorR, float_t  colorG, float_t  colorB, ::StringW  title) ;

/// @brief Method .ctor, addr 0x1804bce50, size 0x80, virtual false, abstract: false, final false
inline void _ctor(float_t  colorR, float_t  colorG, float_t  colorB, ::StringW  title, ::StringW  helpURL) ;

/// @brief Method .ctor, addr 0x1804bd010, size 0x80, virtual false, abstract: false, final false
inline void _ctor(float_t  colorR, float_t  colorG, float_t  colorB, ::StringW  title, ::StringW  subtitle, ::StringW  helpURL) ;

/// @brief Method .ctor, addr 0x1804bcf30, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  title) ;

/// @brief Method .ctor, addr 0x1804bcdf0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  title, ::StringW  helpURL) ;

/// @brief Method .ctor, addr 0x1804bced0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  title, ::StringW  subtitle, ::StringW  helpURL) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledBanner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledBanner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledBanner(StyledBanner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledBanner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledBanner(StyledBanner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21173};

/// @brief Field colorR, offset: 0x14, size: 0x4, def value: None
 float_t  ___colorR;

/// @brief Field colorG, offset: 0x18, size: 0x4, def value: None
 float_t  ___colorG;

/// @brief Field colorB, offset: 0x1c, size: 0x4, def value: None
 float_t  ___colorB;

/// @brief Field title, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___title;

/// @brief Field helpURL, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___helpURL;

/// @brief Size padding 0x38 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::StyledGUI::StyledBanner, ___colorR) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledBanner, ___colorG) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledBanner, ___colorB) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledBanner, ___title) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledBanner, ___helpURL) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::StyledGUI::StyledBanner) == 0x38, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
