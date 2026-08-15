#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledIndent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyledIndent)
// Forward declare root types
namespace Boxophobic::StyledGUI {
class StyledIndent;
}
// Write type traits
MARK_REF_T(::Boxophobic::StyledGUI::StyledIndent*);
DEFINE_IL2CPP_CLASS(::Boxophobic::StyledGUI::StyledIndent*, "Boxophobic.StyledGUI", "StyledIndent");
// Dependencies UnityEngine.PropertyAttribute
namespace Boxophobic::StyledGUI {
// Is value type: false
// CS Name: Boxophobic.StyledGUI.StyledIndent
class CORDL_TYPE StyledIndent : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field indent, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_indent, put=__cordl_internal_set_indent)) int32_t  indent;

static inline ::Boxophobic::StyledGUI::StyledIndent* New_ctor(int32_t  indent) ;

constexpr int32_t const& __cordl_internal_get_indent() const;

constexpr int32_t& __cordl_internal_get_indent() ;

constexpr void __cordl_internal_set_indent(int32_t  value) ;

/// @brief Method .ctor, addr 0x1804bd4f0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  indent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyledIndent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyledIndent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyledIndent(StyledIndent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyledIndent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyledIndent(StyledIndent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21178};

/// @brief Field indent, offset: 0x14, size: 0x4, def value: None
 int32_t  ___indent;

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::StyledGUI::StyledIndent, ___indent) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::StyledGUI::StyledIndent) == 0x20, "Size mismatch!");

} // namespace end def Boxophobic::StyledGUI
