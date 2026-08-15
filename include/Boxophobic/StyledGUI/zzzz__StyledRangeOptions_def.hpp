#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledRangeOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StyledRangeOptions)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledRangeOptions;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledRangeOptions*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledRangeOptions*, "Boxophobic.StyledGUI", "StyledRangeOptions");
// Dependencies UnityEngine.PropertyAttribute
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledRangeOptions
class CORDL_TYPE StyledRangeOptions : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field display, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_display, put=__cordl_internal_set_display)) ::StringW  display;

/// @brief Field max, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) float_t  max;

/// @brief Field min, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) float_t  min;

/// @brief Field options, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_options, put=__cordl_internal_set_options)) ::ArrayW<::StringW>  options;

static inline ::Boxophobic::StyledGUI::StyledRangeOptions* New_ctor(::StringW  display, float_t  min, float_t  max, ::ArrayW<::StringW>  options) ;

constexpr ::StringW const& __cordl_internal_get_display() const;

constexpr ::StringW& __cordl_internal_get_display() ;

constexpr float_t const& __cordl_internal_get_max() const;

constexpr float_t& __cordl_internal_get_max() ;

constexpr float_t const& __cordl_internal_get_min() const;

constexpr float_t& __cordl_internal_get_min() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_options() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_options() ;

constexpr void __cordl_internal_set_display(::StringW  value) ;

constexpr void __cordl_internal_set_max(float_t  value) ;

constexpr void __cordl_internal_set_min(float_t  value) ;

constexpr void __cordl_internal_set_options(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x1804bd630, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  display, float_t  min, float_t  max, ::ArrayW<::StringW>  options) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledRangeOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledRangeOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledRangeOptions(StyledRangeOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledRangeOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledRangeOptions(StyledRangeOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21183};

/// @brief Field display, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___display;

/// @brief Field min, offset: 0x20, size: 0x4, def value: None
 float_t  ___min;

/// @brief Field max, offset: 0x24, size: 0x4, def value: None
 float_t  ___max;

/// @brief Field options, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___options;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::StyledGUI::StyledRangeOptions, ___display) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledRangeOptions, ___min) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledRangeOptions, ___max) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::StyledGUI::StyledRangeOptions, ___options) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::StyledGUI::StyledRangeOptions) == 0x30, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
