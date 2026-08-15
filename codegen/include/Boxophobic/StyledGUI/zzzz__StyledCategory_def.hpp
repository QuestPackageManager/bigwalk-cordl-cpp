#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StyledCategory)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledCategory;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledCategory*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledCategory*, "Boxophobic.StyledGUI", "StyledCategory");
// Dependencies UnityEngine.PropertyAttribute
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledCategory
class CORDL_TYPE StyledCategory : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field category, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_category, put=__cordl_internal_set_category)) ::StringW  category;

/// @brief Field colapsable, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_colapsable, put=__cordl_internal_set_colapsable)) bool  colapsable;

/// @brief Field down, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_down, put=__cordl_internal_set_down)) float_t  down;

/// @brief Field message, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

/// @brief Field top, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_top, put=__cordl_internal_set_top)) float_t  top;

static inline ::Boxophobic::StyledGUI::StyledCategory* New_ctor(::StringW  category) ;

static inline ::Boxophobic::StyledGUI::StyledCategory* New_ctor(::StringW  category, bool  colapsable, ::StringW  message, int32_t  top, int32_t  down) ;

static inline ::Boxophobic::StyledGUI::StyledCategory* New_ctor(::StringW  category, bool  colapsable, int32_t  top, int32_t  down) ;

static inline ::Boxophobic::StyledGUI::StyledCategory* New_ctor(::StringW  category, float_t  top, float_t  down) ;

constexpr ::StringW const& __cordl_internal_get_category() const;

constexpr ::StringW& __cordl_internal_get_category() ;

constexpr bool const& __cordl_internal_get_colapsable() const;

constexpr bool& __cordl_internal_get_colapsable() ;

constexpr float_t const& __cordl_internal_get_down() const;

constexpr float_t& __cordl_internal_get_down() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr float_t const& __cordl_internal_get_top() const;

constexpr float_t& __cordl_internal_get_top() ;

constexpr void __cordl_internal_set_category(::StringW  value) ;

constexpr void __cordl_internal_set_colapsable(bool  value) ;

constexpr void __cordl_internal_set_down(float_t  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

constexpr void __cordl_internal_set_top(float_t  value) ;

/// @brief Method .ctor, addr 0x1804bd260, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  category) ;

/// @brief Method .ctor, addr 0x1804bd1e0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  category, bool  colapsable, ::StringW  message, int32_t  top, int32_t  down) ;

/// @brief Method .ctor, addr 0x1804bd170, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  category, bool  colapsable, int32_t  top, int32_t  down) ;

/// @brief Method .ctor, addr 0x1804bd2b0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  category, float_t  top, float_t  down) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledCategory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledCategory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledCategory(StyledCategory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledCategory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledCategory(StyledCategory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21175};

/// @brief Field category, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___category;

/// @brief Field colapsable, offset: 0x20, size: 0x1, def value: None
 bool  ___colapsable;

/// @brief Field message, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___message;

/// @brief Field top, offset: 0x30, size: 0x4, def value: None
 float_t  ___top;

/// @brief Field down, offset: 0x34, size: 0x4, def value: None
 float_t  ___down;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::StyledGUI::StyledCategory, ___category) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledCategory, ___colapsable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledCategory, ___message) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledCategory, ___top) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledCategory, ___down) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::StyledGUI::StyledCategory) == 0x38, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
