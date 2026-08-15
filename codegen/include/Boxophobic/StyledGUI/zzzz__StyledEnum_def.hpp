#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyledEnum)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledEnum;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledEnum*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledEnum*, "Boxophobic.StyledGUI", "StyledEnum");
// Dependencies UnityEngine.PropertyAttribute
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledEnum
class CORDL_TYPE StyledEnum : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field display, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_display, put=__cordl_internal_set_display)) ::StringW  display;

/// @brief Field down, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_down, put=__cordl_internal_set_down)) int32_t  down;

/// @brief Field file, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_file, put=__cordl_internal_set_file)) ::StringW  file;

/// @brief Field options, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::StringW  options;

/// @brief Field top, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_top, put=__cordl_internal_set_top)) int32_t  top;

static inline ::Boxophobic::StyledGUI::StyledEnum* New_ctor(::StringW  display, ::StringW  file, ::StringW  options, int32_t  top, int32_t  down) ;

static inline ::Boxophobic::StyledGUI::StyledEnum* New_ctor(::StringW  file, ::StringW  options, int32_t  top, int32_t  down) ;

constexpr ::StringW const& __cordl_internal_get_display() const;

constexpr ::StringW& __cordl_internal_get_display() ;

constexpr int32_t const& __cordl_internal_get_down() const;

constexpr int32_t& __cordl_internal_get_down() ;

constexpr ::StringW const& __cordl_internal_get_file() const;

constexpr ::StringW& __cordl_internal_get_file() ;

constexpr ::StringW const& __cordl_internal_get_options() const;

constexpr ::StringW& __cordl_internal_get_options() ;

constexpr int32_t const& __cordl_internal_get_top() const;

constexpr int32_t& __cordl_internal_get_top() ;

constexpr void __cordl_internal_set_display(::StringW  value) ;

constexpr void __cordl_internal_set_down(int32_t  value) ;

constexpr void __cordl_internal_set_file(::StringW  value) ;

constexpr void __cordl_internal_set_options(::StringW  value) ;

constexpr void __cordl_internal_set_top(int32_t  value) ;

/// @brief Method .ctor, addr 0x1804bd420, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::StringW  display, ::StringW  file, ::StringW  options, int32_t  top, int32_t  down) ;

/// @brief Method .ctor, addr 0x1804bd360, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::StringW  file, ::StringW  options, int32_t  top, int32_t  down) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledEnum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledEnum", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledEnum(StyledEnum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledEnum", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledEnum(StyledEnum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21177};

/// @brief Field display, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___display;

/// @brief Field file, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___file;

/// @brief Field options, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___options;

/// @brief Field top, offset: 0x30, size: 0x4, def value: None
 int32_t  ___top;

/// @brief Field down, offset: 0x34, size: 0x4, def value: None
 int32_t  ___down;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::StyledGUI::StyledEnum, ___display) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledEnum, ___file) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledEnum, ___options) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledEnum, ___top) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledEnum, ___down) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::StyledGUI::StyledEnum) == 0x38, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
